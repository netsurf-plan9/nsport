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


#include "build/FreeBSD-gtk3/duktape/binding.h"
#include "build/FreeBSD-gtk3/duktape/private.h"
#include "build/FreeBSD-gtk3/duktape/prototype.h"

#include "javascript/duktape/dukky.h"

static void dukky_message_event___init(duk_context *ctx, message_event_private_t *priv, struct dom_event *evt)
{
	dukky_event___init(ctx, &priv->parent, evt);
#line 90 "content/handlers/javascript/duktape/netsurf.bnd"
#line 48 "message_event.c"
}

static void dukky_message_event___fini(duk_context *ctx, message_event_private_t *priv)
{
	dukky_event___fini(ctx, &priv->parent);
}

static duk_ret_t dukky_message_event___constructor(duk_context *ctx)
{
	/* create private data and attach to instance */
	message_event_private_t *priv = calloc(1, sizeof(*priv));
	if (priv == NULL) return 0;
	duk_push_pointer(ctx, priv);
	duk_put_prop_string(ctx, 0, dukky_magic_string_private);

	dukky_message_event___init(ctx, priv, duk_get_pointer(ctx, 1));
	duk_set_top(ctx, 1);
	return 1;
}

static duk_ret_t dukky_message_event___destructor(duk_context *ctx)
{
	message_event_private_t *priv;
	duk_get_prop_string(ctx, 0, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop(ctx);
	if (priv == NULL) return 0;

	dukky_message_event___fini(ctx, priv);
	free(priv);
	return 0;
}

static duk_ret_t dukky_message_event_initMessageEvent(duk_context *ctx)
{
	/* ensure the parameters are present */
	duk_idx_t dukky_argc = duk_get_top(ctx);
	if (dukky_argc < 8) {
		/* not enough arguments */
		return duk_error(ctx, DUK_RET_TYPE_ERROR, dukky_error_fmt_argument, 8, dukky_argc);
	} else if (dukky_argc > 8) {
		/* remove extraneous parameters */
		duk_set_top(ctx, 8);
	}

	/* check types of passed arguments are correct */
	if (dukky_argc > 0) {
		if (!duk_is_string(ctx, 0)) {
			duk_to_string(ctx, 0);
		}
	}
	if (dukky_argc > 1) {
		if (!duk_is_boolean(ctx, 1)) {
			return duk_error(ctx, DUK_ERR_ERROR, dukky_error_fmt_bool_type, 1, "bubbles");
		}
	}
	if (dukky_argc > 2) {
		if (!duk_is_boolean(ctx, 2)) {
			return duk_error(ctx, DUK_ERR_ERROR, dukky_error_fmt_bool_type, 2, "cancelable");
		}
	}
	if (dukky_argc > 4) {
		if (!duk_is_string(ctx, 4)) {
			duk_to_string(ctx, 4);
		}
	}
	if (dukky_argc > 5) {
		if (!duk_is_string(ctx, 5)) {
			duk_to_string(ctx, 5);
		}
	}
	if (dukky_argc > 6) {
		/* unhandled type check */
	}
	if (dukky_argc > 7) {
		/* unhandled type check */
	}
	/* Get private data for method */
	message_event_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_message_event_data_getter(duk_context *ctx)
{
	/* Get private data for method */
	message_event_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_message_event_origin_getter(duk_context *ctx)
{
	/* Get private data for method */
	message_event_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_message_event_lastEventId_getter(duk_context *ctx)
{
	/* Get private data for method */
	message_event_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_message_event_source_getter(duk_context *ctx)
{
	/* Get private data for method */
	message_event_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_message_event_ports_getter(duk_context *ctx)
{
	/* Get private data for method */
	message_event_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

duk_ret_t dukky_message_event___proto(duk_context *ctx, void *udata)
{
	/* Set this prototype's prototype (left-parent) */
	/* get prototype */
	duk_get_global_string(ctx, dukky_magic_string_prototypes);
	duk_get_prop_string(ctx, -1, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_EVENT");
	duk_replace(ctx, -2);
	duk_set_prototype(ctx, 0);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "initMessageEvent");
	duk_push_c_function(ctx, dukky_message_event_initMessageEvent, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "data");
	duk_push_c_function(ctx, dukky_message_event_data_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "origin");
	duk_push_c_function(ctx, dukky_message_event_origin_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "lastEventId");
	duk_push_c_function(ctx, dukky_message_event_lastEventId_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "source");
	duk_push_c_function(ctx, dukky_message_event_source_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "ports");
	duk_push_c_function(ctx, dukky_message_event_ports_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Set the destructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_message_event___destructor, 1);
	duk_set_finalizer(ctx, -2);
	duk_pop(ctx);

	/* Set the constructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_message_event___constructor, 2);
	duk_put_prop_string(ctx, -2, "\xFF\xFFNETSURF_DUKTAPE_INIT");
	duk_pop(ctx);

	return 1; /* The prototype object */
}


