/*
 * Copyright © 2019 Rodolfo Granata
 *
 * This program is free software: you can redistribute it and/or modify
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

#pragma once

#include <gio/gio.h>
#include <gtk/gtk.h>
#include <vte/vte.h>

G_BEGIN_DECLS

typedef struct
{
  char *name;
  char *match;
  char *rewrite;
  VteRegex *regex;
  int prio;
  int tag;
} UrlHandler;

void profile_text_objects_editor_init (void);
void profile_text_objects_editor_load (GSettings *profile);

GSList *profile_text_objects_load (GSettings *profile);
void profile_text_objects_free (GSList*);

G_END_DECLS
