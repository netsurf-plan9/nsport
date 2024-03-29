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

static void dukky_image_data___init(duk_context *ctx, image_data_private_t *priv, int width, int height)
{
#line 18 "ImageData.bnd"

	priv->width = width;
	priv->height = height;
	priv->data = duk_push_buffer(ctx, width * height * 4, false);
	duk_put_prop_string(ctx, 0, MAGIC(DATA));
	duk_pop(ctx);
#line 53 "image_data.c"
}

static void dukky_image_data___fini(duk_context *ctx, image_data_private_t *priv)
{
}

static duk_ret_t dukky_image_data___constructor(duk_context *ctx)
{
	/* create private data and attach to instance */
	image_data_private_t *priv = calloc(1, sizeof(*priv));
	if (priv == NULL) return 0;
	duk_push_pointer(ctx, priv);
	duk_put_prop_string(ctx, 0, dukky_magic_string_private);

	dukky_image_data___init(ctx, priv, duk_get_int(ctx, 1), duk_get_int(ctx, 2));
	duk_set_top(ctx, 1);
	return 1;
}

static duk_ret_t dukky_image_data___destructor(duk_context *ctx)
{
	image_data_private_t *priv;
	duk_get_prop_string(ctx, 0, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop(ctx);
	if (priv == NULL) return 0;

	dukky_image_data___fini(ctx, priv);
	free(priv);
	return 0;
}

static duk_ret_t dukky_image_data_width_getter(duk_context *ctx)
{
	/* Get private data for method */
	image_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 27 "ImageData.bnd"

	duk_push_int(ctx, priv->width);
	return 1;
#line 102 "image_data.c"
}

static duk_ret_t dukky_image_data_height_getter(duk_context *ctx)
{
	/* Get private data for method */
	image_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 33 "ImageData.bnd"

	duk_push_int(ctx, priv->height);
	return 1;
#line 121 "image_data.c"
}

static duk_ret_t dukky_image_data_data_getter(duk_context *ctx)
{
	/* Get private data for method */
	image_data_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 39 "ImageData.bnd"

	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, MAGIC(DATA));
	duk_push_buffer_object(ctx, -1, 0, priv->width * priv->height * 4llu, DUK_BUFOBJ_UINT8CLAMPEDARRAY);
	return 1;
#line 142 "image_data.c"
}

duk_ret_t dukky_image_data___proto(duk_context *ctx, void *udata)
{
	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "width");
	duk_push_c_function(ctx, dukky_image_data_width_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "height");
	duk_push_c_function(ctx, dukky_image_data_height_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add readonly property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "data");
	duk_push_c_function(ctx, dukky_image_data_data_getter, 0);
	duk_def_prop(ctx, -3, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Set the destructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_image_data___destructor, 1);
	duk_set_finalizer(ctx, -2);
	duk_pop(ctx);

	/* Set the constructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_image_data___constructor, 3);
	duk_put_prop_string(ctx, -2, "\xFF\xFFNETSURF_DUKTAPE_INIT");
	duk_pop(ctx);

	return 1; /* The prototype object */
}


