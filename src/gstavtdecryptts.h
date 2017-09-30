#ifndef __GST_AVT_DECRYPT_TS_H__
#define __GST_AVT_DECRYPT_TS_H__

#include <time.h>

#include <gst/base/gstbasetransform.h>

G_BEGIN_DECLS
#define GST_TYPE_AVT_DECRYPT_TS \
  (gst_avt_decrypt_ts_get_type())
#define GST_AVT_DECRYPT_TS(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_AVT_DECRYPT_TS,GstAvtDecryptTs))
#define GST_AVT_DECRYPT_TS_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_AVT_DECRYPT_TS,GstAvtDecryptTsClass))
#define GST_IS_AVT_DECRYPT_TS(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_AVT_DECRYPT_TS))
#define GST_IS_AVT_DECRYPT_TS_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_AVT_DECRYPT_TS))
typedef struct _GstAvtDecryptTs GstAvtDecryptTs;
typedef struct _GstAvtDecryptTsClass GstAvtDecryptTsClass;

struct _GstAvtDecryptTs
{
  GstBaseTransform basetransform;

};

struct _GstAvtDecryptTsClass
{
  GstBaseTransformClass parent_class;
};

GType gst_avt_decrypt_ts_get_type (void);

G_END_DECLS
#endif /* __GST_AVT_DECRYPT_TS_H__ */
