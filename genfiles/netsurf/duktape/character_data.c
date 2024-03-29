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


#include "javascript/duktape/duktape/binding.h"
#include "javascript/duktape/duktape/private.h"
#include "javascript/duktape/duktape/prototype.h"

#include "javascript/duktape/dukky.h"

void dukky_character_data___init(duk_context *ctx, character_data_private_t *priv, struct dom_node_character_data *character_data)
{
	dukky_node___init(ctx, &priv->parent, (struct dom_node *)character_data);
#line 194 "content/handlers/javascript/duktape/netsurf.bnd"
#line 48 "character_data.c"
}

void dukky_character_data___fini(duk_context *ctx, character_data_private_t *priv)
{
	dukky_node___fini(ctx, &priv->parent);
}

static duk_ret_t dukky_character_data___constructor(duk_context *ctx)
{
	/* create private data and attach to instance */
	character_data_private_t *priv = calloc(1, sizeof(*priv));
	if (priv == NULL) return 0;
	duk_push_pointer(ctx, priv);
	duk_put_prop_string(ctx, 0, dukky_magic_string_private);

	dukky_character_data___init(ctx, priv, duk_get_pointer(ctx, 1));
	duk_set_top(ctx, 1);
	return 1;
}

static duk_ret_t dukky_character_data___destructor(duk_context *ctx)
{
	character_data_private_t *priv;
	duk_get_prop_string(ctx, 0, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop(ctx);
	if (priv == NULL) return 0;

	dukky_character_data___fini(ctx, priv);
	free(priv);
	return 0;
}

static duk_ret_t dukky_character_data_substringData(duk_context *ctx)
{
	/* ensure the parameters are present */
	duk_idx_t dukky_argc = duk_get_top(ctx);
	if (dukky_argc < 2) {
		/* not enough arguments */
		return duk_error(ctx, DUK_RET_TYPE_ERROR, dukky_error_fmt_argument, 2, dukky_argc);
	} else if (dukky_argc > 2) {
		/* remove extraneous parameters */
		duk_set_top(ctx, 2);
	}

	/* check types of passed arguments are correct */
	if (dukky_argc > 0) {
		if (!duk_is_number(ctx, 0)) {
			return duk_error(ctx, DUK_ERR_ERROR, dukky_error_fmt_number_type, 0, "offset");
		}
	}
	if (dukky_argc > 1) {
		if (!duk_is_number(ctx, 1)) {
			return duk_error(ctx, DUK_ERR_ERROR, dukky_error_fmt_number_type, 1, "count");
		}
	}
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_character_data_appendData(duk_context *ctx)
{
	/* ensure the parameters are present */
	duk_idx_t dukky_argc = duk_get_top(ctx);
	if (dukky_argc < 1) {
		/* not enough arguments */
		return duk_error(ctx, DUK_RET_TYPE_ERROR, dukky_error_fmt_argument, 1, dukky_argc);
	} else if (dukky_argc > 1) {
		/* remove extraneous parameters */
		duk_set_top(ctx, 1);
	}

	/* check types of passed arguments are correct */
	if (dukky_argc > 0) {
		if (!duk_is_string(ctx, 0)) {
			duk_to_string(ctx, 0);
		}
	}
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_character_data_insertData(duk_context *ctx)
{
	/* ensure the parameters are present */
	duk_idx_t dukky_argc = duk_get_top(ctx);
	if (dukky_argc < 2) {
		/* not enough arguments */
		return duk_error(ctx, DUK_RET_TYPE_ERROR, dukky_error_fmt_argument, 2, dukky_argc);
	} else if (dukky_argc > 2) {
		/* remove extraneous parameters */
		duk_set_top(ctx, 2);
	}

	/* check types of passed arguments are correct */
	if (dukky_argc > 0) {
		if (!duk_is_number(ctx, 0)) {
			return duk_error(ctx, DUK_ERR_ERROR, dukky_error_fmt_number_type, 0, "offset");
		}
	}
	if (dukky_argc > 1) {
		if (!duk_is_string(ctx, 1)) {
			duk_to_string(ctx, 1);
		}
	}
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_character_data_deleteData(duk_context *ctx)
{
	/* ensure the parameters are present */
	duk_idx_t dukky_argc = duk_get_top(ctx);
	if (dukky_argc < 2) {
		/* not enough arguments */
		return duk_error(ctx, DUK_RET_TYPE_ERROR, dukky_error_fmt_argument, 2, dukky_argc);
	} else if (dukky_argc > 2) {
		/* remove extraneous parameters */
		duk_set_top(ctx, 2);
	}

	/* check types of passed arguments are correct */
	if (dukky_argc > 0) {
		if (!duk_is_number(ctx, 0)) {
			return duk_error(ctx, DUK_ERR_ERROR, dukky_error_fmt_number_type, 0, "offset");
		}
	}
	if (dukky_argc > 1) {
		if (!duk_is_number(ctx, 1)) {
			return duk_error(ctx, DUK_ERR_ERROR, dukky_error_fmt_number_type, 1, "count");
		}
	}
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_character_data_replaceData(duk_context *ctx)
{
	/* ensure the parameters are present */
	duk_idx_t dukky_argc = duk_get_top(ctx);
	if (dukky_argc < 3) {
		/* not enough arguments */
		return duk_error(ctx, DUK_RET_TYPE_ERROR, dukky_error_fmt_argument, 3, dukky_argc);
	} else if (dukky_argc > 3) {
		/* remove extraneous parameters */
		duk_set_top(ctx, 3);
	}

	/* check types of passed arguments are correct */
	if (dukky_argc > 0) {
		if (!duk_is_number(ctx, 0)) {
			return duk_error(ctx, DUK_ERR_ERROR, dukky_error_fmt_number_type, 0, "offset");
		}
	}
	if (dukky_argc > 1) {
		if (!duk_is_number(ctx, 1)) {
			return duk_error(ctx, DUK_ERR_ERROR, dukky_error_fmt_number_type, 1, "count");
		}
	}
	if (dukky_argc > 2) {
		if (!duk_is_string(ctx, 2)) {
			duk_to_string(ctx, 2);
		}
	}
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_character_data_before(duk_context *ctx)
{
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_character_data_after(duk_context *ctx)
{
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_character_data_replaceWith(duk_context *ctx)
{
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_character_data_remove(duk_context *ctx)
{
	/* ensure the parameters are present */
	duk_idx_t dukky_argc = duk_get_top(ctx);
	if (dukky_argc > 0) {
		/* remove extraneous parameters */
		duk_set_top(ctx, 0);
	}

	/* check types of passed arguments are correct */
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_character_data_data_getter(duk_context *ctx)
{
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_character_data_data_setter(duk_context *ctx)
{
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_character_data_length_getter(duk_context *ctx)
{
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_character_data_previousElementSibling_getter(duk_context *ctx)
{
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_character_data_nextElementSibling_getter(duk_context *ctx)
{
	/* Get private data for method */
	character_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

duk_ret_t dukky_character_data___proto(duk_context *ctx, void *udata)
{
	/* Set this prototype's prototype (left-parent) */
	/* get prototype */
	duk_get_global_string(ctx, dukky_magic_string_prototypes);
	duk_get_prop_string(ctx, -1, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_NODE");
	duk_replace(ctx, -2);
	duk_set_prototype(ctx, 0);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "substringData");
	duk_push_c_function(ctx, dukky_character_data_substringData, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "appendData");
	duk_push_c_function(ctx, dukky_character_data_appendData, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "insertData");
	duk_push_c_function(ctx, dukky_character_data_insertData, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "deleteData");
	duk_push_c_function(ctx, dukky_character_data_deleteData, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "replaceData");
	duk_push_c_function(ctx, dukky_character_data_replaceData, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "before");
	duk_push_c_function(ctx, dukky_character_data_before, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "after");
	duk_push_c_function(ctx, dukky_character_data_after, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "replaceWith");
	duk_push_c_function(ctx, dukky_character_data_replaceWith, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "remove");
	duk_push_c_function(ctx, dukky_character_data_remove, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "data");
	duk_push_c_function(ctx, dukky_character_data_data_getter, 0);
	duk_push_c_function(ctx, dukky_character_data_data_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "length");
	duk_push_c_function(ctx, dukky_character_data_length_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "previousElementSibling");
	duk_push_c_function(ctx, dukky_character_data_previousElementSibling_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "nextElementSibling");
	duk_push_c_function(ctx, dukky_character_data_nextElementSibling_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Set the destructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_character_data___destructor, 1);
	duk_set_finalizer(ctx, -2);
	duk_pop(ctx);

	/* Set the constructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_character_data___constructor, 2);
	duk_put_prop_string(ctx, -2, "\xFF\xFFNETSURF_DUKTAPE_INIT");
	duk_pop(ctx);

	return 1; /* The prototype object */
}


