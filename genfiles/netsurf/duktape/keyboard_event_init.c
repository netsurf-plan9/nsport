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
dukky_keyboard_event_init_get_key(duk_context *ctx, duk_idx_t idx)
{
	const char *ret = ""; /* Default value of key */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "key");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a string */
		ret = duk_require_string(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

const char *
dukky_keyboard_event_init_get_code(duk_context *ctx, duk_idx_t idx)
{
	const char *ret = ""; /* Default value of code */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "code");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a string */
		ret = duk_require_string(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

duk_int_t
dukky_keyboard_event_init_get_location(duk_context *ctx, duk_idx_t idx)
{
	duk_int_t ret = 0; /* Default value of location */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "location");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a int */
		ret = duk_require_int(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

duk_bool_t
dukky_keyboard_event_init_get_repeat(duk_context *ctx, duk_idx_t idx)
{
	duk_bool_t ret = false; /* Default value of repeat */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "repeat");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a boolean */
		ret = duk_require_boolean(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

duk_bool_t
dukky_keyboard_event_init_get_isComposing(duk_context *ctx, duk_idx_t idx)
{
	duk_bool_t ret = false; /* Default value of isComposing */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "isComposing");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a boolean */
		ret = duk_require_boolean(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

duk_int_t
dukky_keyboard_event_init_get_charCode(duk_context *ctx, duk_idx_t idx)
{
	duk_int_t ret = 0; /* Default value of charCode */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "charCode");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a int */
		ret = duk_require_int(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

duk_int_t
dukky_keyboard_event_init_get_keyCode(duk_context *ctx, duk_idx_t idx)
{
	duk_int_t ret = 0; /* Default value of keyCode */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "keyCode");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a int */
		ret = duk_require_int(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

duk_int_t
dukky_keyboard_event_init_get_which(duk_context *ctx, duk_idx_t idx)
{
	duk_int_t ret = 0; /* Default value of which */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "which");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a int */
		ret = duk_require_int(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

