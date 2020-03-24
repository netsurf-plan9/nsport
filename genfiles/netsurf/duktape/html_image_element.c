/* Generated by nsgenbind
 *
 * nsgenbind is published under the MIT Licence.
 * nsgenbind is similar to a compiler is a purely transformative tool which
 * explicitly makes no copyright claim on this generated output
 */

/* DukTape JavaScript bindings for NetSurf browser
 *
 * Copyright 2015 Vincent Sanders <vince@netsurf-browser.org>
 * This file is part of NetSurf, http://www.netsurf-browser.org/
 * Released under the terms of the MIT License,
 *        http://www.opensource.org/licenses/mit-license
 */

#include <dom/dom.h>

#include "utils/log.h"
#include "utils/nsurl.h"

#include "javascript/duktape/duktape.h"

struct browser_window;
struct html_content;
struct dom_node;
struct dom_element;
struct dom_document;
struct dom_html_element;
struct dom_node_character_data;
struct dom_node_text;
struct dom_node_list;
struct dom_node_comment;
struct dom_html_collection;
struct dom_html_br_element;


#include "binding.h"
#include "private.h"
#include "prototype.h"

#include "javascript/duktape/dukky.h"

static void dukky_html_image_element___init(duk_context *ctx, html_image_element_private_t *priv, struct dom_html_element *html_image_element)
{
	dukky_html_element___init(ctx, &priv->parent, html_image_element);
#line 12 "HTMLImageElement.bnd"
#line 48 "html_image_element.c"
}

static void dukky_html_image_element___fini(duk_context *ctx, html_image_element_private_t *priv)
{
	dukky_html_element___fini(ctx, &priv->parent);
}

static duk_ret_t dukky_html_image_element___constructor(duk_context *ctx)
{
	/* create private data and attach to instance */
	html_image_element_private_t *priv = calloc(1, sizeof(*priv));
	if (priv == NULL) return 0;
	duk_push_pointer(ctx, priv);
	duk_put_prop_string(ctx, 0, dukky_magic_string_private);

	dukky_html_image_element___init(ctx, priv, duk_get_pointer(ctx, 1));
	duk_set_top(ctx, 1);
	return 1;
}

static duk_ret_t dukky_html_image_element___destructor(duk_context *ctx)
{
	html_image_element_private_t *priv;
	duk_get_prop_string(ctx, 0, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop(ctx);
	if (priv == NULL) return 0;

	dukky_html_image_element___fini(ctx, priv);
	free(priv);
	return 0;
}

static duk_ret_t dukky_html_image_element_alt_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 17 "HTMLImageElement.bnd"
#line 95 "html_image_element.c"
	dom_exception exc;
	dom_string *str;

	exc = dom_html_image_element_get_alt((struct dom_html_image_element *)((node_private_t*)priv)->node, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	if (str != NULL) {
		duk_push_lstring(ctx,
			dom_string_data(str),
			dom_string_length(str));
		dom_string_unref(str);
	} else {
		duk_push_lstring(ctx, NULL, 0);
	}

	return 1;
}

static duk_ret_t dukky_html_image_element_alt_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 18 "HTMLImageElement.bnd"
#line 129 "html_image_element.c"
	dom_exception exc;
	dom_string *str;
	duk_size_t slen;
	const char *s;
	s = duk_safe_to_lstring(ctx, 0, &slen);

	exc = dom_string_create((const uint8_t *)s, slen, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	exc = dom_html_image_element_set_alt((struct dom_html_image_element *)((node_private_t*)priv)->node, str);
	dom_string_unref(str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_src_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 32 "HTMLImageElement.bnd"
#line 163 "html_image_element.c"
	dom_exception exc;
	dom_string *str;

	exc = dom_html_image_element_get_src((struct dom_html_image_element *)((node_private_t*)priv)->node, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	if (str != NULL) {
		duk_push_lstring(ctx,
			dom_string_data(str),
			dom_string_length(str));
		dom_string_unref(str);
	} else {
		duk_push_lstring(ctx, NULL, 0);
	}

	return 1;
}

static duk_ret_t dukky_html_image_element_src_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 33 "HTMLImageElement.bnd"
#line 197 "html_image_element.c"
	dom_exception exc;
	dom_string *str;
	duk_size_t slen;
	const char *s;
	s = duk_safe_to_lstring(ctx, 0, &slen);

	exc = dom_string_create((const uint8_t *)s, slen, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	exc = dom_html_image_element_set_src((struct dom_html_image_element *)((node_private_t*)priv)->node, str);
	dom_string_unref(str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_srcset_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_srcset_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_sizes_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_sizes_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_crossOrigin_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_crossOrigin_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_useMap_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 35 "HTMLImageElement.bnd"
#line 321 "html_image_element.c"
	dom_exception exc;
	dom_string *str;

	exc = dom_html_image_element_get_use_map((struct dom_html_image_element *)((node_private_t*)priv)->node, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	if (str != NULL) {
		duk_push_lstring(ctx,
			dom_string_data(str),
			dom_string_length(str));
		dom_string_unref(str);
	} else {
		duk_push_lstring(ctx, NULL, 0);
	}

	return 1;
}

static duk_ret_t dukky_html_image_element_useMap_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 36 "HTMLImageElement.bnd"
#line 355 "html_image_element.c"
	dom_exception exc;
	dom_string *str;
	duk_size_t slen;
	const char *s;
	s = duk_safe_to_lstring(ctx, 0, &slen);

	exc = dom_string_create((const uint8_t *)s, slen, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	exc = dom_html_image_element_set_use_map((struct dom_html_image_element *)((node_private_t*)priv)->node, str);
	dom_string_unref(str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_isMap_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 23 "HTMLImageElement.bnd"
#line 389 "html_image_element.c"
	dom_exception exc;
	bool b;

	exc = dom_html_image_element_get_is_map((struct dom_html_image_element *)((node_private_t*)priv)->node, &b);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	duk_push_boolean(ctx, b);

	return 1;
}

static duk_ret_t dukky_html_image_element_isMap_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 24 "HTMLImageElement.bnd"
#line 416 "html_image_element.c"
	dom_exception exc;
	bool b;

	b = duk_get_boolean(ctx, 0);

	exc = dom_html_image_element_set_is_map((struct dom_html_image_element *)((node_private_t*)priv)->node, b);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_width_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 47 "HTMLImageElement.bnd"
#line 443 "html_image_element.c"
	dom_ulong l;
	dom_exception exc;

	exc = dom_html_image_element_get_width((struct dom_html_image_element *)((node_private_t*)priv)->node, &l);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	duk_push_number(ctx, (duk_double_t)l);

	return 1;
}

static duk_ret_t dukky_html_image_element_width_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 48 "HTMLImageElement.bnd"
#line 470 "html_image_element.c"
	dom_exception exc;
	dom_ulong l;

	l = duk_get_uint(ctx, 0);

	exc = dom_html_image_element_set_width((struct dom_html_image_element *)((node_private_t*)priv)->node, l);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_height_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 38 "HTMLImageElement.bnd"
#line 497 "html_image_element.c"
	dom_ulong l;
	dom_exception exc;

	exc = dom_html_image_element_get_height((struct dom_html_image_element *)((node_private_t*)priv)->node, &l);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	duk_push_number(ctx, (duk_double_t)l);

	return 1;
}

static duk_ret_t dukky_html_image_element_height_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 39 "HTMLImageElement.bnd"
#line 524 "html_image_element.c"
	dom_exception exc;
	dom_ulong l;

	l = duk_get_uint(ctx, 0);

	exc = dom_html_image_element_set_height((struct dom_html_image_element *)((node_private_t*)priv)->node, l);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_naturalWidth_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_naturalHeight_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_complete_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_currentSrc_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_name_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 29 "HTMLImageElement.bnd"
#line 611 "html_image_element.c"
	dom_exception exc;
	dom_string *str;

	exc = dom_html_image_element_get_name((struct dom_html_image_element *)((node_private_t*)priv)->node, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	if (str != NULL) {
		duk_push_lstring(ctx,
			dom_string_data(str),
			dom_string_length(str));
		dom_string_unref(str);
	} else {
		duk_push_lstring(ctx, NULL, 0);
	}

	return 1;
}

static duk_ret_t dukky_html_image_element_name_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 30 "HTMLImageElement.bnd"
#line 645 "html_image_element.c"
	dom_exception exc;
	dom_string *str;
	duk_size_t slen;
	const char *s;
	s = duk_safe_to_lstring(ctx, 0, &slen);

	exc = dom_string_create((const uint8_t *)s, slen, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	exc = dom_html_image_element_set_name((struct dom_html_image_element *)((node_private_t*)priv)->node, str);
	dom_string_unref(str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_lowsrc_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_lowsrc_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_align_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 14 "HTMLImageElement.bnd"
#line 709 "html_image_element.c"
	dom_exception exc;
	dom_string *str;

	exc = dom_html_image_element_get_align((struct dom_html_image_element *)((node_private_t*)priv)->node, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	if (str != NULL) {
		duk_push_lstring(ctx,
			dom_string_data(str),
			dom_string_length(str));
		dom_string_unref(str);
	} else {
		duk_push_lstring(ctx, NULL, 0);
	}

	return 1;
}

static duk_ret_t dukky_html_image_element_align_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 15 "HTMLImageElement.bnd"
#line 743 "html_image_element.c"
	dom_exception exc;
	dom_string *str;
	duk_size_t slen;
	const char *s;
	s = duk_safe_to_lstring(ctx, 0, &slen);

	exc = dom_string_create((const uint8_t *)s, slen, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	exc = dom_html_image_element_set_align((struct dom_html_image_element *)((node_private_t*)priv)->node, str);
	dom_string_unref(str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_hspace_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 41 "HTMLImageElement.bnd"
#line 777 "html_image_element.c"
	dom_ulong l;
	dom_exception exc;

	exc = dom_html_image_element_get_hspace((struct dom_html_image_element *)((node_private_t*)priv)->node, &l);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	duk_push_number(ctx, (duk_double_t)l);

	return 1;
}

static duk_ret_t dukky_html_image_element_hspace_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 42 "HTMLImageElement.bnd"
#line 804 "html_image_element.c"
	dom_exception exc;
	dom_ulong l;

	l = duk_get_uint(ctx, 0);

	exc = dom_html_image_element_set_hspace((struct dom_html_image_element *)((node_private_t*)priv)->node, l);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_vspace_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 44 "HTMLImageElement.bnd"
#line 831 "html_image_element.c"
	dom_ulong l;
	dom_exception exc;

	exc = dom_html_image_element_get_vspace((struct dom_html_image_element *)((node_private_t*)priv)->node, &l);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	duk_push_number(ctx, (duk_double_t)l);

	return 1;
}

static duk_ret_t dukky_html_image_element_vspace_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 45 "HTMLImageElement.bnd"
#line 858 "html_image_element.c"
	dom_exception exc;
	dom_ulong l;

	l = duk_get_uint(ctx, 0);

	exc = dom_html_image_element_set_vspace((struct dom_html_image_element *)((node_private_t*)priv)->node, l);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_longDesc_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 26 "HTMLImageElement.bnd"
#line 885 "html_image_element.c"
	dom_exception exc;
	dom_string *str;

	exc = dom_html_image_element_get_long_desc((struct dom_html_image_element *)((node_private_t*)priv)->node, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	if (str != NULL) {
		duk_push_lstring(ctx,
			dom_string_data(str),
			dom_string_length(str));
		dom_string_unref(str);
	} else {
		duk_push_lstring(ctx, NULL, 0);
	}

	return 1;
}

static duk_ret_t dukky_html_image_element_longDesc_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 27 "HTMLImageElement.bnd"
#line 919 "html_image_element.c"
	dom_exception exc;
	dom_string *str;
	duk_size_t slen;
	const char *s;
	s = duk_safe_to_lstring(ctx, 0, &slen);

	exc = dom_string_create((const uint8_t *)s, slen, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	exc = dom_html_image_element_set_long_desc((struct dom_html_image_element *)((node_private_t*)priv)->node, str);
	dom_string_unref(str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_image_element_border_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 20 "HTMLImageElement.bnd"
#line 953 "html_image_element.c"
	dom_exception exc;
	dom_string *str;

	exc = dom_html_image_element_get_border((struct dom_html_image_element *)((node_private_t*)priv)->node, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	if (str != NULL) {
		duk_push_lstring(ctx,
			dom_string_data(str),
			dom_string_length(str));
		dom_string_unref(str);
	} else {
		duk_push_lstring(ctx, NULL, 0);
	}

	return 1;
}

static duk_ret_t dukky_html_image_element_border_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_image_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 21 "HTMLImageElement.bnd"
#line 987 "html_image_element.c"
	dom_exception exc;
	dom_string *str;
	duk_size_t slen;
	const char *s;
	if (duk_is_null(ctx, 0)) {
		s = "";
		slen = 0;
	} else {
		s = duk_safe_to_lstring(ctx, 0, &slen);
	}

	exc = dom_string_create((const uint8_t *)s, slen, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	exc = dom_html_image_element_set_border((struct dom_html_image_element *)((node_private_t*)priv)->node, str);
	dom_string_unref(str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

duk_ret_t dukky_html_image_element___proto(duk_context *ctx, void *udata)
{
	/* Set this prototype's prototype (left-parent) */
	/* get prototype */
	duk_get_global_string(ctx, dukky_magic_string_prototypes);
	duk_get_prop_string(ctx, -1, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLELEMENT");
	duk_replace(ctx, -2);
	duk_set_prototype(ctx, 0);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "alt");
	duk_push_c_function(ctx, dukky_html_image_element_alt_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_alt_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "src");
	duk_push_c_function(ctx, dukky_html_image_element_src_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_src_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "srcset");
	duk_push_c_function(ctx, dukky_html_image_element_srcset_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_srcset_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "sizes");
	duk_push_c_function(ctx, dukky_html_image_element_sizes_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_sizes_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "crossOrigin");
	duk_push_c_function(ctx, dukky_html_image_element_crossOrigin_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_crossOrigin_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "useMap");
	duk_push_c_function(ctx, dukky_html_image_element_useMap_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_useMap_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "isMap");
	duk_push_c_function(ctx, dukky_html_image_element_isMap_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_isMap_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "width");
	duk_push_c_function(ctx, dukky_html_image_element_width_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_width_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "height");
	duk_push_c_function(ctx, dukky_html_image_element_height_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_height_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "naturalWidth");
	duk_push_c_function(ctx, dukky_html_image_element_naturalWidth_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "naturalHeight");
	duk_push_c_function(ctx, dukky_html_image_element_naturalHeight_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "complete");
	duk_push_c_function(ctx, dukky_html_image_element_complete_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "currentSrc");
	duk_push_c_function(ctx, dukky_html_image_element_currentSrc_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "name");
	duk_push_c_function(ctx, dukky_html_image_element_name_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_name_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "lowsrc");
	duk_push_c_function(ctx, dukky_html_image_element_lowsrc_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_lowsrc_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "align");
	duk_push_c_function(ctx, dukky_html_image_element_align_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_align_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "hspace");
	duk_push_c_function(ctx, dukky_html_image_element_hspace_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_hspace_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "vspace");
	duk_push_c_function(ctx, dukky_html_image_element_vspace_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_vspace_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "longDesc");
	duk_push_c_function(ctx, dukky_html_image_element_longDesc_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_longDesc_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "border");
	duk_push_c_function(ctx, dukky_html_image_element_border_getter, 0);
	duk_push_c_function(ctx, dukky_html_image_element_border_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Set the destructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_html_image_element___destructor, 1);
	duk_set_finalizer(ctx, -2);
	duk_pop(ctx);

	/* Set the constructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_html_image_element___constructor, 2);
	duk_put_prop_string(ctx, -2, "\xFF\xFFNETSURF_DUKTAPE_INIT");
	duk_pop(ctx);

	return 1; /* The prototype object */
}


