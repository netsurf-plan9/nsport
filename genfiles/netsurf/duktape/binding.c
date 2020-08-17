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

/* Error format strings */
const char *dukky_error_fmt_argument ="%d argument required, but ony %d present.";
const char *dukky_error_fmt_bool_type ="argument %d (%s) requires a bool";
const char *dukky_error_fmt_number_type ="argument %d (%s) requires a number";

/* Magic identifiers */
const char *dukky_magic_string_private ="\xFF\xFFNETSURF_DUKTAPE_PRIVATE";
const char *dukky_magic_string_prototypes ="\xFF\xFFNETSURF_DUKTAPE_PROTOTYPES";

duk_bool_t
dukky_instanceof(duk_context *ctx, duk_idx_t _idx, const char *klass)
{
	duk_idx_t idx = duk_normalize_index(ctx, _idx);
	/* ... ??? ... */
	if (!duk_check_type(ctx, idx, DUK_TYPE_OBJECT)) {
		return false;
	}
	/* ... obj ... */
	duk_get_global_string(ctx, dukky_magic_string_prototypes);
	/* ... obj ... protos */
	duk_get_prop_string(ctx, -1, klass);
	/* ... obj ... protos goalproto */
	duk_get_prototype(ctx, idx);
	/* ... obj ... protos goalproto proto? */
	while (!duk_is_undefined(ctx, -1)) {
		if (duk_strict_equals(ctx, -1, -2)) {
			duk_pop_3(ctx);
			/* ... obj ... */
			return true;
		}
		duk_get_prototype(ctx, -1);
		/* ... obj ... protos goalproto proto proto? */
		duk_replace(ctx, -2);
		/* ... obj ... protos goalproto proto? */
	}
	duk_pop_3(ctx);
	/* ... obj ... */
	return false;
}

static duk_ret_t
dukky_to_string(duk_context *ctx)
{
	/* */
	duk_push_this(ctx);
	/* this */
	duk_get_prototype(ctx, -1);
	/* this proto */
	duk_get_prop_string(ctx, -1, "\xFF\xFFNETSURF_DUKTAPE_klass_name");
	/* this proto classname */
	duk_push_string(ctx, "[object ");
	/* this proto classname str */
	duk_insert(ctx, -2);
	/* this proto str classname */
	duk_push_string(ctx, "]");
	/* this proto str classname str */
	duk_concat(ctx, 3);
	/* this proto str */
	return 1;
}

static duk_ret_t dukky_create_prototype(duk_context *ctx,
					duk_safe_call_function genproto,
					const char *proto_name,
					const char *klass_name)
{
	duk_int_t ret;
	duk_push_object(ctx);
	if ((ret = duk_safe_call(ctx, genproto, NULL, 1, 1)) != DUK_EXEC_SUCCESS) {
		duk_pop(ctx);
		NSLOG(dukky, WARNING, "Failed to register prototype for %s", proto_name + 2);
		return ret;
	}
	/* top of stack is the ready prototype, inject it */
	duk_push_string(ctx, klass_name);
	duk_put_prop_string(ctx, -2, "\xFF\xFFNETSURF_DUKTAPE_klass_name");
	duk_push_c_function(ctx, dukky_to_string, 0);
	duk_put_prop_string(ctx, -2, "toString");
	duk_push_string(ctx, "toString");
	duk_def_prop(ctx, -2, DUK_DEFPROP_HAVE_ENUMERABLE);
	duk_put_global_string(ctx, proto_name);
	return DUK_ERR_NONE;
}

duk_ret_t dukky_create_prototypes(duk_context *ctx)
{
	dukky_create_prototype(ctx, dukky_console___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CONSOLE", "Console");
	dukky_create_prototype(ctx, dukky_url_search_params___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_URLSEARCHPARAMS", "URLSearchParams");
	dukky_create_prototype(ctx, dukky_url___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_URL", "URL");
	dukky_create_prototype(ctx, dukky_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_EVENT", "Event");
	dukky_create_prototype(ctx, dukky_mutation_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_MUTATIONEVENT", "MutationEvent");
	dukky_create_prototype(ctx, dukky_ui_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_UIEVENT", "UIEvent");
	dukky_create_prototype(ctx, dukky_composition_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_COMPOSITIONEVENT", "CompositionEvent");
	dukky_create_prototype(ctx, dukky_keyboard_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_KEYBOARDEVENT", "KeyboardEvent");
	dukky_create_prototype(ctx, dukky_mouse_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_MOUSEEVENT", "MouseEvent");
	dukky_create_prototype(ctx, dukky_wheel_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_WHEELEVENT", "WheelEvent");
	dukky_create_prototype(ctx, dukky_focus_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_FOCUSEVENT", "FocusEvent");
	dukky_create_prototype(ctx, dukky_css___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CSS", "CSS");
	dukky_create_prototype(ctx, dukky_pseudo_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_PSEUDOELEMENT", "PseudoElement");
	dukky_create_prototype(ctx, dukky_svg_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_SVGELEMENT", "SVGElement");
	dukky_create_prototype(ctx, dukky_css_style_declaration___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CSSSTYLEDECLARATION", "CSSStyleDeclaration");
	dukky_create_prototype(ctx, dukky_css_rule___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CSSRULE", "CSSRule");
	dukky_create_prototype(ctx, dukky_css_namespace_rule___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CSSNAMESPACERULE", "CSSNamespaceRule");
	dukky_create_prototype(ctx, dukky_css_margin_rule___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CSSMARGINRULE", "CSSMarginRule");
	dukky_create_prototype(ctx, dukky_css_grouping_rule___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CSSGROUPINGRULE", "CSSGroupingRule");
	dukky_create_prototype(ctx, dukky_css_page_rule___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CSSPAGERULE", "CSSPageRule");
	dukky_create_prototype(ctx, dukky_css_media_rule___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CSSMEDIARULE", "CSSMediaRule");
	dukky_create_prototype(ctx, dukky_css_import_rule___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CSSIMPORTRULE", "CSSImportRule");
	dukky_create_prototype(ctx, dukky_css_style_rule___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CSSSTYLERULE", "CSSStyleRule");
	dukky_create_prototype(ctx, dukky_css_rule_list___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CSSRULELIST", "CSSRuleList");
	dukky_create_prototype(ctx, dukky_style_sheet_list___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_STYLESHEETLIST", "StyleSheetList");
	dukky_create_prototype(ctx, dukky_style_sheet___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_STYLESHEET", "StyleSheet");
	dukky_create_prototype(ctx, dukky_css_style_sheet___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CSSSTYLESHEET", "CSSStyleSheet");
	dukky_create_prototype(ctx, dukky_media_list___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_MEDIALIST", "MediaList");
	dukky_create_prototype(ctx, dukky_event_target___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_EVENTTARGET", "EventTarget");
	dukky_create_prototype(ctx, dukky_node___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_NODE", "Node");
	dukky_create_prototype(ctx, dukky_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_ELEMENT", "Element");
	dukky_create_prototype(ctx, dukky_html_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLELEMENT", "HTMLElement");
	dukky_create_prototype(ctx, dukky_html_font_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLFONTELEMENT", "HTMLFontElement");
	dukky_create_prototype(ctx, dukky_html_directory_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLDIRECTORYELEMENT", "HTMLDirectoryElement");
	dukky_create_prototype(ctx, dukky_html_frame_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLFRAMEELEMENT", "HTMLFrameElement");
	dukky_create_prototype(ctx, dukky_html_frame_set_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLFRAMESETELEMENT", "HTMLFrameSetElement");
	dukky_create_prototype(ctx, dukky_html_marquee_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLMARQUEEELEMENT", "HTMLMarqueeElement");
	dukky_create_prototype(ctx, dukky_html_applet_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLAPPLETELEMENT", "HTMLAppletElement");
	dukky_create_prototype(ctx, dukky_storage_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_STORAGEEVENT", "StorageEvent");
	dukky_create_prototype(ctx, dukky_storage___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_STORAGE", "Storage");
	dukky_create_prototype(ctx, dukky_worker_location___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_WORKERLOCATION", "WorkerLocation");
	dukky_create_prototype(ctx, dukky_worker_navigator___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_WORKERNAVIGATOR", "WorkerNavigator");
	dukky_create_prototype(ctx, dukky_shared_worker___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_SHAREDWORKER", "SharedWorker");
	dukky_create_prototype(ctx, dukky_worker___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_WORKER", "Worker");
	dukky_create_prototype(ctx, dukky_worker_global_scope___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_WORKERGLOBALSCOPE", "WorkerGlobalScope");
	dukky_create_prototype(ctx, dukky_shared_worker_global_scope___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_SHAREDWORKERGLOBALSCOPE", "SharedWorkerGlobalScope");
	dukky_create_prototype(ctx, dukky_dedicated_worker_global_scope___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DEDICATEDWORKERGLOBALSCOPE", "DedicatedWorkerGlobalScope");
	dukky_create_prototype(ctx, dukky_broadcast_channel___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_BROADCASTCHANNEL", "BroadcastChannel");
	dukky_create_prototype(ctx, dukky_message_port___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_MESSAGEPORT", "MessagePort");
	dukky_create_prototype(ctx, dukky_message_channel___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_MESSAGECHANNEL", "MessageChannel");
	dukky_create_prototype(ctx, dukky_close_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CLOSEEVENT", "CloseEvent");
	dukky_create_prototype(ctx, dukky_web_socket___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_WEBSOCKET", "WebSocket");
	dukky_create_prototype(ctx, dukky_event_source___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_EVENTSOURCE", "EventSource");
	dukky_create_prototype(ctx, dukky_message_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_MESSAGEEVENT", "MessageEvent");
	dukky_create_prototype(ctx, dukky_image_bitmap___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_IMAGEBITMAP", "ImageBitmap");
	dukky_create_prototype(ctx, dukky_external___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_EXTERNAL", "External");
	dukky_create_prototype(ctx, dukky_mime_type___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_MIMETYPE", "MimeType");
	dukky_create_prototype(ctx, dukky_plugin___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_PLUGIN", "Plugin");
	dukky_create_prototype(ctx, dukky_mime_type_array___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_MIMETYPEARRAY", "MimeTypeArray");
	dukky_create_prototype(ctx, dukky_plugin_array___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_PLUGINARRAY", "PluginArray");
	dukky_create_prototype(ctx, dukky_navigator___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_NAVIGATOR", "Navigator");
	dukky_create_prototype(ctx, dukky_error_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_ERROREVENT", "ErrorEvent");
	dukky_create_prototype(ctx, dukky_application_cache___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_APPLICATIONCACHE", "ApplicationCache");
	dukky_create_prototype(ctx, dukky_before_unload_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_BEFOREUNLOADEVENT", "BeforeUnloadEvent");
	dukky_create_prototype(ctx, dukky_page_transition_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_PAGETRANSITIONEVENT", "PageTransitionEvent");
	dukky_create_prototype(ctx, dukky_hash_change_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HASHCHANGEEVENT", "HashChangeEvent");
	dukky_create_prototype(ctx, dukky_pop_state_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_POPSTATEEVENT", "PopStateEvent");
	dukky_create_prototype(ctx, dukky_location___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_LOCATION", "Location");
	dukky_create_prototype(ctx, dukky_history___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HISTORY", "History");
	dukky_create_prototype(ctx, dukky_bar_prop___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_BARPROP", "BarProp");
	dukky_create_prototype(ctx, dukky_drag_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DRAGEVENT", "DragEvent");
	dukky_create_prototype(ctx, dukky_data_transfer_item___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DATATRANSFERITEM", "DataTransferItem");
	dukky_create_prototype(ctx, dukky_data_transfer_item_list___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DATATRANSFERITEMLIST", "DataTransferItemList");
	dukky_create_prototype(ctx, dukky_data_transfer___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DATATRANSFER", "DataTransfer");
	dukky_create_prototype(ctx, dukky_touch___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_TOUCH", "Touch");
	dukky_create_prototype(ctx, dukky_path2d___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_PATH2D", "Path2D");
	dukky_create_prototype(ctx, dukky_drawing_style___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DRAWINGSTYLE", "DrawingStyle");
	dukky_create_prototype(ctx, dukky_image_data___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_IMAGEDATA", "ImageData");
	dukky_create_prototype(ctx, dukky_text_metrics___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_TEXTMETRICS", "TextMetrics");
	dukky_create_prototype(ctx, dukky_canvas_pattern___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CANVASPATTERN", "CanvasPattern");
	dukky_create_prototype(ctx, dukky_canvas_gradient___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CANVASGRADIENT", "CanvasGradient");
	dukky_create_prototype(ctx, dukky_canvas_rendering_context2d___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CANVASRENDERINGCONTEXT2D", "CanvasRenderingContext2D");
	dukky_create_prototype(ctx, dukky_canvas_proxy___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CANVASPROXY", "CanvasProxy");
	dukky_create_prototype(ctx, dukky_html_canvas_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLCANVASELEMENT", "HTMLCanvasElement");
	dukky_create_prototype(ctx, dukky_html_template_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLTEMPLATEELEMENT", "HTMLTemplateElement");
	dukky_create_prototype(ctx, dukky_html_script_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLSCRIPTELEMENT", "HTMLScriptElement");
	dukky_create_prototype(ctx, dukky_html_dialog_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLDIALOGELEMENT", "HTMLDialogElement");
	dukky_create_prototype(ctx, dukky_related_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_RELATEDEVENT", "RelatedEvent");
	dukky_create_prototype(ctx, dukky_html_menu_item_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLMENUITEMELEMENT", "HTMLMenuItemElement");
	dukky_create_prototype(ctx, dukky_html_menu_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLMENUELEMENT", "HTMLMenuElement");
	dukky_create_prototype(ctx, dukky_html_details_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLDETAILSELEMENT", "HTMLDetailsElement");
	dukky_create_prototype(ctx, dukky_validity_state___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_VALIDITYSTATE", "ValidityState");
	dukky_create_prototype(ctx, dukky_autocomplete_error_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_AUTOCOMPLETEERROREVENT", "AutocompleteErrorEvent");
	dukky_create_prototype(ctx, dukky_html_legend_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLLEGENDELEMENT", "HTMLLegendElement");
	dukky_create_prototype(ctx, dukky_html_field_set_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLFIELDSETELEMENT", "HTMLFieldSetElement");
	dukky_create_prototype(ctx, dukky_html_meter_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLMETERELEMENT", "HTMLMeterElement");
	dukky_create_prototype(ctx, dukky_html_progress_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLPROGRESSELEMENT", "HTMLProgressElement");
	dukky_create_prototype(ctx, dukky_html_output_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLOUTPUTELEMENT", "HTMLOutputElement");
	dukky_create_prototype(ctx, dukky_html_keygen_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLKEYGENELEMENT", "HTMLKeygenElement");
	dukky_create_prototype(ctx, dukky_html_text_area_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLTEXTAREAELEMENT", "HTMLTextAreaElement");
	dukky_create_prototype(ctx, dukky_html_option_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLOPTIONELEMENT", "HTMLOptionElement");
	dukky_create_prototype(ctx, dukky_html_opt_group_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLOPTGROUPELEMENT", "HTMLOptGroupElement");
	dukky_create_prototype(ctx, dukky_html_data_list_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLDATALISTELEMENT", "HTMLDataListElement");
	dukky_create_prototype(ctx, dukky_html_select_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLSELECTELEMENT", "HTMLSelectElement");
	dukky_create_prototype(ctx, dukky_html_button_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLBUTTONELEMENT", "HTMLButtonElement");
	dukky_create_prototype(ctx, dukky_html_input_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLINPUTELEMENT", "HTMLInputElement");
	dukky_create_prototype(ctx, dukky_html_label_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLLABELELEMENT", "HTMLLabelElement");
	dukky_create_prototype(ctx, dukky_html_form_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLFORMELEMENT", "HTMLFormElement");
	dukky_create_prototype(ctx, dukky_html_table_cell_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLTABLECELLELEMENT", "HTMLTableCellElement");
	dukky_create_prototype(ctx, dukky_html_table_header_cell_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLTABLEHEADERCELLELEMENT", "HTMLTableHeaderCellElement");
	dukky_create_prototype(ctx, dukky_html_table_data_cell_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLTABLEDATACELLELEMENT", "HTMLTableDataCellElement");
	dukky_create_prototype(ctx, dukky_html_table_row_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLTABLEROWELEMENT", "HTMLTableRowElement");
	dukky_create_prototype(ctx, dukky_html_table_section_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLTABLESECTIONELEMENT", "HTMLTableSectionElement");
	dukky_create_prototype(ctx, dukky_html_table_col_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLTABLECOLELEMENT", "HTMLTableColElement");
	dukky_create_prototype(ctx, dukky_html_table_caption_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLTABLECAPTIONELEMENT", "HTMLTableCaptionElement");
	dukky_create_prototype(ctx, dukky_html_table_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLTABLEELEMENT", "HTMLTableElement");
	dukky_create_prototype(ctx, dukky_html_area_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLAREAELEMENT", "HTMLAreaElement");
	dukky_create_prototype(ctx, dukky_html_map_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLMAPELEMENT", "HTMLMapElement");
	dukky_create_prototype(ctx, dukky_track_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_TRACKEVENT", "TrackEvent");
	dukky_create_prototype(ctx, dukky_time_ranges___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_TIMERANGES", "TimeRanges");
	dukky_create_prototype(ctx, dukky_text_track_cue___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_TEXTTRACKCUE", "TextTrackCue");
	dukky_create_prototype(ctx, dukky_text_track_cue_list___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_TEXTTRACKCUELIST", "TextTrackCueList");
	dukky_create_prototype(ctx, dukky_text_track___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_TEXTTRACK", "TextTrack");
	dukky_create_prototype(ctx, dukky_text_track_list___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_TEXTTRACKLIST", "TextTrackList");
	dukky_create_prototype(ctx, dukky_media_controller___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_MEDIACONTROLLER", "MediaController");
	dukky_create_prototype(ctx, dukky_video_track___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_VIDEOTRACK", "VideoTrack");
	dukky_create_prototype(ctx, dukky_video_track_list___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_VIDEOTRACKLIST", "VideoTrackList");
	dukky_create_prototype(ctx, dukky_audio_track___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_AUDIOTRACK", "AudioTrack");
	dukky_create_prototype(ctx, dukky_audio_track_list___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_AUDIOTRACKLIST", "AudioTrackList");
	dukky_create_prototype(ctx, dukky_media_error___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_MEDIAERROR", "MediaError");
	dukky_create_prototype(ctx, dukky_html_media_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLMEDIAELEMENT", "HTMLMediaElement");
	dukky_create_prototype(ctx, dukky_html_track_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLTRACKELEMENT", "HTMLTrackElement");
	dukky_create_prototype(ctx, dukky_html_audio_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLAUDIOELEMENT", "HTMLAudioElement");
	dukky_create_prototype(ctx, dukky_html_video_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLVIDEOELEMENT", "HTMLVideoElement");
	dukky_create_prototype(ctx, dukky_html_param_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLPARAMELEMENT", "HTMLParamElement");
	dukky_create_prototype(ctx, dukky_html_object_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLOBJECTELEMENT", "HTMLObjectElement");
	dukky_create_prototype(ctx, dukky_html_embed_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLEMBEDELEMENT", "HTMLEmbedElement");
	dukky_create_prototype(ctx, dukky_html_iframe_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLIFRAMEELEMENT", "HTMLIFrameElement");
	dukky_create_prototype(ctx, dukky_html_image_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLIMAGEELEMENT", "HTMLImageElement");
	dukky_create_prototype(ctx, dukky_html_source_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLSOURCEELEMENT", "HTMLSourceElement");
	dukky_create_prototype(ctx, dukky_html_picture_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLPICTUREELEMENT", "HTMLPictureElement");
	dukky_create_prototype(ctx, dukky_html_mod_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLMODELEMENT", "HTMLModElement");
	dukky_create_prototype(ctx, dukky_html_br_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLBRELEMENT", "HTMLBRElement");
	dukky_create_prototype(ctx, dukky_html_span_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLSPANELEMENT", "HTMLSpanElement");
	dukky_create_prototype(ctx, dukky_html_time_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLTIMEELEMENT", "HTMLTimeElement");
	dukky_create_prototype(ctx, dukky_html_data_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLDATAELEMENT", "HTMLDataElement");
	dukky_create_prototype(ctx, dukky_html_anchor_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLANCHORELEMENT", "HTMLAnchorElement");
	dukky_create_prototype(ctx, dukky_html_div_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLDIVELEMENT", "HTMLDivElement");
	dukky_create_prototype(ctx, dukky_html_dlist_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLDLISTELEMENT", "HTMLDListElement");
	dukky_create_prototype(ctx, dukky_html_li_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLLIELEMENT", "HTMLLIElement");
	dukky_create_prototype(ctx, dukky_html_ulist_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLULISTELEMENT", "HTMLUListElement");
	dukky_create_prototype(ctx, dukky_html_olist_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLOLISTELEMENT", "HTMLOListElement");
	dukky_create_prototype(ctx, dukky_html_quote_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLQUOTEELEMENT", "HTMLQuoteElement");
	dukky_create_prototype(ctx, dukky_html_pre_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLPREELEMENT", "HTMLPreElement");
	dukky_create_prototype(ctx, dukky_html_hr_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLHRELEMENT", "HTMLHRElement");
	dukky_create_prototype(ctx, dukky_html_paragraph_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLPARAGRAPHELEMENT", "HTMLParagraphElement");
	dukky_create_prototype(ctx, dukky_html_heading_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLHEADINGELEMENT", "HTMLHeadingElement");
	dukky_create_prototype(ctx, dukky_html_body_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLBODYELEMENT", "HTMLBodyElement");
	dukky_create_prototype(ctx, dukky_html_style_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLSTYLEELEMENT", "HTMLStyleElement");
	dukky_create_prototype(ctx, dukky_html_meta_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLMETAELEMENT", "HTMLMetaElement");
	dukky_create_prototype(ctx, dukky_html_link_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLLINKELEMENT", "HTMLLinkElement");
	dukky_create_prototype(ctx, dukky_html_base_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLBASEELEMENT", "HTMLBaseElement");
	dukky_create_prototype(ctx, dukky_html_title_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLTITLEELEMENT", "HTMLTitleElement");
	dukky_create_prototype(ctx, dukky_html_head_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLHEADELEMENT", "HTMLHeadElement");
	dukky_create_prototype(ctx, dukky_html_html_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLHTMLELEMENT", "HTMLHtmlElement");
	dukky_create_prototype(ctx, dukky_html_unknown_element___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLUNKNOWNELEMENT", "HTMLUnknownElement");
	dukky_create_prototype(ctx, dukky_dom_element_map___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DOMELEMENTMAP", "DOMElementMap");
	dukky_create_prototype(ctx, dukky_dom_string_map___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DOMSTRINGMAP", "DOMStringMap");
	dukky_create_prototype(ctx, dukky_html_collection___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLCOLLECTION", "HTMLCollection");
	dukky_create_prototype(ctx, dukky_html_options_collection___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLOPTIONSCOLLECTION", "HTMLOptionsCollection");
	dukky_create_prototype(ctx, dukky_node_list___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_NODELIST", "NodeList");
	dukky_create_prototype(ctx, dukky_radio_node_list___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_RADIONODELIST", "RadioNodeList");
	dukky_create_prototype(ctx, dukky_html_form_controls_collection___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLFORMCONTROLSCOLLECTION", "HTMLFormControlsCollection");
	dukky_create_prototype(ctx, dukky_html_all_collection___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLALLCOLLECTION", "HTMLAllCollection");
	dukky_create_prototype(ctx, dukky_xml_serializer___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_XMLSERIALIZER", "XMLSerializer");
	dukky_create_prototype(ctx, dukky_dom_parser___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DOMPARSER", "DOMParser");
	dukky_create_prototype(ctx, dukky_dom_token_list___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DOMTOKENLIST", "DOMTokenList");
	dukky_create_prototype(ctx, dukky_dom_settable_token_list___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DOMSETTABLETOKENLIST", "DOMSettableTokenList");
	dukky_create_prototype(ctx, dukky_node_filter___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_NODEFILTER", "NodeFilter");
	dukky_create_prototype(ctx, dukky_tree_walker___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_TREEWALKER", "TreeWalker");
	dukky_create_prototype(ctx, dukky_node_iterator___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_NODEITERATOR", "NodeIterator");
	dukky_create_prototype(ctx, dukky_range___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_RANGE", "Range");
	dukky_create_prototype(ctx, dukky_character_data___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CHARACTERDATA", "CharacterData");
	dukky_create_prototype(ctx, dukky_comment___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_COMMENT", "Comment");
	dukky_create_prototype(ctx, dukky_processing_instruction___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_PROCESSINGINSTRUCTION", "ProcessingInstruction");
	dukky_create_prototype(ctx, dukky_text___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_TEXT", "Text");
	dukky_create_prototype(ctx, dukky_attr___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_ATTR", "Attr");
	dukky_create_prototype(ctx, dukky_named_node_map___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_NAMEDNODEMAP", "NamedNodeMap");
	dukky_create_prototype(ctx, dukky_dom_implementation___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DOMIMPLEMENTATION", "DOMImplementation");
	dukky_create_prototype(ctx, dukky_document___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DOCUMENT", "Document");
	dukky_create_prototype(ctx, dukky_xml_document___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_XMLDOCUMENT", "XMLDocument");
	dukky_create_prototype(ctx, dukky_mutation_record___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_MUTATIONRECORD", "MutationRecord");
	dukky_create_prototype(ctx, dukky_mutation_observer___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_MUTATIONOBSERVER", "MutationObserver");
	dukky_create_prototype(ctx, dukky_document_type___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DOCUMENTTYPE", "DocumentType");
	dukky_create_prototype(ctx, dukky_document_fragment___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_DOCUMENTFRAGMENT", "DocumentFragment");
	dukky_create_prototype(ctx, dukky_event_listener___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_EVENTLISTENER", "EventListener");
	dukky_create_prototype(ctx, dukky_custom_event___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_CUSTOMEVENT", "CustomEvent");

	/* Global object prototype is last */
	dukky_create_prototype(ctx, dukky_window___proto, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_WINDOW", "Window");

	return DUK_ERR_NONE;
}
