/*
 * This file was generated by LibCSS gen_parser 
 * 
 * Generated from:
 *
 * align_items:CSS_PROP_ALIGN_ITEMS IDENT:( INHERIT: INITIAL: REVERT: UNSET: STRETCH:0,ALIGN_ITEMS_STRETCH FLEX_START:0,ALIGN_ITEMS_FLEX_START FLEX_END:0,ALIGN_ITEMS_FLEX_END CENTER:0,ALIGN_ITEMS_CENTER BASELINE:0,ALIGN_ITEMS_BASELINE IDENT:)
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
 * Parse align_items
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
css_error css__parse_align_items(css_language *c,
		const parserutils_vector *vector, int32_t *ctx,
		css_style *result)
{
	int32_t orig_ctx = *ctx;
	css_error error;
	const css_token *token;
	bool match;

	token = parserutils_vector_iterate(vector, ctx);
	if ((token == NULL) || ((token->type != CSS_TOKEN_IDENT))) {
		*ctx = orig_ctx;
		return CSS_INVALID;
	}

	if ((lwc_string_caseless_isequal(
			token->idata, c->strings[INHERIT],
			&match) == lwc_error_ok && match)) {
		error = css_stylesheet_style_inherit(result,
				CSS_PROP_ALIGN_ITEMS);

	} else if ((lwc_string_caseless_isequal(
			token->idata, c->strings[INITIAL],
			&match) == lwc_error_ok && match)) {
		error = css_stylesheet_style_initial(result,
				CSS_PROP_ALIGN_ITEMS);

	} else if ((lwc_string_caseless_isequal(
			token->idata, c->strings[REVERT],
			&match) == lwc_error_ok && match)) {
		error = css_stylesheet_style_revert(result,
				CSS_PROP_ALIGN_ITEMS);

	} else if ((lwc_string_caseless_isequal(
			token->idata, c->strings[UNSET],
			&match) == lwc_error_ok && match)) {
		error = css_stylesheet_style_unset(result,
				CSS_PROP_ALIGN_ITEMS);

	} else if ((lwc_string_caseless_isequal(
			token->idata, c->strings[STRETCH],
			&match) == lwc_error_ok && match)) {
		error = css__stylesheet_style_appendOPV(result,
				CSS_PROP_ALIGN_ITEMS,
				0,ALIGN_ITEMS_STRETCH);

	} else if ((lwc_string_caseless_isequal(
			token->idata, c->strings[FLEX_START],
			&match) == lwc_error_ok && match)) {
		error = css__stylesheet_style_appendOPV(result,
				CSS_PROP_ALIGN_ITEMS,
				0,ALIGN_ITEMS_FLEX_START);

	} else if ((lwc_string_caseless_isequal(
			token->idata, c->strings[FLEX_END],
			&match) == lwc_error_ok && match)) {
		error = css__stylesheet_style_appendOPV(result,
				CSS_PROP_ALIGN_ITEMS,
				0,ALIGN_ITEMS_FLEX_END);

	} else if ((lwc_string_caseless_isequal(
			token->idata, c->strings[CENTER],
			&match) == lwc_error_ok && match)) {
		error = css__stylesheet_style_appendOPV(result,
				CSS_PROP_ALIGN_ITEMS,
				0,ALIGN_ITEMS_CENTER);

	} else if ((lwc_string_caseless_isequal(
			token->idata, c->strings[BASELINE],
			&match) == lwc_error_ok && match)) {
		error = css__stylesheet_style_appendOPV(result,
				CSS_PROP_ALIGN_ITEMS,
				0,ALIGN_ITEMS_BASELINE);

	} else {
		error = CSS_INVALID;
	}

	if (error != CSS_OK)
		*ctx = orig_ctx;
	
	return error;
}

