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


#ifndef dukky_private_h
#define dukky_private_h

/* Private data for EventInit dictionary */
typedef struct {
} __attribute__((aligned)) event_init_private_t;

/* Private data for UIEventInit dictionary */
typedef struct {
	event_init_private_t parent;
} __attribute__((aligned)) ui_event_init_private_t;

/* Private data for CompositionEventInit dictionary */
typedef struct {
	ui_event_init_private_t parent;
} __attribute__((aligned)) composition_event_init_private_t;

/* Private data for EventModifierInit dictionary */
typedef struct {
	ui_event_init_private_t parent;
} __attribute__((aligned)) event_modifier_init_private_t;

/* Private data for KeyboardEventInit dictionary */
typedef struct {
	event_modifier_init_private_t parent;
} __attribute__((aligned)) keyboard_event_init_private_t;

/* Private data for MouseEventInit dictionary */
typedef struct {
	event_modifier_init_private_t parent;
} __attribute__((aligned)) mouse_event_init_private_t;

/* Private data for WheelEventInit dictionary */
typedef struct {
	mouse_event_init_private_t parent;
} __attribute__((aligned)) wheel_event_init_private_t;

/* Private data for FocusEventInit dictionary */
typedef struct {
	ui_event_init_private_t parent;
} __attribute__((aligned)) focus_event_init_private_t;

/* Private data for StorageEventInit dictionary */
typedef struct {
	event_init_private_t parent;
} __attribute__((aligned)) storage_event_init_private_t;

/* Private data for CloseEventInit dictionary */
typedef struct {
	event_init_private_t parent;
} __attribute__((aligned)) close_event_init_private_t;

/* Private data for EventSourceInit dictionary */
typedef struct {
} __attribute__((aligned)) event_source_init_private_t;

/* Private data for MessageEventInit dictionary */
typedef struct {
	event_init_private_t parent;
} __attribute__((aligned)) message_event_init_private_t;

/* Private data for ErrorEventInit dictionary */
typedef struct {
	event_init_private_t parent;
} __attribute__((aligned)) error_event_init_private_t;

/* Private data for PageTransitionEventInit dictionary */
typedef struct {
	event_init_private_t parent;
} __attribute__((aligned)) page_transition_event_init_private_t;

/* Private data for HashChangeEventInit dictionary */
typedef struct {
	event_init_private_t parent;
} __attribute__((aligned)) hash_change_event_init_private_t;

/* Private data for PopStateEventInit dictionary */
typedef struct {
	event_init_private_t parent;
} __attribute__((aligned)) pop_state_event_init_private_t;

/* Private data for DragEventInit dictionary */
typedef struct {
	mouse_event_init_private_t parent;
} __attribute__((aligned)) drag_event_init_private_t;

/* Private data for HitRegionOptions dictionary */
typedef struct {
} __attribute__((aligned)) hit_region_options_private_t;

/* Private data for CanvasRenderingContext2DSettings dictionary */
typedef struct {
} __attribute__((aligned)) canvas_rendering_context2d_settings_private_t;

/* Private data for RelatedEventInit dictionary */
typedef struct {
	event_init_private_t parent;
} __attribute__((aligned)) related_event_init_private_t;

/* Private data for AutocompleteErrorEventInit dictionary */
typedef struct {
	event_init_private_t parent;
} __attribute__((aligned)) autocomplete_error_event_init_private_t;

/* Private data for TrackEventInit dictionary */
typedef struct {
	event_init_private_t parent;
} __attribute__((aligned)) track_event_init_private_t;

/* Private data for MutationObserverInit dictionary */
typedef struct {
} __attribute__((aligned)) mutation_observer_init_private_t;

/* Private data for CustomEventInit dictionary */
typedef struct {
	event_init_private_t parent;
} __attribute__((aligned)) custom_event_init_private_t;

/* Private data for Console interface */
typedef struct {
	unsigned int group;
} __attribute__((aligned)) console_private_t;

/* Private data for URLSearchParams interface */
typedef struct {
} __attribute__((aligned)) url_search_params_private_t;

/* Private data for URL interface */
typedef struct {
} __attribute__((aligned)) url_private_t;

/* Private data for Event interface */
typedef struct {
	dom_event *evt;
} __attribute__((aligned)) event_private_t;

/* Private data for MutationEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) mutation_event_private_t;

/* Private data for UIEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) ui_event_private_t;

/* Private data for CompositionEvent interface */
typedef struct {
	ui_event_private_t parent;
} __attribute__((aligned)) composition_event_private_t;

/* Private data for KeyboardEvent interface */
typedef struct {
	ui_event_private_t parent;
} __attribute__((aligned)) keyboard_event_private_t;

/* Private data for MouseEvent interface */
typedef struct {
	ui_event_private_t parent;
} __attribute__((aligned)) mouse_event_private_t;

/* Private data for WheelEvent interface */
typedef struct {
	mouse_event_private_t parent;
} __attribute__((aligned)) wheel_event_private_t;

/* Private data for FocusEvent interface */
typedef struct {
	ui_event_private_t parent;
} __attribute__((aligned)) focus_event_private_t;

/* Private data for CSS interface */
typedef struct {
} __attribute__((aligned)) css_private_t;

/* Private data for PseudoElement interface */
typedef struct {
} __attribute__((aligned)) pseudo_element_private_t;

/* Private data for SVGElement interface */
typedef struct {
} __attribute__((aligned)) svg_element_private_t;

/* Private data for CSSStyleDeclaration interface */
typedef struct {
} __attribute__((aligned)) css_style_declaration_private_t;

/* Private data for CSSRule interface */
typedef struct {
} __attribute__((aligned)) css_rule_private_t;

/* Private data for CSSNamespaceRule interface */
typedef struct {
	css_rule_private_t parent;
} __attribute__((aligned)) css_namespace_rule_private_t;

/* Private data for CSSMarginRule interface */
typedef struct {
	css_rule_private_t parent;
} __attribute__((aligned)) css_margin_rule_private_t;

/* Private data for CSSGroupingRule interface */
typedef struct {
	css_rule_private_t parent;
} __attribute__((aligned)) css_grouping_rule_private_t;

/* Private data for CSSPageRule interface */
typedef struct {
	css_grouping_rule_private_t parent;
} __attribute__((aligned)) css_page_rule_private_t;

/* Private data for CSSMediaRule interface */
typedef struct {
	css_grouping_rule_private_t parent;
} __attribute__((aligned)) css_media_rule_private_t;

/* Private data for CSSImportRule interface */
typedef struct {
	css_rule_private_t parent;
} __attribute__((aligned)) css_import_rule_private_t;

/* Private data for CSSStyleRule interface */
typedef struct {
	css_rule_private_t parent;
} __attribute__((aligned)) css_style_rule_private_t;

/* Private data for CSSRuleList interface */
typedef struct {
} __attribute__((aligned)) css_rule_list_private_t;

/* Private data for StyleSheetList interface */
typedef struct {
} __attribute__((aligned)) style_sheet_list_private_t;

/* Private data for StyleSheet interface */
typedef struct {
} __attribute__((aligned)) style_sheet_private_t;

/* Private data for CSSStyleSheet interface */
typedef struct {
	style_sheet_private_t parent;
} __attribute__((aligned)) css_style_sheet_private_t;

/* Private data for MediaList interface */
typedef struct {
} __attribute__((aligned)) media_list_private_t;

/* Private data for EventTarget interface */
typedef struct {
	bool bubbling_registered;
	bool capture_registered;
	bool is_node;
} __attribute__((aligned)) event_target_private_t;

/* Private data for Node interface */
typedef struct {
	event_target_private_t parent;
	dom_node *node;
} __attribute__((aligned)) node_private_t;

/* Private data for Element interface */
typedef struct {
	node_private_t parent;
} __attribute__((aligned)) element_private_t;

/* Private data for HTMLElement interface */
typedef struct {
	element_private_t parent;
} __attribute__((aligned)) html_element_private_t;

/* Private data for HTMLFontElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_font_element_private_t;

/* Private data for HTMLDirectoryElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_directory_element_private_t;

/* Private data for HTMLFrameElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_frame_element_private_t;

/* Private data for HTMLFrameSetElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_frame_set_element_private_t;

/* Private data for HTMLMarqueeElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_marquee_element_private_t;

/* Private data for HTMLAppletElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_applet_element_private_t;

/* Private data for StorageEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) storage_event_private_t;

/* Private data for Storage interface */
typedef struct {
} __attribute__((aligned)) storage_private_t;

/* Private data for WorkerLocation interface */
typedef struct {
} __attribute__((aligned)) worker_location_private_t;

/* Private data for WorkerNavigator interface */
typedef struct {
} __attribute__((aligned)) worker_navigator_private_t;

/* Private data for SharedWorker interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) shared_worker_private_t;

/* Private data for Worker interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) worker_private_t;

/* Private data for WorkerGlobalScope interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) worker_global_scope_private_t;

/* Private data for SharedWorkerGlobalScope interface */
typedef struct {
	worker_global_scope_private_t parent;
} __attribute__((aligned)) shared_worker_global_scope_private_t;

/* Private data for DedicatedWorkerGlobalScope interface */
typedef struct {
	worker_global_scope_private_t parent;
} __attribute__((aligned)) dedicated_worker_global_scope_private_t;

/* Private data for BroadcastChannel interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) broadcast_channel_private_t;

/* Private data for MessagePort interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) message_port_private_t;

/* Private data for MessageChannel interface */
typedef struct {
} __attribute__((aligned)) message_channel_private_t;

/* Private data for CloseEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) close_event_private_t;

/* Private data for WebSocket interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) web_socket_private_t;

/* Private data for EventSource interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) event_source_private_t;

/* Private data for MessageEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) message_event_private_t;

/* Private data for ImageBitmap interface */
typedef struct {
} __attribute__((aligned)) image_bitmap_private_t;

/* Private data for External interface */
typedef struct {
} __attribute__((aligned)) external_private_t;

/* Private data for MimeType interface */
typedef struct {
} __attribute__((aligned)) mime_type_private_t;

/* Private data for Plugin interface */
typedef struct {
} __attribute__((aligned)) plugin_private_t;

/* Private data for MimeTypeArray interface */
typedef struct {
} __attribute__((aligned)) mime_type_array_private_t;

/* Private data for PluginArray interface */
typedef struct {
} __attribute__((aligned)) plugin_array_private_t;

/* Private data for Navigator interface */
typedef struct {
} __attribute__((aligned)) navigator_private_t;

/* Private data for ErrorEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) error_event_private_t;

/* Private data for ApplicationCache interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) application_cache_private_t;

/* Private data for BeforeUnloadEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) before_unload_event_private_t;

/* Private data for PageTransitionEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) page_transition_event_private_t;

/* Private data for HashChangeEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) hash_change_event_private_t;

/* Private data for PopStateEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) pop_state_event_private_t;

/* Private data for Location interface */
typedef struct {
	nsurl *url;
} __attribute__((aligned)) location_private_t;

/* Private data for History interface */
typedef struct {
} __attribute__((aligned)) history_private_t;

/* Private data for BarProp interface */
typedef struct {
} __attribute__((aligned)) bar_prop_private_t;

/* Private data for Window interface */
typedef struct {
	event_target_private_t parent;
	bool closed_down;
	struct window_schedule_s *schedule_ring;
	struct html_content *htmlc;
	struct browser_window *win;
} __attribute__((aligned)) window_private_t;

/* Private data for DragEvent interface */
typedef struct {
	mouse_event_private_t parent;
} __attribute__((aligned)) drag_event_private_t;

/* Private data for DataTransferItem interface */
typedef struct {
} __attribute__((aligned)) data_transfer_item_private_t;

/* Private data for DataTransferItemList interface */
typedef struct {
} __attribute__((aligned)) data_transfer_item_list_private_t;

/* Private data for DataTransfer interface */
typedef struct {
} __attribute__((aligned)) data_transfer_private_t;

/* Private data for Touch interface */
typedef struct {
} __attribute__((aligned)) touch_private_t;

/* Private data for Path2D interface */
typedef struct {
} __attribute__((aligned)) path2d_private_t;

/* Private data for DrawingStyle interface */
typedef struct {
} __attribute__((aligned)) drawing_style_private_t;

/* Private data for ImageData interface */
typedef struct {
} __attribute__((aligned)) image_data_private_t;

/* Private data for TextMetrics interface */
typedef struct {
} __attribute__((aligned)) text_metrics_private_t;

/* Private data for CanvasPattern interface */
typedef struct {
} __attribute__((aligned)) canvas_pattern_private_t;

/* Private data for CanvasGradient interface */
typedef struct {
} __attribute__((aligned)) canvas_gradient_private_t;

/* Private data for CanvasRenderingContext2D interface */
typedef struct {
} __attribute__((aligned)) canvas_rendering_context2d_private_t;

/* Private data for CanvasProxy interface */
typedef struct {
} __attribute__((aligned)) canvas_proxy_private_t;

/* Private data for HTMLCanvasElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_canvas_element_private_t;

/* Private data for HTMLTemplateElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_template_element_private_t;

/* Private data for HTMLScriptElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_script_element_private_t;

/* Private data for HTMLDialogElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_dialog_element_private_t;

/* Private data for RelatedEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) related_event_private_t;

/* Private data for HTMLMenuItemElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_menu_item_element_private_t;

/* Private data for HTMLMenuElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_menu_element_private_t;

/* Private data for HTMLDetailsElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_details_element_private_t;

/* Private data for ValidityState interface */
typedef struct {
} __attribute__((aligned)) validity_state_private_t;

/* Private data for AutocompleteErrorEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) autocomplete_error_event_private_t;

/* Private data for HTMLLegendElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_legend_element_private_t;

/* Private data for HTMLFieldSetElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_field_set_element_private_t;

/* Private data for HTMLMeterElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_meter_element_private_t;

/* Private data for HTMLProgressElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_progress_element_private_t;

/* Private data for HTMLOutputElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_output_element_private_t;

/* Private data for HTMLKeygenElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_keygen_element_private_t;

/* Private data for HTMLTextAreaElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_text_area_element_private_t;

/* Private data for HTMLOptionElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_option_element_private_t;

/* Private data for HTMLOptGroupElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_opt_group_element_private_t;

/* Private data for HTMLDataListElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_data_list_element_private_t;

/* Private data for HTMLSelectElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_select_element_private_t;

/* Private data for HTMLButtonElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_button_element_private_t;

/* Private data for HTMLInputElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_input_element_private_t;

/* Private data for HTMLLabelElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_label_element_private_t;

/* Private data for HTMLFormElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_form_element_private_t;

/* Private data for HTMLTableCellElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_table_cell_element_private_t;

/* Private data for HTMLTableHeaderCellElement interface */
typedef struct {
	html_table_cell_element_private_t parent;
} __attribute__((aligned)) html_table_header_cell_element_private_t;

/* Private data for HTMLTableDataCellElement interface */
typedef struct {
	html_table_cell_element_private_t parent;
} __attribute__((aligned)) html_table_data_cell_element_private_t;

/* Private data for HTMLTableRowElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_table_row_element_private_t;

/* Private data for HTMLTableSectionElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_table_section_element_private_t;

/* Private data for HTMLTableColElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_table_col_element_private_t;

/* Private data for HTMLTableCaptionElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_table_caption_element_private_t;

/* Private data for HTMLTableElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_table_element_private_t;

/* Private data for HTMLAreaElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_area_element_private_t;

/* Private data for HTMLMapElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_map_element_private_t;

/* Private data for TrackEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) track_event_private_t;

/* Private data for TimeRanges interface */
typedef struct {
} __attribute__((aligned)) time_ranges_private_t;

/* Private data for TextTrackCue interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) text_track_cue_private_t;

/* Private data for TextTrackCueList interface */
typedef struct {
} __attribute__((aligned)) text_track_cue_list_private_t;

/* Private data for TextTrack interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) text_track_private_t;

/* Private data for TextTrackList interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) text_track_list_private_t;

/* Private data for MediaController interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) media_controller_private_t;

/* Private data for VideoTrack interface */
typedef struct {
} __attribute__((aligned)) video_track_private_t;

/* Private data for VideoTrackList interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) video_track_list_private_t;

/* Private data for AudioTrack interface */
typedef struct {
} __attribute__((aligned)) audio_track_private_t;

/* Private data for AudioTrackList interface */
typedef struct {
	event_target_private_t parent;
} __attribute__((aligned)) audio_track_list_private_t;

/* Private data for MediaError interface */
typedef struct {
} __attribute__((aligned)) media_error_private_t;

/* Private data for HTMLMediaElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_media_element_private_t;

/* Private data for HTMLTrackElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_track_element_private_t;

/* Private data for HTMLAudioElement interface */
typedef struct {
	html_media_element_private_t parent;
} __attribute__((aligned)) html_audio_element_private_t;

/* Private data for HTMLVideoElement interface */
typedef struct {
	html_media_element_private_t parent;
} __attribute__((aligned)) html_video_element_private_t;

/* Private data for HTMLParamElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_param_element_private_t;

/* Private data for HTMLObjectElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_object_element_private_t;

/* Private data for HTMLEmbedElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_embed_element_private_t;

/* Private data for HTMLIFrameElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_iframe_element_private_t;

/* Private data for HTMLImageElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_image_element_private_t;

/* Private data for HTMLSourceElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_source_element_private_t;

/* Private data for HTMLPictureElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_picture_element_private_t;

/* Private data for HTMLModElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_mod_element_private_t;

/* Private data for HTMLBRElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_br_element_private_t;

/* Private data for HTMLSpanElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_span_element_private_t;

/* Private data for HTMLTimeElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_time_element_private_t;

/* Private data for HTMLDataElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_data_element_private_t;

/* Private data for HTMLAnchorElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_anchor_element_private_t;

/* Private data for HTMLDivElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_div_element_private_t;

/* Private data for HTMLDListElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_dlist_element_private_t;

/* Private data for HTMLLIElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_li_element_private_t;

/* Private data for HTMLUListElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_ulist_element_private_t;

/* Private data for HTMLOListElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_olist_element_private_t;

/* Private data for HTMLQuoteElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_quote_element_private_t;

/* Private data for HTMLPreElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_pre_element_private_t;

/* Private data for HTMLHRElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_hr_element_private_t;

/* Private data for HTMLParagraphElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_paragraph_element_private_t;

/* Private data for HTMLHeadingElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_heading_element_private_t;

/* Private data for HTMLBodyElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_body_element_private_t;

/* Private data for HTMLStyleElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_style_element_private_t;

/* Private data for HTMLMetaElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_meta_element_private_t;

/* Private data for HTMLLinkElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_link_element_private_t;

/* Private data for HTMLBaseElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_base_element_private_t;

/* Private data for HTMLTitleElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_title_element_private_t;

/* Private data for HTMLHeadElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_head_element_private_t;

/* Private data for HTMLHtmlElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_html_element_private_t;

/* Private data for HTMLUnknownElement interface */
typedef struct {
	html_element_private_t parent;
} __attribute__((aligned)) html_unknown_element_private_t;

/* Private data for DOMElementMap interface */
typedef struct {
} __attribute__((aligned)) dom_element_map_private_t;

/* Private data for DOMStringMap interface */
typedef struct {
} __attribute__((aligned)) dom_string_map_private_t;

/* Private data for HTMLCollection interface */
typedef struct {
	struct dom_html_collection *coll;
} __attribute__((aligned)) html_collection_private_t;

/* Private data for HTMLOptionsCollection interface */
typedef struct {
	html_collection_private_t parent;
} __attribute__((aligned)) html_options_collection_private_t;

/* Private data for NodeList interface */
typedef struct {
	struct dom_nodelist *nodes;
} __attribute__((aligned)) node_list_private_t;

/* Private data for RadioNodeList interface */
typedef struct {
	node_list_private_t parent;
} __attribute__((aligned)) radio_node_list_private_t;

/* Private data for HTMLFormControlsCollection interface */
typedef struct {
	html_collection_private_t parent;
} __attribute__((aligned)) html_form_controls_collection_private_t;

/* Private data for HTMLAllCollection interface */
typedef struct {
} __attribute__((aligned)) html_all_collection_private_t;

/* Private data for XMLSerializer interface */
typedef struct {
} __attribute__((aligned)) xml_serializer_private_t;

/* Private data for DOMParser interface */
typedef struct {
} __attribute__((aligned)) dom_parser_private_t;

/* Private data for DOMTokenList interface */
typedef struct {
} __attribute__((aligned)) dom_token_list_private_t;

/* Private data for DOMSettableTokenList interface */
typedef struct {
	dom_token_list_private_t parent;
} __attribute__((aligned)) dom_settable_token_list_private_t;

/* Private data for NodeFilter interface */
typedef struct {
} __attribute__((aligned)) node_filter_private_t;

/* Private data for TreeWalker interface */
typedef struct {
} __attribute__((aligned)) tree_walker_private_t;

/* Private data for NodeIterator interface */
typedef struct {
} __attribute__((aligned)) node_iterator_private_t;

/* Private data for Range interface */
typedef struct {
} __attribute__((aligned)) range_private_t;

/* Private data for CharacterData interface */
typedef struct {
	node_private_t parent;
} __attribute__((aligned)) character_data_private_t;

/* Private data for Comment interface */
typedef struct {
	character_data_private_t parent;
} __attribute__((aligned)) comment_private_t;

/* Private data for ProcessingInstruction interface */
typedef struct {
	character_data_private_t parent;
} __attribute__((aligned)) processing_instruction_private_t;

/* Private data for Text interface */
typedef struct {
	character_data_private_t parent;
} __attribute__((aligned)) text_private_t;

/* Private data for Attr interface */
typedef struct {
} __attribute__((aligned)) attr_private_t;

/* Private data for NamedNodeMap interface */
typedef struct {
	struct dom_namednodemap *map;
} __attribute__((aligned)) named_node_map_private_t;

/* Private data for DOMImplementation interface */
typedef struct {
} __attribute__((aligned)) dom_implementation_private_t;

/* Private data for Document interface */
typedef struct {
	node_private_t parent;
} __attribute__((aligned)) document_private_t;

/* Private data for XMLDocument interface */
typedef struct {
	document_private_t parent;
} __attribute__((aligned)) xml_document_private_t;

/* Private data for MutationRecord interface */
typedef struct {
} __attribute__((aligned)) mutation_record_private_t;

/* Private data for MutationObserver interface */
typedef struct {
} __attribute__((aligned)) mutation_observer_private_t;

/* Private data for DocumentType interface */
typedef struct {
	node_private_t parent;
} __attribute__((aligned)) document_type_private_t;

/* Private data for DocumentFragment interface */
typedef struct {
	node_private_t parent;
} __attribute__((aligned)) document_fragment_private_t;

/* Private data for EventListener interface */
typedef struct {
} __attribute__((aligned)) event_listener_private_t;

/* Private data for CustomEvent interface */
typedef struct {
	event_private_t parent;
} __attribute__((aligned)) custom_event_private_t;


#endif
