#pragma once

#define EEZ_GUI_DOCUMENT_API_VERSION 1

#include <eez/gui/data.h>
#include <eez/gui/widget.h>

namespace eez {
namespace gui {

enum DataEnum {
    DATA_ID_NONE = 0,
    DATA_ID_ALERT_MESSAGE = 1
};

void data_none(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_alert_message(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);

typedef void (*DataOperationsFunction)(DataOperationEnum operation, const WidgetCursor &widgetCursor, Value &value);

extern DataOperationsFunction g_dataOperationsFunctions[];

enum ActionsEnum {
    ACTION_ID_NONE = 0,
    ACTION_ID_YES = 1,
    ACTION_ID_NO = 2,
    ACTION_ID_CANCEL = 3,
    ACTION_ID_EDIT = 4,
    ACTION_ID_DRAG_OVERLAY = 5,
    ACTION_ID_SCROLL = 6
};

void action_yes();
void action_no();
void action_cancel();
void action_edit();
void action_drag_overlay();
void action_scroll();

extern ActionExecFunc g_actionExecFunctions[];

enum FontsEnum {
    FONT_ID_NONE = 0,
    FONT_ID_MEDIUM = 1,
    FONT_ID_SHADOW = 2,
    FONT_ID_GUI_ICONS = 3
};

enum BitmapsEnum {
    BITMAP_ID_NONE = 0
};

enum StylesEnum {
    STYLE_ID_NONE = 0,
    STYLE_ID_DEFAULT = 1,
    STYLE_ID_MESSAGE_BOX_INFO = 2,
    STYLE_ID_MESSAGE_BOX_ERROR = 3,
    STYLE_ID_MESSAGE_BOX_ERROR_BUTTON = 4,
    STYLE_ID_DROP_DOWN_LIST_POPUP_CONTAINER = 5,
    STYLE_ID_DROP_DOWN_LIST_POPUP_ITEM = 7,
    STYLE_ID_DROP_DOWN_LIST_DISABLED_POPUP_ITEM = 9,
    STYLE_ID_MESSAGE_BOX_QUESTION_MESSAGE = 11,
    STYLE_ID_MESSAGE_BOX_QUESTION_CONTAINER = 12,
    STYLE_ID_MESSAGE_BOX_QUESTION_BUTTON = 13,
    STYLE_ID_SLIDER = 15,
    STYLE_ID_SWITCH = 16,
    STYLE_ID_DROP_DOWN_LIST = 17,
    STYLE_ID_ROLLER = 18,
    STYLE_ID_ROLLER_SELECTED_VALUE = 19,
    STYLE_ID_ROLLER_UNSELECTED_VALUE = 20,
    STYLE_ID_BACKGROUND = 21,
    STYLE_ID_BUTTON = 22,
    STYLE_ID_BUTTON_DISABLED = 23,
    STYLE_ID_MESSAGE_BOX_INFO_BUTTON = 25
};

enum ThemesEnum {
    THEME_ID_DEFAULT = 0
};

enum ColorsEnum {
    COLOR_ID_TRANSPARENT = 65535,
    COLOR_ID_BACKGROUND = 0,
    COLOR_ID_BACKDROP = 1,
    COLOR_ID_TEXT = 2,
    COLOR_ID_TEXT_INACTIVE = 3,
    COLOR_ID_DARK_TEXT = 4,
    COLOR_ID_BORDER = 5,
    COLOR_ID_ACTIVE_BACKGROUND = 6,
    COLOR_ID_BUTTON_TEXT = 7,
    COLOR_ID_BUTTON_BACKGROUND = 8,
    COLOR_ID_BUTTON_ACTIVE_BACKGROUND = 9,
    COLOR_ID_BUTTON_BORDER = 10,
    COLOR_ID_BUTTON_DISABLED_TEXT = 11,
    COLOR_ID_BUTTON_DISABLED_BACKGROUND = 12,
    COLOR_ID_BUTTON_DISABLED_BORDER = 13,
    COLOR_ID_ERROR = 14,
    COLOR_ID_SWITCH_WIDGET_COLOR = 15,
    COLOR_ID_SWITCH_WIDGET_BACKGROUND_ON = 16,
    COLOR_ID_SWITCH_WIDGET_BACKGROUND_OFF = 17,
    COLOR_ID_SWITCH_WIDGET_BORDER = 18,
    COLOR_ID_SLIDER_WIDGET_COLOR = 19,
    COLOR_ID_SLIDER_WIDGET_BACKGROUND = 20,
    COLOR_ID_DROP_DOWN_LIST_COLOR = 21,
    COLOR_ID_DROP_DOWN_LIST_COLOR_DISABLED = 22,
    COLOR_ID_DROP_DOWN_LIST_BACKGROUND = 23,
    COLOR_ID_DROP_DOWN_LIST_BORDER = 24,
    COLOR_ID_DROP_DOWN_LIST_ACTIVE_BACKGROUND = 25,
	COLOR_ID_CUSTOM_000000 = 26,
	COLOR_ID_CUSTOM_FFFFFF = 27,
	COLOR_ID_CUSTOM_C0C0C0 = 28,
	COLOR_ID_CUSTOM_808080 = 29,
	COLOR_ID_CUSTOM_9E9E9E = 30,
	COLOR_ID_CUSTOM_00AF00 = 31,
	COLOR_ID_CUSTOM_E10101 = 32,
	COLOR_ID_CUSTOM_636363 = 33
};

enum PagesEnum {
    PAGE_ID_NONE = 0,
    PAGE_ID_MAIN = 1
};

extern const uint8_t assets[12109];

} // namespace gui
} // namespace eez
