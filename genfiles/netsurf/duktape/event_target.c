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


static event_listener_flags event_listener_pop_options(duk_context *ctx)
{
	event_listener_flags ret = ELF_NONE;
	/* ... options */
	duk_get_prop_string(ctx, -1, "capture");
	if (duk_to_boolean(ctx, -1))
		ret |= ELF_CAPTURE;
	duk_pop(ctx);
	duk_get_prop_string(ctx, -1, "passive");
	if (duk_to_boolean(ctx, -1))
		ret |= ELF_PASSIVE;
	duk_pop(ctx);
	duk_get_prop_string(ctx, -1, "once");
	if (duk_to_boolean(ctx, -1))
		ret |= ELF_ONCE;
	duk_pop_2(ctx);
	/* ... */
	return ret;
}

static void event_target_register_listener(duk_context *ctx,
					   event_listener_flags flags)
{
	/* ... listeners callback */
	/* If the given callback with the given flags is already present,
	 * we do not re-add it, otherwise we need to add to listeners
	 * a tuple of the callback and flags
	 */
	duk_uarridx_t idx = 0;
	while (duk_get_prop_index(ctx, -1, idx)) {
		/* ... listeners callback candidate */
		duk_get_prop_index(ctx, -1, 0);
		duk_get_prop_index(ctx, -2, 1);
		/* ... listeners callback candidate candidatecallback candidateflags */
		if (duk_strict_equals(ctx, -1, -3) &&
		    duk_get_int(ctx, -1) == (duk_int_t)flags) {
			/* already present, nothing to do */
			duk_pop_n(ctx, 5);
			/* ... */
			return;
		}
		/* ... listeners callback candidate candidatecallback candidateflags */
		duk_pop_3(ctx);
		/* ... listeners callback */
		idx++;
	}
	/* ... listeners callback undefined */
	duk_pop(ctx);
	/* ... listeners callback */
	duk_push_array(ctx);
	/* ... listeners callback newcandidate */
	duk_insert(ctx, -2);
	/* ... listeners newcandidate callback */
	duk_put_prop_index(ctx, -2, 0);
	/* ... listeners newcandidate */
	duk_push_int(ctx, (duk_int_t)flags);
	/* ... listeners newcandidate flags */
	duk_put_prop_index(ctx, -2, 1);
	/* ... listeners newcandidate */
	duk_put_prop_index(ctx, -2, idx);
	/* ... listeners */
	duk_pop(ctx);
	/* ... */
}

static void event_target_unregister_listener(duk_context *ctx,
					     event_listener_flags flags)
{
	/* ... listeners callback */
	/* If the given callback with the given flags is present,
	 * we remove it and shuffle the rest up.
	 */
	duk_uarridx_t idx = 0;
	while (duk_get_prop_index(ctx, -1, idx)) {
		/* ... listeners callback candidate */
		duk_get_prop_index(ctx, -1, 0);
		duk_get_prop_index(ctx, -2, 1);
		/* ... listeners callback candidate candidatecallback candidateflags */
		if (duk_strict_equals(ctx, -1, -3) &&
		    duk_get_int(ctx, -1) == (duk_int_t)flags) {
			/* present */
			duk_pop(ctx);
			/* ... listeners callback candidate candidatecallback */
			duk_put_prop_index(ctx, -2, 2);
			/* ... listeners callback candidate */
			duk_pop(ctx);
			/* ... listeners callback */
			duk_push_int(ctx, idx);
			/* ... listeners callback found_at */
			break;
		}
		/* ... listeners callback candidate candidatecallback candidateflags */
		duk_pop_3(ctx);
		/* ... listeners callback */
		idx++;
	}
	/* ... listeners callback undefined/found_at */
	if (duk_is_undefined(ctx, -1)) {
		/* not found, clean up and come out */
		duk_pop_3(ctx);
		return;
	}
	idx = duk_to_int(ctx, -1);
	duk_pop_2(ctx);
	/* ... listeners */
	dukky_shuffle_array(ctx, idx);
	/* ... listeners */
	duk_pop(ctx);
	/* ... */
}



void dukky_event_target___init(duk_context *ctx, event_target_private_t *priv)
{
#line 135 "EventTarget.bnd"

	priv->is_node = false;
	priv->capture_registered = false;
	priv->bubbling_registered = false;
#line 165 "event_target.c"
}

void dukky_event_target___fini(duk_context *ctx, event_target_private_t *priv)
{
}

static duk_ret_t dukky_event_target___constructor(duk_context *ctx)
{
	/* create private data and attach to instance */
	event_target_private_t *priv = calloc(1, sizeof(*priv));
	if (priv == NULL) return 0;
	duk_push_pointer(ctx, priv);
	duk_put_prop_string(ctx, 0, dukky_magic_string_private);

	dukky_event_target___init(ctx, priv);
	duk_set_top(ctx, 1);
	return 1;
}

static duk_ret_t dukky_event_target___destructor(duk_context *ctx)
{
	event_target_private_t *priv;
	duk_get_prop_string(ctx, 0, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop(ctx);
	if (priv == NULL) return 0;

	dukky_event_target___fini(ctx, priv);
	free(priv);
	return 0;
}

static duk_ret_t dukky_event_target_addEventListener(duk_context *ctx)
{
	/* ensure the parameters are present */
	duk_idx_t dukky_argc = duk_get_top(ctx);
	if (dukky_argc < 2) {
		/* not enough arguments */
		return duk_error(ctx, DUK_RET_TYPE_ERROR, dukky_error_fmt_argument, 2, dukky_argc);
	} else if (dukky_argc == 2) {
		/* 1 optional arguments need adding */
		duk_push_boolean(ctx, 0);
	} else if (dukky_argc > 3) {
		/* remove extraneous parameters */
		duk_set_top(ctx, 3);
	}

	/* check types of passed arguments are correct */
	if (dukky_argc > 0) {
		if (!duk_is_string(ctx, 0)) {
			duk_to_string(ctx, 0);
		}
	}
	if (dukky_argc > 1) {
		/* unhandled type check */
	}
	if (dukky_argc > 2) {
		if (!duk_is_boolean(ctx, 2)) {
			return duk_error(ctx, DUK_ERR_ERROR, dukky_error_fmt_bool_type, 2, "capture");
		}
	}
	/* Get private data for method */
	event_target_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 142 "EventTarget.bnd"

	dom_exception exc;
	event_listener_flags flags = ELF_NONE;
	/* Incoming stack is: type callback [options] */
	if (duk_get_top(ctx) < 2) return 0; /* Bad arguments */
	if (duk_get_top(ctx) > 3) return 0; /* Bad arguments */
	if (duk_get_top(ctx) == 2) {
		duk_push_object(ctx);
		/* type callback options */
	}
	if (duk_get_type(ctx, -1) != DUK_TYPE_OBJECT) {
		/* legacy support, if not object, it's the capture value */
		duk_push_object(ctx);
		/* ... capture options */
		duk_insert(ctx, -2);
		/* ... options capture */
		duk_put_prop_string(ctx, -2, "capture");
		/* ... options */
	}
	/* type callback options */
	flags = event_listener_pop_options(ctx);
	/* type callback */
	duk_dup(ctx, -2);
	/* type callback type */
	duk_push_this(ctx);
	/* type callback type this(=EventTarget) */
	if (dukky_event_target_push_listeners(ctx, false) && priv->is_node) {
		/* Take a moment to register a JS callback */
		duk_size_t ev_ty_l;
		const char *ev_ty = duk_to_lstring(ctx, -3, &ev_ty_l);
		dom_string *ev_ty_s;
		exc = dom_string_create((const uint8_t*)ev_ty, ev_ty_l,
					&ev_ty_s);
		if (exc != DOM_NO_ERR) {
			NSLOG(netsurf, INFO,
			      "Oh dear, failed to create dom_string in addEventListener()");
			return 0;
		}
		dukky_register_event_listener_for(
			ctx, (dom_element *)((node_private_t *)priv)->node,
			ev_ty_s,
			!!(flags & ELF_CAPTURE));
		dom_string_unref(ev_ty_s);
	}
	/* type callback typelisteners */
	duk_insert(ctx, -2);
	/* type typelisteners callback */
	event_target_register_listener(ctx, flags);
	/* type */
	return 0;
#line 288 "event_target.c"
}

static duk_ret_t dukky_event_target_removeEventListener(duk_context *ctx)
{
	/* ensure the parameters are present */
	duk_idx_t dukky_argc = duk_get_top(ctx);
	if (dukky_argc < 2) {
		/* not enough arguments */
		return duk_error(ctx, DUK_RET_TYPE_ERROR, dukky_error_fmt_argument, 2, dukky_argc);
	} else if (dukky_argc == 2) {
		/* 1 optional arguments need adding */
		duk_push_boolean(ctx, 0);
	} else if (dukky_argc > 3) {
		/* remove extraneous parameters */
		duk_set_top(ctx, 3);
	}

	/* check types of passed arguments are correct */
	if (dukky_argc > 0) {
		if (!duk_is_string(ctx, 0)) {
			duk_to_string(ctx, 0);
		}
	}
	if (dukky_argc > 1) {
		/* unhandled type check */
	}
	if (dukky_argc > 2) {
		if (!duk_is_boolean(ctx, 2)) {
			return duk_error(ctx, DUK_ERR_ERROR, dukky_error_fmt_bool_type, 2, "capture");
		}
	}
	/* Get private data for method */
	event_target_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 195 "EventTarget.bnd"

	event_listener_flags flags = ELF_NONE;
	/* Incoming stack is: type callback [options] */
	if (duk_get_top(ctx) < 2) return 0; /* Bad arguments */
	if (duk_get_top(ctx) > 3) return 0; /* Bad arguments */
	if (duk_get_top(ctx) == 2) {
		duk_push_object(ctx);
		/* type callback options */
	}
	if (duk_get_type(ctx, -1) != DUK_TYPE_OBJECT) {
		/* legacy support, if not object, it's the capture value */
		duk_push_object(ctx);
		/* ... capture options */
		duk_insert(ctx, -2);
		/* ... options capture */
		duk_put_prop_string(ctx, -2, "capture");
		/* ... options */
	}
	/* type callback options */
	flags = event_listener_pop_options(ctx);
	/* type callback */
	duk_dup(ctx, -2);
	/* type callback type */
	duk_push_this(ctx);
	/* type callback type this(=EventTarget) */
	if (dukky_event_target_push_listeners(ctx, true)) {
		/* nothing to do because the listener wasn't there at all */
		duk_pop_3(ctx);
		return 0;
	}
	/* type callback typelisteners */
	duk_insert(ctx, -2);
	/* type typelisteners callback */
	event_target_unregister_listener(ctx, flags);
	/* type */
	return 0;
#line 367 "event_target.c"
}

static duk_ret_t dukky_event_target_dispatchEvent(duk_context *ctx)
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
		/* unhandled type check */
	}
	/* Get private data for method */
	event_target_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 236 "EventTarget.bnd"

	dom_exception exc;
	if (!dukky_instanceof(ctx, 0, PROTO_NAME(EVENT))) return 0;

	duk_get_prop_string(ctx, 0, PRIVATE_MAGIC);
	event_private_t *evpriv = duk_get_pointer(ctx, -1);
	duk_pop(ctx);

	dom_event *evt = evpriv->evt;

	/* Dispatch event logic, see:
	 * https://dom.spec.whatwg.org/#dom-eventtarget-dispatchevent
	 */
	bool in_dispatch;
	if (dom_event_in_dispatch(evt, &in_dispatch) != DOM_NO_ERR) return 0;
	if (in_dispatch) {
		/** \todo Raise InvalidStateException */
		return 0;
	}

	bool is_initialised;
	if (dom_event_is_initialised(evt, &is_initialised) != DOM_NO_ERR) return 0;
	if (is_initialised == false) {
		/** \todo Raise InvalidStateException */
		return 0;
	}

	if (dom_event_set_is_trusted(evt, false) != DOM_NO_ERR) return 0;

	/** \todo work out how to dispatch against non-node things */
	if (priv->is_node == false) return 0;

	bool success;
	/* Event prepared, dispatch against ourselves */
	exc = dom_event_target_dispatch_event(
		((node_private_t *)priv)->node,
		evt,
		&success);
	if (exc != DOM_NO_ERR) return 0; /**< \todo raise correct exception */

	duk_push_boolean(ctx, success);
	return 1;
#line 439 "event_target.c"
}

duk_ret_t dukky_event_target___proto(duk_context *ctx, void *udata)
{
	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "addEventListener");
	duk_push_c_function(ctx, dukky_event_target_addEventListener, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "removeEventListener");
	duk_push_c_function(ctx, dukky_event_target_removeEventListener, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add a method */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "dispatchEvent");
	duk_push_c_function(ctx, dukky_event_target_dispatchEvent, DUK_VARARGS);
	duk_def_prop(ctx, -3,
		     DUK_DEFPROP_HAVE_VALUE |
		     DUK_DEFPROP_HAVE_WRITABLE |
		     DUK_DEFPROP_HAVE_ENUMERABLE |
		     DUK_DEFPROP_ENUMERABLE |
		     DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Set the destructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_event_target___destructor, 1);
	duk_set_finalizer(ctx, -2);
	duk_pop(ctx);

	/* Set the constructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_event_target___constructor, 1);
	duk_put_prop_string(ctx, -2, "\xFF\xFFNETSURF_DUKTAPE_INIT");
	duk_pop(ctx);

	return 1; /* The prototype object */
}


