/*
 * This file was generated by LibCSS gen_parser 
 * 
 * Generated from:
 *
 * pitch:CSS_PROP_PITCH IDENT:( INHERIT: INITIAL: REVERT: UNSET: X_LOW:0,PITCH_X_LOW LOW:0,PITCH_LOW MEDIUM:0,PITCH_MEDIUM HIGH:0,PITCH_HIGH X_HIGH:0,PITCH_X_HIGH IDENT:) LENGTH_UNIT:( UNIT_HZ:PITCH_FREQUENCY MASK:UNIT_MASK_PITCH RANGE:<0 LENGTH_UNIT:)
 * 
 * Licensed under the MIT License,
 *		  http://www.opensource.org/licenses/mit-license.php
 * Copyright 2010 The NetSurf Browser Project.
 */

#include <assert.h>
#include <string.h>

#include "bytecode/bytecode.h"
#include "bytecode/opcodes.h"
#include "parse/properties/properties.h"
#include "parse/properties/utils.h"

/**
 * Parse pitch
 *
 * \param c	  Parsing context
 * \param vector  Vector of tokens to process
 * \param ctx	  Pointer to vector iteration context
 * \param result  resulting style
 * \return CSS_OK on success,
 *	   CSS_NOMEM on memory exhaustion,
 *	   CSS_INVALID if the input is not valid
 *
 * Post condition: \a *ctx is updated with the next token to process
 *		   If the input is invalid, then \a *ctx remains unchanged.
 */
css_error css__parse_pitch(css_language *c,
		const parserutils_vector *vector, int32_t *ctx,
		css_style *result)
{
	int32_t orig_ctx = *ctx;
	css_error error;
	const css_token *token;
	bool match;

	token = parserutils_vector_iterate(vector, ctx);
	if (token == NULL) {
		*ctx = orig_ctx;
		return CSS_INVALID;
	}

	if ((token->type == CSS_TOKEN_IDENT) &&
			(lwc_string_caseless_isequal(
			token->idata, c->strings[INHERIT],
			&match) == lwc_error_ok && match)) {
		error = css_stylesheet_style_inherit(result,
				CSS_PROP_PITCH);

	} else if ((token->type == CSS_TOKEN_IDENT) &&
			(lwc_string_caseless_isequal(
			token->idata, c->strings[INITIAL],
			&match) == lwc_error_ok && match)) {
		error = css_stylesheet_style_initial(result,
				CSS_PROP_PITCH);

	} else if ((token->type == CSS_TOKEN_IDENT) &&
			(lwc_string_caseless_isequal(
			token->idata, c->strings[REVERT],
			&match) == lwc_error_ok && match)) {
		error = css_stylesheet_style_revert(result,
				CSS_PROP_PITCH);

	} else if ((token->type == CSS_TOKEN_IDENT) &&
			(lwc_string_caseless_isequal(
			token->idata, c->strings[UNSET],
			&match) == lwc_error_ok && match)) {
		error = css_stylesheet_style_unset(result,
				CSS_PROP_PITCH);

	} else if ((token->type == CSS_TOKEN_IDENT) &&
			(lwc_string_caseless_isequal(
			token->idata, c->strings[X_LOW],
			&match) == lwc_error_ok && match)) {
		error = css__stylesheet_style_appendOPV(result,
				CSS_PROP_PITCH,
				0,PITCH_X_LOW);

	} else if ((token->type == CSS_TOKEN_IDENT) &&
			(lwc_string_caseless_isequal(
			token->idata, c->strings[LOW],
			&match) == lwc_error_ok && match)) {
		error = css__stylesheet_style_appendOPV(result,
				CSS_PROP_PITCH,
				0,PITCH_LOW);

	} else if ((token->type == CSS_TOKEN_IDENT) &&
			(lwc_string_caseless_isequal(
			token->idata, c->strings[MEDIUM],
			&match) == lwc_error_ok && match)) {
		error = css__stylesheet_style_appendOPV(result,
				CSS_PROP_PITCH,
				0,PITCH_MEDIUM);

	} else if ((token->type == CSS_TOKEN_IDENT) &&
			(lwc_string_caseless_isequal(
			token->idata, c->strings[HIGH],
			&match) == lwc_error_ok && match)) {
		error = css__stylesheet_style_appendOPV(result,
				CSS_PROP_PITCH,
				0,PITCH_HIGH);

	} else if ((token->type == CSS_TOKEN_IDENT) &&
			(lwc_string_caseless_isequal(
			token->idata, c->strings[X_HIGH],
			&match) == lwc_error_ok && match)) {
		error = css__stylesheet_style_appendOPV(result,
				CSS_PROP_PITCH,
				0,PITCH_X_HIGH);

	} else {
		css_fixed length = 0;
		uint32_t unit = 0;
		*ctx = orig_ctx;

		error = css__parse_unit_specifier(c, vector, ctx, UNIT_HZ, &length, &unit);
		if (error != CSS_OK) {
			*ctx = orig_ctx;
			return error;
		}

		if ((unit & UNIT_MASK_PITCH ) == 0) {
			*ctx = orig_ctx;
			return CSS_INVALID;
		}

		if (length <0) {
			*ctx = orig_ctx;
			return CSS_INVALID;
		}

		error = css__stylesheet_style_appendOPV(result, CSS_PROP_PITCH, 0, PITCH_FREQUENCY);
		if (error != CSS_OK) {
			*ctx = orig_ctx;
			return error;
		}

		error = css__stylesheet_style_vappend(result, 2, length, unit);
	}

	if (error != CSS_OK)
		*ctx = orig_ctx;
	
	return error;
}

