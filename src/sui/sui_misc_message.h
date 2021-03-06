/* Copyright (C) 2016-2018 Shengyu Zhang <i@silverrainz.me>
 *
 * This file is part of Srain.
 *
 * Srain is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __SUI_MISC_MESSAGE_H
#define __SUI_MISC_MESSAGE_H

#include <gtk/gtk.h>

#include "sui_message.h"

#define SUI_TYPE_MISC_MESSAGE (sui_misc_message_get_type())
#define SUI_MISC_MESSAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST((obj), SUI_TYPE_MISC_MESSAGE, SuiMiscMessage))
#define SUI_IS_MISC_MESSAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE((obj), SUI_TYPE_MISC_MESSAGE))

typedef struct _SuiMiscMessage SuiMiscMessage;
typedef struct _SuiMiscMessageClass SuiMiscMessageClass;

struct _SuiMiscMessage {
    SuiMessage parent;
    SuiMiscMessageStyle style;
};

struct _SuiMiscMessageClass {
    SuiMessageClass parent_class;
};

GType sui_misc_message_get_type(void);
SuiMiscMessage* sui_misc_message_new(void *ctx, SuiMiscMessageStyle style);
SuiMiscMessageStyle sui_misc_message_get_style(SuiMiscMessage *self);

#endif /* __SUI_MISC_MESSAGE_H */
