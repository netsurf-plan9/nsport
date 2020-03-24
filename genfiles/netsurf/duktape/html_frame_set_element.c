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

#include "utils/corestrings.h"

#define HANDLER_MAGIC MAGIC(HANDLER_MAP)

static void dukky_html_frame_set_element___init(duk_context *ctx, html_frame_set_element_private_t *priv, struct dom_html_element *html_frame_set_element)
{
	dukky_html_element___init(ctx, &priv->parent, html_frame_set_element);
#line 19 "HTMLFrameSetElement.bnd"
#line 52 "html_frame_set_element.c"
}

static void dukky_html_frame_set_element___fini(duk_context *ctx, html_frame_set_element_private_t *priv)
{
	dukky_html_element___fini(ctx, &priv->parent);
}

static duk_ret_t dukky_html_frame_set_element___constructor(duk_context *ctx)
{
	/* create private data and attach to instance */
	html_frame_set_element_private_t *priv = calloc(1, sizeof(*priv));
	if (priv == NULL) return 0;
	duk_push_pointer(ctx, priv);
	duk_put_prop_string(ctx, 0, dukky_magic_string_private);

	dukky_html_frame_set_element___init(ctx, priv, duk_get_pointer(ctx, 1));
	duk_set_top(ctx, 1);
	return 1;
}

static duk_ret_t dukky_html_frame_set_element___destructor(duk_context *ctx)
{
	html_frame_set_element_private_t *priv;
	duk_get_prop_string(ctx, 0, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop(ctx);
	if (priv == NULL) return 0;

	dukky_html_frame_set_element___fini(ctx, priv);
	free(priv);
	return 0;
}

static duk_ret_t dukky_html_frame_set_element_cols_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 21 "HTMLFrameSetElement.bnd"
#line 99 "html_frame_set_element.c"
	dom_exception exc;
	dom_string *str;

	exc = dom_html_frame_set_element_get_cols((struct dom_html_frame_set_element *)((node_private_t*)priv)->node, &str);
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

static duk_ret_t dukky_html_frame_set_element_cols_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 22 "HTMLFrameSetElement.bnd"
#line 133 "html_frame_set_element.c"
	dom_exception exc;
	dom_string *str;
	duk_size_t slen;
	const char *s;
	s = duk_safe_to_lstring(ctx, 0, &slen);

	exc = dom_string_create((const uint8_t *)s, slen, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	exc = dom_html_frame_set_element_set_cols((struct dom_html_frame_set_element *)((node_private_t*)priv)->node, str);
	dom_string_unref(str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_frame_set_element_rows_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 24 "HTMLFrameSetElement.bnd"
#line 167 "html_frame_set_element.c"
	dom_exception exc;
	dom_string *str;

	exc = dom_html_frame_set_element_get_rows((struct dom_html_frame_set_element *)((node_private_t*)priv)->node, &str);
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

static duk_ret_t dukky_html_frame_set_element_rows_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 25 "HTMLFrameSetElement.bnd"
#line 201 "html_frame_set_element.c"
	dom_exception exc;
	dom_string *str;
	duk_size_t slen;
	const char *s;
	s = duk_safe_to_lstring(ctx, 0, &slen);

	exc = dom_string_create((const uint8_t *)s, slen, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	exc = dom_html_frame_set_element_set_rows((struct dom_html_frame_set_element *)((node_private_t*)priv)->node, str);
	dom_string_unref(str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_frame_set_element_onafterprint_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 27 "HTMLFrameSetElement.bnd"
#line 235 "html_frame_set_element.c"
	dom_event_target *et = (dom_event_target *)(((node_private_t *)priv)->node);
	dom_string *name;
	dom_exception exc;

	exc = dom_string_create((const uint8_t *)"afterprint", 10, &name);
	if (exc != DOM_NO_ERR) return 0;

	duk_push_this(ctx);
	/* ... node */
	if (dukky_get_current_value_of_event_handler(ctx, name, et) == false) {
		dom_string_unref(name);
		return 0;
	}
	dom_string_unref(name);
	/* ... handler node */
	duk_pop(ctx);
	/* ... handler */
	return 1;
}

static duk_ret_t dukky_html_frame_set_element_onafterprint_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 28 "HTMLFrameSetElement.bnd"
#line 269 "html_frame_set_element.c"
	dom_element *et = (dom_element *)(((node_private_t *)priv)->node);
	/* handlerfn */
	duk_push_this(ctx);
	/* handlerfn this */
	duk_get_prop_string(ctx, -1, HANDLER_MAGIC);
	/* handlerfn this handlers */
	duk_push_lstring(ctx, "afterprint", 10);
	/* handlerfn this handlers afterprint */
	duk_dup(ctx, -4);
	/* handlerfn this handlers afterprint handlerfn */
	duk_put_prop(ctx, -3);
	/* handlerfn this handlers */
	dukky_register_event_listener_for(ctx, et,
		corestring_dom_afterprint, false);
	return 0;
}

static duk_ret_t dukky_html_frame_set_element_onbeforeprint_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 29 "HTMLFrameSetElement.bnd"
#line 300 "html_frame_set_element.c"
	dom_event_target *et = (dom_event_target *)(((node_private_t *)priv)->node);
	dom_string *name;
	dom_exception exc;

	exc = dom_string_create((const uint8_t *)"beforeprint", 11, &name);
	if (exc != DOM_NO_ERR) return 0;

	duk_push_this(ctx);
	/* ... node */
	if (dukky_get_current_value_of_event_handler(ctx, name, et) == false) {
		dom_string_unref(name);
		return 0;
	}
	dom_string_unref(name);
	/* ... handler node */
	duk_pop(ctx);
	/* ... handler */
	return 1;
}

static duk_ret_t dukky_html_frame_set_element_onbeforeprint_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 30 "HTMLFrameSetElement.bnd"
#line 334 "html_frame_set_element.c"
	dom_element *et = (dom_element *)(((node_private_t *)priv)->node);
	/* handlerfn */
	duk_push_this(ctx);
	/* handlerfn this */
	duk_get_prop_string(ctx, -1, HANDLER_MAGIC);
	/* handlerfn this handlers */
	duk_push_lstring(ctx, "beforeprint", 11);
	/* handlerfn this handlers beforeprint */
	duk_dup(ctx, -4);
	/* handlerfn this handlers beforeprint handlerfn */
	duk_put_prop(ctx, -3);
	/* handlerfn this handlers */
	dukky_register_event_listener_for(ctx, et,
		corestring_dom_beforeprint, false);
	return 0;
}

static duk_ret_t dukky_html_frame_set_element_onbeforeunload_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 31 "HTMLFrameSetElement.bnd"
#line 365 "html_frame_set_element.c"
	dom_event_target *et = (dom_event_target *)(((node_private_t *)priv)->node);
	dom_string *name;
	dom_exception exc;

	exc = dom_string_create((const uint8_t *)"beforeunload", 12, &name);
	if (exc != DOM_NO_ERR) return 0;

	duk_push_this(ctx);
	/* ... node */
	if (dukky_get_current_value_of_event_handler(ctx, name, et) == false) {
		dom_string_unref(name);
		return 0;
	}
	dom_string_unref(name);
	/* ... handler node */
	duk_pop(ctx);
	/* ... handler */
	return 1;
}

static duk_ret_t dukky_html_frame_set_element_onbeforeunload_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 32 "HTMLFrameSetElement.bnd"
#line 399 "html_frame_set_element.c"
	dom_element *et = (dom_element *)(((node_private_t *)priv)->node);
	/* handlerfn */
	duk_push_this(ctx);
	/* handlerfn this */
	duk_get_prop_string(ctx, -1, HANDLER_MAGIC);
	/* handlerfn this handlers */
	duk_push_lstring(ctx, "beforeunload", 12);
	/* handlerfn this handlers beforeunload */
	duk_dup(ctx, -4);
	/* handlerfn this handlers beforeunload handlerfn */
	duk_put_prop(ctx, -3);
	/* handlerfn this handlers */
	dukky_register_event_listener_for(ctx, et,
		corestring_dom_beforeunload, false);
	return 0;
}

static duk_ret_t dukky_html_frame_set_element_onhashchange_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 33 "HTMLFrameSetElement.bnd"
#line 430 "html_frame_set_element.c"
	dom_event_target *et = (dom_event_target *)(((node_private_t *)priv)->node);
	dom_string *name;
	dom_exception exc;

	exc = dom_string_create((const uint8_t *)"hashchange", 10, &name);
	if (exc != DOM_NO_ERR) return 0;

	duk_push_this(ctx);
	/* ... node */
	if (dukky_get_current_value_of_event_handler(ctx, name, et) == false) {
		dom_string_unref(name);
		return 0;
	}
	dom_string_unref(name);
	/* ... handler node */
	duk_pop(ctx);
	/* ... handler */
	return 1;
}

static duk_ret_t dukky_html_frame_set_element_onhashchange_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 34 "HTMLFrameSetElement.bnd"
#line 464 "html_frame_set_element.c"
	dom_element *et = (dom_element *)(((node_private_t *)priv)->node);
	/* handlerfn */
	duk_push_this(ctx);
	/* handlerfn this */
	duk_get_prop_string(ctx, -1, HANDLER_MAGIC);
	/* handlerfn this handlers */
	duk_push_lstring(ctx, "hashchange", 10);
	/* handlerfn this handlers hashchange */
	duk_dup(ctx, -4);
	/* handlerfn this handlers hashchange handlerfn */
	duk_put_prop(ctx, -3);
	/* handlerfn this handlers */
	dukky_register_event_listener_for(ctx, et,
		corestring_dom_hashchange, false);
	return 0;
}

static duk_ret_t dukky_html_frame_set_element_onlanguagechange_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 35 "HTMLFrameSetElement.bnd"
#line 495 "html_frame_set_element.c"
	dom_event_target *et = (dom_event_target *)(((node_private_t *)priv)->node);
	dom_string *name;
	dom_exception exc;

	exc = dom_string_create((const uint8_t *)"languagechange", 14, &name);
	if (exc != DOM_NO_ERR) return 0;

	duk_push_this(ctx);
	/* ... node */
	if (dukky_get_current_value_of_event_handler(ctx, name, et) == false) {
		dom_string_unref(name);
		return 0;
	}
	dom_string_unref(name);
	/* ... handler node */
	duk_pop(ctx);
	/* ... handler */
	return 1;
}

static duk_ret_t dukky_html_frame_set_element_onlanguagechange_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 36 "HTMLFrameSetElement.bnd"
#line 529 "html_frame_set_element.c"
	dom_element *et = (dom_element *)(((node_private_t *)priv)->node);
	/* handlerfn */
	duk_push_this(ctx);
	/* handlerfn this */
	duk_get_prop_string(ctx, -1, HANDLER_MAGIC);
	/* handlerfn this handlers */
	duk_push_lstring(ctx, "languagechange", 14);
	/* handlerfn this handlers languagechange */
	duk_dup(ctx, -4);
	/* handlerfn this handlers languagechange handlerfn */
	duk_put_prop(ctx, -3);
	/* handlerfn this handlers */
	dukky_register_event_listener_for(ctx, et,
		corestring_dom_languagechange, false);
	return 0;
}

static duk_ret_t dukky_html_frame_set_element_onmessage_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 37 "HTMLFrameSetElement.bnd"
#line 560 "html_frame_set_element.c"
	dom_event_target *et = (dom_event_target *)(((node_private_t *)priv)->node);
	dom_string *name;
	dom_exception exc;

	exc = dom_string_create((const uint8_t *)"message", 7, &name);
	if (exc != DOM_NO_ERR) return 0;

	duk_push_this(ctx);
	/* ... node */
	if (dukky_get_current_value_of_event_handler(ctx, name, et) == false) {
		dom_string_unref(name);
		return 0;
	}
	dom_string_unref(name);
	/* ... handler node */
	duk_pop(ctx);
	/* ... handler */
	return 1;
}

static duk_ret_t dukky_html_frame_set_element_onmessage_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 38 "HTMLFrameSetElement.bnd"
#line 594 "html_frame_set_element.c"
	dom_element *et = (dom_element *)(((node_private_t *)priv)->node);
	/* handlerfn */
	duk_push_this(ctx);
	/* handlerfn this */
	duk_get_prop_string(ctx, -1, HANDLER_MAGIC);
	/* handlerfn this handlers */
	duk_push_lstring(ctx, "message", 7);
	/* handlerfn this handlers message */
	duk_dup(ctx, -4);
	/* handlerfn this handlers message handlerfn */
	duk_put_prop(ctx, -3);
	/* handlerfn this handlers */
	dukky_register_event_listener_for(ctx, et,
		corestring_dom_message, false);
	return 0;
}

static duk_ret_t dukky_html_frame_set_element_onoffline_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 39 "HTMLFrameSetElement.bnd"
#line 625 "html_frame_set_element.c"
	dom_event_target *et = (dom_event_target *)(((node_private_t *)priv)->node);
	dom_string *name;
	dom_exception exc;

	exc = dom_string_create((const uint8_t *)"offline", 7, &name);
	if (exc != DOM_NO_ERR) return 0;

	duk_push_this(ctx);
	/* ... node */
	if (dukky_get_current_value_of_event_handler(ctx, name, et) == false) {
		dom_string_unref(name);
		return 0;
	}
	dom_string_unref(name);
	/* ... handler node */
	duk_pop(ctx);
	/* ... handler */
	return 1;
}

static duk_ret_t dukky_html_frame_set_element_onoffline_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 40 "HTMLFrameSetElement.bnd"
#line 659 "html_frame_set_element.c"
	dom_element *et = (dom_element *)(((node_private_t *)priv)->node);
	/* handlerfn */
	duk_push_this(ctx);
	/* handlerfn this */
	duk_get_prop_string(ctx, -1, HANDLER_MAGIC);
	/* handlerfn this handlers */
	duk_push_lstring(ctx, "offline", 7);
	/* handlerfn this handlers offline */
	duk_dup(ctx, -4);
	/* handlerfn this handlers offline handlerfn */
	duk_put_prop(ctx, -3);
	/* handlerfn this handlers */
	dukky_register_event_listener_for(ctx, et,
		corestring_dom_offline, false);
	return 0;
}

static duk_ret_t dukky_html_frame_set_element_ononline_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 41 "HTMLFrameSetElement.bnd"
#line 690 "html_frame_set_element.c"
	dom_event_target *et = (dom_event_target *)(((node_private_t *)priv)->node);
	dom_string *name;
	dom_exception exc;

	exc = dom_string_create((const uint8_t *)"online", 6, &name);
	if (exc != DOM_NO_ERR) return 0;

	duk_push_this(ctx);
	/* ... node */
	if (dukky_get_current_value_of_event_handler(ctx, name, et) == false) {
		dom_string_unref(name);
		return 0;
	}
	dom_string_unref(name);
	/* ... handler node */
	duk_pop(ctx);
	/* ... handler */
	return 1;
}

static duk_ret_t dukky_html_frame_set_element_ononline_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 42 "HTMLFrameSetElement.bnd"
#line 724 "html_frame_set_element.c"
	dom_element *et = (dom_element *)(((node_private_t *)priv)->node);
	/* handlerfn */
	duk_push_this(ctx);
	/* handlerfn this */
	duk_get_prop_string(ctx, -1, HANDLER_MAGIC);
	/* handlerfn this handlers */
	duk_push_lstring(ctx, "online", 6);
	/* handlerfn this handlers online */
	duk_dup(ctx, -4);
	/* handlerfn this handlers online handlerfn */
	duk_put_prop(ctx, -3);
	/* handlerfn this handlers */
	dukky_register_event_listener_for(ctx, et,
		corestring_dom_online, false);
	return 0;
}

static duk_ret_t dukky_html_frame_set_element_onpagehide_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 43 "HTMLFrameSetElement.bnd"
#line 755 "html_frame_set_element.c"
	dom_event_target *et = (dom_event_target *)(((node_private_t *)priv)->node);
	dom_string *name;
	dom_exception exc;

	exc = dom_string_create((const uint8_t *)"pagehide", 8, &name);
	if (exc != DOM_NO_ERR) return 0;

	duk_push_this(ctx);
	/* ... node */
	if (dukky_get_current_value_of_event_handler(ctx, name, et) == false) {
		dom_string_unref(name);
		return 0;
	}
	dom_string_unref(name);
	/* ... handler node */
	duk_pop(ctx);
	/* ... handler */
	return 1;
}

static duk_ret_t dukky_html_frame_set_element_onpagehide_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 44 "HTMLFrameSetElement.bnd"
#line 789 "html_frame_set_element.c"
	dom_element *et = (dom_element *)(((node_private_t *)priv)->node);
	/* handlerfn */
	duk_push_this(ctx);
	/* handlerfn this */
	duk_get_prop_string(ctx, -1, HANDLER_MAGIC);
	/* handlerfn this handlers */
	duk_push_lstring(ctx, "pagehide", 8);
	/* handlerfn this handlers pagehide */
	duk_dup(ctx, -4);
	/* handlerfn this handlers pagehide handlerfn */
	duk_put_prop(ctx, -3);
	/* handlerfn this handlers */
	dukky_register_event_listener_for(ctx, et,
		corestring_dom_pagehide, false);
	return 0;
}

static duk_ret_t dukky_html_frame_set_element_onpageshow_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 45 "HTMLFrameSetElement.bnd"
#line 820 "html_frame_set_element.c"
	dom_event_target *et = (dom_event_target *)(((node_private_t *)priv)->node);
	dom_string *name;
	dom_exception exc;

	exc = dom_string_create((const uint8_t *)"pageshow", 8, &name);
	if (exc != DOM_NO_ERR) return 0;

	duk_push_this(ctx);
	/* ... node */
	if (dukky_get_current_value_of_event_handler(ctx, name, et) == false) {
		dom_string_unref(name);
		return 0;
	}
	dom_string_unref(name);
	/* ... handler node */
	duk_pop(ctx);
	/* ... handler */
	return 1;
}

static duk_ret_t dukky_html_frame_set_element_onpageshow_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 46 "HTMLFrameSetElement.bnd"
#line 854 "html_frame_set_element.c"
	dom_element *et = (dom_element *)(((node_private_t *)priv)->node);
	/* handlerfn */
	duk_push_this(ctx);
	/* handlerfn this */
	duk_get_prop_string(ctx, -1, HANDLER_MAGIC);
	/* handlerfn this handlers */
	duk_push_lstring(ctx, "pageshow", 8);
	/* handlerfn this handlers pageshow */
	duk_dup(ctx, -4);
	/* handlerfn this handlers pageshow handlerfn */
	duk_put_prop(ctx, -3);
	/* handlerfn this handlers */
	dukky_register_event_listener_for(ctx, et,
		corestring_dom_pageshow, false);
	return 0;
}

static duk_ret_t dukky_html_frame_set_element_onpopstate_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 47 "HTMLFrameSetElement.bnd"
#line 885 "html_frame_set_element.c"
	dom_event_target *et = (dom_event_target *)(((node_private_t *)priv)->node);
	dom_string *name;
	dom_exception exc;

	exc = dom_string_create((const uint8_t *)"popstate", 8, &name);
	if (exc != DOM_NO_ERR) return 0;

	duk_push_this(ctx);
	/* ... node */
	if (dukky_get_current_value_of_event_handler(ctx, name, et) == false) {
		dom_string_unref(name);
		return 0;
	}
	dom_string_unref(name);
	/* ... handler node */
	duk_pop(ctx);
	/* ... handler */
	return 1;
}

static duk_ret_t dukky_html_frame_set_element_onpopstate_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 48 "HTMLFrameSetElement.bnd"
#line 919 "html_frame_set_element.c"
	dom_element *et = (dom_element *)(((node_private_t *)priv)->node);
	/* handlerfn */
	duk_push_this(ctx);
	/* handlerfn this */
	duk_get_prop_string(ctx, -1, HANDLER_MAGIC);
	/* handlerfn this handlers */
	duk_push_lstring(ctx, "popstate", 8);
	/* handlerfn this handlers popstate */
	duk_dup(ctx, -4);
	/* handlerfn this handlers popstate handlerfn */
	duk_put_prop(ctx, -3);
	/* handlerfn this handlers */
	dukky_register_event_listener_for(ctx, et,
		corestring_dom_popstate, false);
	return 0;
}

static duk_ret_t dukky_html_frame_set_element_onstorage_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 49 "HTMLFrameSetElement.bnd"
#line 950 "html_frame_set_element.c"
	dom_event_target *et = (dom_event_target *)(((node_private_t *)priv)->node);
	dom_string *name;
	dom_exception exc;

	exc = dom_string_create((const uint8_t *)"storage", 7, &name);
	if (exc != DOM_NO_ERR) return 0;

	duk_push_this(ctx);
	/* ... node */
	if (dukky_get_current_value_of_event_handler(ctx, name, et) == false) {
		dom_string_unref(name);
		return 0;
	}
	dom_string_unref(name);
	/* ... handler node */
	duk_pop(ctx);
	/* ... handler */
	return 1;
}

static duk_ret_t dukky_html_frame_set_element_onstorage_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 50 "HTMLFrameSetElement.bnd"
#line 984 "html_frame_set_element.c"
	dom_element *et = (dom_element *)(((node_private_t *)priv)->node);
	/* handlerfn */
	duk_push_this(ctx);
	/* handlerfn this */
	duk_get_prop_string(ctx, -1, HANDLER_MAGIC);
	/* handlerfn this handlers */
	duk_push_lstring(ctx, "storage", 7);
	/* handlerfn this handlers storage */
	duk_dup(ctx, -4);
	/* handlerfn this handlers storage handlerfn */
	duk_put_prop(ctx, -3);
	/* handlerfn this handlers */
	dukky_register_event_listener_for(ctx, et,
		corestring_dom_storage, false);
	return 0;
}

static duk_ret_t dukky_html_frame_set_element_onunload_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 51 "HTMLFrameSetElement.bnd"
#line 1015 "html_frame_set_element.c"
	dom_event_target *et = (dom_event_target *)(((node_private_t *)priv)->node);
	dom_string *name;
	dom_exception exc;

	exc = dom_string_create((const uint8_t *)"unload", 6, &name);
	if (exc != DOM_NO_ERR) return 0;

	duk_push_this(ctx);
	/* ... node */
	if (dukky_get_current_value_of_event_handler(ctx, name, et) == false) {
		dom_string_unref(name);
		return 0;
	}
	dom_string_unref(name);
	/* ... handler node */
	duk_pop(ctx);
	/* ... handler */
	return 1;
}

static duk_ret_t dukky_html_frame_set_element_onunload_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_frame_set_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 52 "HTMLFrameSetElement.bnd"
#line 1049 "html_frame_set_element.c"
	dom_element *et = (dom_element *)(((node_private_t *)priv)->node);
	/* handlerfn */
	duk_push_this(ctx);
	/* handlerfn this */
	duk_get_prop_string(ctx, -1, HANDLER_MAGIC);
	/* handlerfn this handlers */
	duk_push_lstring(ctx, "unload", 6);
	/* handlerfn this handlers unload */
	duk_dup(ctx, -4);
	/* handlerfn this handlers unload handlerfn */
	duk_put_prop(ctx, -3);
	/* handlerfn this handlers */
	dukky_register_event_listener_for(ctx, et,
		corestring_dom_unload, false);
	return 0;
}

duk_ret_t dukky_html_frame_set_element___proto(duk_context *ctx, void *udata)
{
	/* Set this prototype's prototype (left-parent) */
	/* get prototype */
	duk_get_global_string(ctx, dukky_magic_string_prototypes);
	duk_get_prop_string(ctx, -1, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLELEMENT");
	duk_replace(ctx, -2);
	duk_set_prototype(ctx, 0);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "cols");
	duk_push_c_function(ctx, dukky_html_frame_set_element_cols_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_cols_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "rows");
	duk_push_c_function(ctx, dukky_html_frame_set_element_rows_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_rows_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onafterprint");
	duk_push_c_function(ctx, dukky_html_frame_set_element_onafterprint_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_onafterprint_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onbeforeprint");
	duk_push_c_function(ctx, dukky_html_frame_set_element_onbeforeprint_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_onbeforeprint_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onbeforeunload");
	duk_push_c_function(ctx, dukky_html_frame_set_element_onbeforeunload_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_onbeforeunload_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onhashchange");
	duk_push_c_function(ctx, dukky_html_frame_set_element_onhashchange_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_onhashchange_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onlanguagechange");
	duk_push_c_function(ctx, dukky_html_frame_set_element_onlanguagechange_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_onlanguagechange_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onmessage");
	duk_push_c_function(ctx, dukky_html_frame_set_element_onmessage_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_onmessage_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onoffline");
	duk_push_c_function(ctx, dukky_html_frame_set_element_onoffline_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_onoffline_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "ononline");
	duk_push_c_function(ctx, dukky_html_frame_set_element_ononline_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_ononline_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onpagehide");
	duk_push_c_function(ctx, dukky_html_frame_set_element_onpagehide_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_onpagehide_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onpageshow");
	duk_push_c_function(ctx, dukky_html_frame_set_element_onpageshow_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_onpageshow_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onpopstate");
	duk_push_c_function(ctx, dukky_html_frame_set_element_onpopstate_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_onpopstate_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onstorage");
	duk_push_c_function(ctx, dukky_html_frame_set_element_onstorage_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_onstorage_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "onunload");
	duk_push_c_function(ctx, dukky_html_frame_set_element_onunload_getter, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element_onunload_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Set the destructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element___destructor, 1);
	duk_set_finalizer(ctx, -2);
	duk_pop(ctx);

	/* Set the constructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_html_frame_set_element___constructor, 2);
	duk_put_prop_string(ctx, -2, "\xFF\xFFNETSURF_DUKTAPE_INIT");
	duk_pop(ctx);

	return 1; /* The prototype object */
}


