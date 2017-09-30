/* GStreamer
 * Copyright (C) <2009> Kapil Agrawal <kapil@mediamagictechnologies.com>
 *
 * gstopencv.cpp: plugin registering
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "gstavtdecryptts.h"
#define PACKAGE "gst-plugins-bad" // fix GST_PLUGIN_DEFINE

static gboolean
plugin_init (GstPlugin * plugin)
{
      if( !gst_element_register (plugin, "avt_decrypt_ts", GST_RANK_NONE,
          gst_avt_decrypt_ts_get_type ()))
          return FALSE;


  return TRUE;
}


GST_PLUGIN_DEFINE (GST_VERSION_MAJOR,
    GST_VERSION_MINOR,
    VisionLab,
    "GStreamer AVerMedia Plugins",
    plugin_init, "0.0.1", "LGPL", "AVerMedia", "Unknown package origin"
    )
