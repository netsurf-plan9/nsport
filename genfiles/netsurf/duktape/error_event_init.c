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

const char *
dukky_error_event_init_get_message(duk_context *ctx, duk_idx_t idx)
{
	const char *ret = NULL; /* No default */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "message");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a string */
		ret = duk_require_string(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

const char *
dukky_error_event_init_get_filename(duk_context *ctx, duk_idx_t idx)
{
	const char *ret = NULL; /* No default */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "filename");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a string */
		ret = duk_require_string(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

duk_int_t
dukky_error_event_init_get_lineno(duk_context *ctx, duk_idx_t idx)
{
	duk_int_t ret = 0; /* No default */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "lineno");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a int */
		ret = duk_require_int(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

duk_int_t
dukky_error_event_init_get_colno(duk_context *ctx, duk_idx_t idx)
{
	duk_int_t ret = 0; /* No default */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "colno");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a int */
		ret = duk_require_int(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

/* Dictionary ErrorEventInit:error unhandled type (0) */


