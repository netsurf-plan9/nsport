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


#ifndef dukky_prototype_h
#define dukky_prototype_h

duk_bool_t dukky_event_init_get_bubbles(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_init_get_cancelable(duk_context *ctx, duk_idx_t idx);
/* Dictionary UIEventInit:view unhandled type (1) */
duk_int_t dukky_ui_event_init_get_detail(duk_context *ctx, duk_idx_t idx);
const char *dukky_composition_event_init_get_data(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_ctrlKey(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_shiftKey(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_altKey(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_metaKey(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_modifierAltGraph(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_modifierCapsLock(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_modifierFn(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_modifierFnLock(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_modifierHyper(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_modifierNumLock(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_modifierOS(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_modifierScrollLock(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_modifierSuper(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_modifierSymbol(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_modifier_init_get_modifierSymbolLock(duk_context *ctx, duk_idx_t idx);
const char *dukky_keyboard_event_init_get_key(duk_context *ctx, duk_idx_t idx);
const char *dukky_keyboard_event_init_get_code(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_keyboard_event_init_get_location(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_keyboard_event_init_get_repeat(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_keyboard_event_init_get_isComposing(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_keyboard_event_init_get_charCode(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_keyboard_event_init_get_keyCode(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_keyboard_event_init_get_which(duk_context *ctx, duk_idx_t idx);
const char *dukky_mouse_event_init_get_region(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_mouse_event_init_get_screenX(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_mouse_event_init_get_screenY(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_mouse_event_init_get_clientX(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_mouse_event_init_get_clientY(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_mouse_event_init_get_button(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_mouse_event_init_get_buttons(duk_context *ctx, duk_idx_t idx);
/* Dictionary MouseEventInit:relatedTarget unhandled type (1) */
duk_double_t dukky_wheel_event_init_get_deltaX(duk_context *ctx, duk_idx_t idx);
duk_double_t dukky_wheel_event_init_get_deltaY(duk_context *ctx, duk_idx_t idx);
duk_double_t dukky_wheel_event_init_get_deltaZ(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_wheel_event_init_get_deltaMode(duk_context *ctx, duk_idx_t idx);
/* Dictionary FocusEventInit:relatedTarget unhandled type (1) */
const char *dukky_storage_event_init_get_key(duk_context *ctx, duk_idx_t idx);
const char *dukky_storage_event_init_get_oldValue(duk_context *ctx, duk_idx_t idx);
const char *dukky_storage_event_init_get_newValue(duk_context *ctx, duk_idx_t idx);
const char *dukky_storage_event_init_get_url(duk_context *ctx, duk_idx_t idx);
/* Dictionary StorageEventInit:storageArea unhandled type (1) */
duk_bool_t dukky_close_event_init_get_wasClean(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_close_event_init_get_code(duk_context *ctx, duk_idx_t idx);
const char *dukky_close_event_init_get_reason(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_event_source_init_get_withCredentials(duk_context *ctx, duk_idx_t idx);
/* Dictionary MessageEventInit:data unhandled type (0) */
const char *dukky_message_event_init_get_origin(duk_context *ctx, duk_idx_t idx);
const char *dukky_message_event_init_get_lastEventId(duk_context *ctx, duk_idx_t idx);
/* Dictionary MessageEventInit:source unhandled type (1) */
/* Dictionary MessageEventInit:ports unhandled type (11) */
const char *dukky_error_event_init_get_message(duk_context *ctx, duk_idx_t idx);
const char *dukky_error_event_init_get_filename(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_error_event_init_get_lineno(duk_context *ctx, duk_idx_t idx);
duk_int_t dukky_error_event_init_get_colno(duk_context *ctx, duk_idx_t idx);
/* Dictionary ErrorEventInit:error unhandled type (0) */
duk_bool_t dukky_page_transition_event_init_get_persisted(duk_context *ctx, duk_idx_t idx);
const char *dukky_hash_change_event_init_get_oldURL(duk_context *ctx, duk_idx_t idx);
const char *dukky_hash_change_event_init_get_newURL(duk_context *ctx, duk_idx_t idx);
/* Dictionary PopStateEventInit:state unhandled type (0) */
/* Dictionary DragEventInit:dataTransfer unhandled type (1) */
/* Dictionary HitRegionOptions:path unhandled type (1) */
/* Dictionary HitRegionOptions:fillRule unhandled type (1) */
const char *dukky_hit_region_options_get_id(duk_context *ctx, duk_idx_t idx);
const char *dukky_hit_region_options_get_parentID(duk_context *ctx, duk_idx_t idx);
const char *dukky_hit_region_options_get_cursor(duk_context *ctx, duk_idx_t idx);
/* Dictionary HitRegionOptions:control unhandled type (1) */
const char *dukky_hit_region_options_get_label(duk_context *ctx, duk_idx_t idx);
const char *dukky_hit_region_options_get_role(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_canvas_rendering_context2d_settings_get_alpha(duk_context *ctx, duk_idx_t idx);
/* Dictionary RelatedEventInit:relatedTarget unhandled type (1) */
/* Dictionary AutocompleteErrorEventInit:reason unhandled type (1) */
/* Dictionary TrackEventInit:track unhandled type (1) */
duk_bool_t dukky_mutation_observer_init_get_childList(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_mutation_observer_init_get_attributes(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_mutation_observer_init_get_characterData(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_mutation_observer_init_get_subtree(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_mutation_observer_init_get_attributeOldValue(duk_context *ctx, duk_idx_t idx);
duk_bool_t dukky_mutation_observer_init_get_characterDataOldValue(duk_context *ctx, duk_idx_t idx);
/* Dictionary MutationObserverInit:attributeFilter unhandled type (11) */
/* Dictionary CustomEventInit:detail unhandled type (0) */
duk_ret_t dukky_console___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_url_search_params___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_url___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_event___proto(duk_context *ctx, void *udata);
void dukky_event___fini(duk_context *ctx, event_private_t *priv);
void dukky_event___init(duk_context *ctx, event_private_t *priv, struct dom_event *evt);

duk_ret_t dukky_mutation_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_ui_event___proto(duk_context *ctx, void *udata);
void dukky_ui_event___fini(duk_context *ctx, ui_event_private_t *priv);
void dukky_ui_event___init(duk_context *ctx, ui_event_private_t *priv, struct dom_ui_event *evt);

duk_ret_t dukky_composition_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_keyboard_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_mouse_event___proto(duk_context *ctx, void *udata);
void dukky_mouse_event___fini(duk_context *ctx, mouse_event_private_t *priv);
void dukky_mouse_event___init(duk_context *ctx, mouse_event_private_t *priv, struct dom_mouse_event *evt);

duk_ret_t dukky_wheel_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_focus_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_css___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_pseudo_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_svg_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_css_style_declaration___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_css_rule___proto(duk_context *ctx, void *udata);
void dukky_css_rule___fini(duk_context *ctx, css_rule_private_t *priv);
void dukky_css_rule___init(duk_context *ctx, css_rule_private_t *priv);

duk_ret_t dukky_css_namespace_rule___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_css_margin_rule___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_css_grouping_rule___proto(duk_context *ctx, void *udata);
void dukky_css_grouping_rule___fini(duk_context *ctx, css_grouping_rule_private_t *priv);
void dukky_css_grouping_rule___init(duk_context *ctx, css_grouping_rule_private_t *priv);

duk_ret_t dukky_css_page_rule___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_css_media_rule___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_css_import_rule___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_css_style_rule___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_css_rule_list___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_style_sheet_list___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_style_sheet___proto(duk_context *ctx, void *udata);
void dukky_style_sheet___fini(duk_context *ctx, style_sheet_private_t *priv);
void dukky_style_sheet___init(duk_context *ctx, style_sheet_private_t *priv);

duk_ret_t dukky_css_style_sheet___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_media_list___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_event_target___proto(duk_context *ctx, void *udata);
void dukky_event_target___fini(duk_context *ctx, event_target_private_t *priv);
void dukky_event_target___init(duk_context *ctx, event_target_private_t *priv);

duk_ret_t dukky_node___proto(duk_context *ctx, void *udata);
void dukky_node___fini(duk_context *ctx, node_private_t *priv);
void dukky_node___init(duk_context *ctx, node_private_t *priv, struct dom_node *node);

duk_ret_t dukky_element___proto(duk_context *ctx, void *udata);
void dukky_element___fini(duk_context *ctx, element_private_t *priv);
void dukky_element___init(duk_context *ctx, element_private_t *priv, struct dom_element *element);

duk_ret_t dukky_html_element___proto(duk_context *ctx, void *udata);
void dukky_html_element___fini(duk_context *ctx, html_element_private_t *priv);
void dukky_html_element___init(duk_context *ctx, html_element_private_t *priv, struct dom_html_element *html_element);

duk_ret_t dukky_html_font_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_directory_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_frame_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_frame_set_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_marquee_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_applet_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_storage_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_storage___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_worker_location___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_worker_navigator___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_shared_worker___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_worker___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_worker_global_scope___proto(duk_context *ctx, void *udata);
void dukky_worker_global_scope___fini(duk_context *ctx, worker_global_scope_private_t *priv);
void dukky_worker_global_scope___init(duk_context *ctx, worker_global_scope_private_t *priv);

duk_ret_t dukky_shared_worker_global_scope___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_dedicated_worker_global_scope___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_broadcast_channel___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_message_port___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_message_channel___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_close_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_web_socket___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_event_source___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_message_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_image_bitmap___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_external___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_mime_type___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_plugin___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_mime_type_array___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_plugin_array___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_navigator___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_error_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_application_cache___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_before_unload_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_page_transition_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_hash_change_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_pop_state_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_location___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_history___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_bar_prop___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_window___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_drag_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_data_transfer_item___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_data_transfer_item_list___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_data_transfer___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_touch___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_path2d___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_drawing_style___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_image_data___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_text_metrics___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_canvas_pattern___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_canvas_gradient___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_canvas_rendering_context2d___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_canvas_proxy___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_canvas_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_template_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_script_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_dialog_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_related_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_menu_item_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_menu_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_details_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_validity_state___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_autocomplete_error_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_legend_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_field_set_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_meter_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_progress_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_output_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_keygen_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_text_area_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_option_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_opt_group_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_data_list_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_select_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_button_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_input_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_label_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_form_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_table_cell_element___proto(duk_context *ctx, void *udata);
void dukky_html_table_cell_element___fini(duk_context *ctx, html_table_cell_element_private_t *priv);
void dukky_html_table_cell_element___init(duk_context *ctx, html_table_cell_element_private_t *priv, struct dom_html_element *html_table_cell_element);

duk_ret_t dukky_html_table_header_cell_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_table_data_cell_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_table_row_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_table_section_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_table_col_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_table_caption_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_table_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_area_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_map_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_track_event___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_time_ranges___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_text_track_cue___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_text_track_cue_list___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_text_track___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_text_track_list___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_media_controller___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_video_track___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_video_track_list___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_audio_track___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_audio_track_list___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_media_error___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_media_element___proto(duk_context *ctx, void *udata);
void dukky_html_media_element___fini(duk_context *ctx, html_media_element_private_t *priv);
void dukky_html_media_element___init(duk_context *ctx, html_media_element_private_t *priv, struct dom_html_element *html_media_element);

duk_ret_t dukky_html_track_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_audio_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_video_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_param_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_object_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_embed_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_iframe_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_image_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_source_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_picture_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_mod_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_br_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_span_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_time_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_data_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_anchor_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_div_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_dlist_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_li_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_ulist_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_olist_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_quote_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_pre_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_hr_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_paragraph_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_heading_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_body_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_style_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_meta_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_link_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_base_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_title_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_head_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_html_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_unknown_element___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_dom_element_map___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_dom_string_map___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_collection___proto(duk_context *ctx, void *udata);
void dukky_html_collection___fini(duk_context *ctx, html_collection_private_t *priv);
void dukky_html_collection___init(duk_context *ctx, html_collection_private_t *priv, struct dom_html_collection *coll);

duk_ret_t dukky_html_options_collection___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_node_list___proto(duk_context *ctx, void *udata);
void dukky_node_list___fini(duk_context *ctx, node_list_private_t *priv);
void dukky_node_list___init(duk_context *ctx, node_list_private_t *priv, struct dom_nodelist *nodes);

duk_ret_t dukky_radio_node_list___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_form_controls_collection___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_html_all_collection___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_xml_serializer___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_dom_parser___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_dom_token_list___proto(duk_context *ctx, void *udata);
void dukky_dom_token_list___fini(duk_context *ctx, dom_token_list_private_t *priv);
void dukky_dom_token_list___init(duk_context *ctx, dom_token_list_private_t *priv, struct dom_tokenlist *tokens);

duk_ret_t dukky_dom_settable_token_list___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_node_filter___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_tree_walker___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_node_iterator___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_range___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_character_data___proto(duk_context *ctx, void *udata);
void dukky_character_data___fini(duk_context *ctx, character_data_private_t *priv);
void dukky_character_data___init(duk_context *ctx, character_data_private_t *priv, struct dom_node_character_data *character_data);

duk_ret_t dukky_comment___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_processing_instruction___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_text___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_attr___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_named_node_map___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_dom_implementation___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_document___proto(duk_context *ctx, void *udata);
void dukky_document___fini(duk_context *ctx, document_private_t *priv);
void dukky_document___init(duk_context *ctx, document_private_t *priv, struct dom_document *document);

duk_ret_t dukky_xml_document___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_mutation_record___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_mutation_observer___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_document_type___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_document_fragment___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_event_listener___proto(duk_context *ctx, void *udata);

duk_ret_t dukky_custom_event___proto(duk_context *ctx, void *udata);


#endif
