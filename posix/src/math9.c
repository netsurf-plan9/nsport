#include <math.h>
#include <stdint.h>

float
ceilf(float x)
{
	return ceil(x);
}

float
fabsf(float x)
{
	return fabs(x);
}

typedef union {
	float value;
	uint32_t word;
} ieee_float_shape_type;

#define GET_FLOAT_WORD(i,d)                                     \
	do {                                                    \
		ieee_float_shape_type gf_u;                     \
		gf_u.value = (d);                               \
		(i) = gf_u.word;                                \
	} while (0)

#define SET_FLOAT_WORD(d,i) \
	do { \
		ieee_float_shape_type sf_u; \
		sf_u.word = (i); \
		(d) = sf_u.value; \
	} while (0)

float
froundf(float x)
{
  int signbit;
  uint32_t w;
  /* Most significant word, least significant word. */
  int exponent_less_127;

  GET_FLOAT_WORD(w, x);

  /* Extract sign bit. */
  signbit = w & 0x80000000;

  /* Extract exponent field. */
  exponent_less_127 = (int)((w & 0x7f800000) >> 23) - 127;

  if (exponent_less_127 < 23)
    {
      if (exponent_less_127 < 0)
        {
          w &= 0x80000000;
          if (exponent_less_127 == -1)
            /* Result is +1.0 or -1.0. */
            w |= ((uint32_t)127 << 23);
        }
      else
        {
          unsigned int exponent_mask = 0x007fffff >> exponent_less_127;
          if ((w & exponent_mask) == 0)
            /* x has an integral value. */
            return x;

          w += 0x00400000 >> exponent_less_127;
          w &= ~exponent_mask;
        }
    }
  else
    {
      if (exponent_less_127 == 128)
        /* x is NaN or infinite. */
        return x + x;
      else
        return x;
    }
  SET_FLOAT_WORD(x, w);
  return x;
}

long int
lroundf(float x)
{
  int32_t exponent_less_127;
  uint32_t w;
  long int result;
  int32_t sign;

  GET_FLOAT_WORD (w, x);
  exponent_less_127 = ((w & 0x7f800000) >> 23) - 127;
  sign = (w & 0x80000000) != 0 ? -1 : 1;
  w &= 0x7fffff;
  w |= 0x800000;

  if (exponent_less_127 < (int)((8 * sizeof (long int)) - 1))
    {
      if (exponent_less_127 < 0)
        return exponent_less_127 < -1 ? 0 : sign;
      else if (exponent_less_127 >= 23)
        result = (long int) w << (exponent_less_127 - 23);
      else
        {
          w += 0x400000 >> exponent_less_127;
          result = w >> (23 - exponent_less_127);
        }
    }
  else
      return (long int) x;

  return sign * result;
}
