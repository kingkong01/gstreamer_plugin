/* GStreamer Cpu Report Element
 * Copyright (C) <2010> Zaheer Abbas Merali <zaheerabbas merali org>
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

#include <gst/gst.h>
#include <string.h>
#include <math.h>
#include <time.h>

#include "gstavtdecryptts.h"


enum
{
  PROP_0,
};


GstStaticPadTemplate avt_decrypt_ts_src_template = GST_STATIC_PAD_TEMPLATE ("src",
    GST_PAD_SRC,
    GST_PAD_ALWAYS,
    GST_STATIC_CAPS ("video/mpegts, " "systemstream = (boolean) true "));

GstStaticPadTemplate avt_decrypt_ts_sink_template = GST_STATIC_PAD_TEMPLATE ("sink",
    GST_PAD_SINK,
    GST_PAD_ALWAYS,
    GST_STATIC_CAPS ("video/mpegts, " "systemstream = (boolean) true "));

static GstFlowReturn gst_avt_decrypt_ts_transform (GstBaseTransform * trans,
    GstBuffer * inbuf,GstBuffer * outbuf);

static gboolean gst_avt_decrypt_ts_start (GstBaseTransform * trans);
static gboolean gst_avt_decrypt_ts_stop (GstBaseTransform * trans);

#define gst_avt_decrypt_ts_parent_class parent_class
G_DEFINE_TYPE (GstAvtDecryptTs, gst_avt_decrypt_ts, GST_TYPE_BASE_TRANSFORM);

static void
gst_avt_decrypt_ts_finalize (GObject * obj)
{
  G_OBJECT_CLASS (parent_class)->finalize (obj);
}

static void
gst_avt_decrypt_ts_class_init (GstAvtDecryptTsClass * g_class)
{
  GstBaseTransformClass *gstbasetrans_class;
  GstElementClass *element_class;
  GObjectClass *gobject_class;

  gobject_class = G_OBJECT_CLASS (g_class);
  element_class = GST_ELEMENT_CLASS (g_class);
  gstbasetrans_class = GST_BASE_TRANSFORM_CLASS (g_class);

  gobject_class->finalize = gst_avt_decrypt_ts_finalize;

  gst_element_class_add_static_pad_template (element_class,
      &avt_decrypt_ts_sink_template);
  gst_element_class_add_static_pad_template (element_class,
      &avt_decrypt_ts_src_template);

  gst_element_class_set_static_metadata (element_class, "Decrypt encrypted TS",
      "AVermedia",
      "Decrypt encrypted TS",
      "Weihsuan-Tsai <weihsuan.tsai@avermedia.com>");

  gstbasetrans_class->transform =
      GST_DEBUG_FUNCPTR (gst_avt_decrypt_ts_transform);
  gstbasetrans_class->start = GST_DEBUG_FUNCPTR (gst_avt_decrypt_ts_start);
  gstbasetrans_class->stop = GST_DEBUG_FUNCPTR (gst_avt_decrypt_ts_stop);
}

static void
gst_avt_decrypt_ts_init (GstAvtDecryptTs * report)
{
  //gst_base_transform_set_passthrough (GST_BASE_TRANSFORM (report), TRUE);

}

static GstFlowReturn gst_avt_decrypt_ts_transform (GstBaseTransform * trans,
    GstBuffer * inbuf,GstBuffer * outbuf)
{
#if 0

#endif

  return GST_FLOW_OK;
}

static gboolean
gst_avt_decrypt_ts_start (GstBaseTransform * trans)
{
  GstAvtDecryptTs *filter;

  filter = GST_AVT_DECRYPT_TS (trans);

  return TRUE;
}

static gboolean
gst_avt_decrypt_ts_stop (GstBaseTransform * trans)
{
  /* anything we should be doing here? */
  return TRUE;
}
