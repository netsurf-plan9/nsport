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

static void dukky_html_marquee_element___init(duk_context *ctx, html_marquee_element_private_t *priv, struct dom_html_element *html_marquee_element)
{
	dukky_html_element___init(ctx, &priv->parent, html_marquee_element);
#line 12 "HTMLMarqueeElement.bnd"
#line 48 "html_marquee_element.c"
}

static void dukky_html_marquee_element___fini(duk_context *ctx, html_marquee_element_private_t *priv)
{
	dukky_html_element___fini(ctx, &priv->parent);
}

static duk_ret_t dukky_html_marquee_element___constructor(duk_context *ctx)
{
	/* create private data and attach to instance */
	html_marquee_element_private_t *priv = calloc(1, sizeof(*priv));
	if (priv == NULL) return 0;
	duk_push_pointer(ctx, priv);
	duk_put_prop_string(ctx, 0, dukky_magic_string_private);

	dukky_html_marquee_element___init(ctx, priv, duk_get_pointer(ctx, 1));
	duk_set_top(ctx, 1);
	return 1;
}

static duk_ret_t dukky_html_marquee_element___destructor(duk_context *ctx)
{
	html_marquee_element_private_t *priv;
	duk_get_prop_string(ctx, 0, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop(ctx);
	if (priv == NULL) return 0;

	dukky_html_marquee_element___fini(ctx, priv);
	free(priv);
	return 0;
}

static duk_ret_t dukky_html_marquee_element_start(duk_context *ctx)
{
	/* ensure the parameters are present */
	duk_idx_t dukky_argc = duk_get_top(ctx);
	if (dukky_argc > 0) {
		/* remove extraneous parameters */
		duk_set_top(ctx, 0);
	}

	/* check types of passed arguments are correct */
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_stop(duk_context *ctx)
{
	/* ensure the parameters are present */
	duk_idx_t dukky_argc = duk_get_top(ctx);
	if (dukky_argc > 0) {
		/* remove extraneous parameters */
		duk_set_top(ctx, 0);
	}

	/* check types of passed arguments are correct */
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_behavior_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_behavior_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_bgColor_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_bgColor_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_direction_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_direction_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_height_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_height_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_hspace_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_hspace_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_loop_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_loop_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_scrollAmount_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_scrollAmount_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_scrollDelay_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_scrollDelay_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_trueSpeed_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_trueSpeed_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_vspace_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_vspace_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_width_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_width_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_onbounce_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_onbounce_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_onfinish_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_onfinish_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_onstart_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_marquee_element_onstart_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_marquee_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

duk_ret_t dukky_html_marquee_element___proto(duk_context *ctx, void *udata)
{
	/* Set this prototype's prototype (left-parent) */
	/* get prototype */
	duk_get_global_string(ctx, dukky_magic_string_prototypes);
	duk_get_prop_string(ctx, -1, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLELEMENT");
	duk_replace(ctx, -2);
	duk_set_prototype(ctx, 0);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "start");
	duk_push_c_function(ctx, dukky_html_marquee_element_start, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "stop");
	duk_push_c_function(ctx, dukky_html_marquee_element_stop, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "behavior");
	duk_push_c_function(ctx, dukky_html_marquee_element_behavior_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_behavior_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "bgColor");
	duk_push_c_function(ctx, dukky_html_marquee_element_bgColor_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_bgColor_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "direction");
	duk_push_c_function(ctx, dukky_html_marquee_element_direction_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_direction_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "height");
	duk_push_c_function(ctx, dukky_html_marquee_element_height_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_height_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "hspace");
	duk_push_c_function(ctx, dukky_html_marquee_element_hspace_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_hspace_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "loop");
	duk_push_c_function(ctx, dukky_html_marquee_element_loop_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_loop_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "scrollAmount");
	duk_push_c_function(ctx, dukky_html_marquee_element_scrollAmount_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_scrollAmount_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "scrollDelay");
	duk_push_c_function(ctx, dukky_html_marquee_element_scrollDelay_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_scrollDelay_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "trueSpeed");
	duk_push_c_function(ctx, dukky_html_marquee_element_trueSpeed_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_trueSpeed_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "vspace");
	duk_push_c_function(ctx, dukky_html_marquee_element_vspace_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_vspace_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "width");
	duk_push_c_function(ctx, dukky_html_marquee_element_width_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_width_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onbounce");
	duk_push_c_function(ctx, dukky_html_marquee_element_onbounce_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_onbounce_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onfinish");
	duk_push_c_function(ctx, dukky_html_marquee_element_onfinish_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_onfinish_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onstart");
	duk_push_c_function(ctx, dukky_html_marquee_element_onstart_getter, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element_onstart_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Set the destructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element___destructor, 1);
	duk_set_finalizer(ctx, -2);
	duk_pop(ctx);

	/* Set the constructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_html_marquee_element___constructor, 2);
	duk_put_prop_string(ctx, -2, "\xFF\xFFNETSURF_DUKTAPE_INIT");
	duk_pop(ctx);

	return 1; /* The prototype object */
}


