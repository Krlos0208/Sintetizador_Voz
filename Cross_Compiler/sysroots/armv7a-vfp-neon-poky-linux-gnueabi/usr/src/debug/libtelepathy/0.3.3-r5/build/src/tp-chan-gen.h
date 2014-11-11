/* Generated by dbus-binding-tool; do not edit! */

#include <glib.h>
#include <dbus/dbus-glib.h>

G_BEGIN_DECLS

#ifndef _DBUS_GLIB_ASYNC_DATA_FREE
#define _DBUS_GLIB_ASYNC_DATA_FREE
static
#ifdef G_HAVE_INLINE
inline
#endif
void
_dbus_glib_async_data_free (gpointer stuff)
{
	g_slice_free (DBusGAsyncData, stuff);
}
#endif

#ifndef DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_Telepathy_Channel
#define DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_Telepathy_Channel

static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
tp_chan_close (DBusGProxy *proxy, GError **error)

{
  return dbus_g_proxy_call (proxy, "Close", error, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*tp_chan_close_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
tp_chan_close_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(tp_chan_close_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
tp_chan_close_async (DBusGProxy *proxy, tp_chan_close_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Close", tp_chan_close_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
tp_chan_get_channel_type (DBusGProxy *proxy, char ** OUT_arg0, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetChannelType", error, G_TYPE_INVALID, G_TYPE_STRING, OUT_arg0, G_TYPE_INVALID);
}

typedef void (*tp_chan_get_channel_type_reply) (DBusGProxy *proxy, char * OUT_arg0, GError *error, gpointer userdata);

static void
tp_chan_get_channel_type_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char * OUT_arg0;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_STRING, &OUT_arg0, G_TYPE_INVALID);
  (*(tp_chan_get_channel_type_reply)data->cb) (proxy, OUT_arg0, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
tp_chan_get_channel_type_async (DBusGProxy *proxy, tp_chan_get_channel_type_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetChannelType", tp_chan_get_channel_type_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
tp_chan_get_handle (DBusGProxy *proxy, guint* OUT_arg0, guint* OUT_arg1, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetHandle", error, G_TYPE_INVALID, G_TYPE_UINT, OUT_arg0, G_TYPE_UINT, OUT_arg1, G_TYPE_INVALID);
}

typedef void (*tp_chan_get_handle_reply) (DBusGProxy *proxy, guint OUT_arg0, guint OUT_arg1, GError *error, gpointer userdata);

static void
tp_chan_get_handle_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  guint OUT_arg0;
  guint OUT_arg1;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_UINT, &OUT_arg0, G_TYPE_UINT, &OUT_arg1, G_TYPE_INVALID);
  (*(tp_chan_get_handle_reply)data->cb) (proxy, OUT_arg0, OUT_arg1, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
tp_chan_get_handle_async (DBusGProxy *proxy, tp_chan_get_handle_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetHandle", tp_chan_get_handle_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
tp_chan_get_interfaces (DBusGProxy *proxy, char *** OUT_arg0, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetInterfaces", error, G_TYPE_INVALID, G_TYPE_STRV, OUT_arg0, G_TYPE_INVALID);
}

typedef void (*tp_chan_get_interfaces_reply) (DBusGProxy *proxy, char * *OUT_arg0, GError *error, gpointer userdata);

static void
tp_chan_get_interfaces_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char ** OUT_arg0;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_STRV, &OUT_arg0, G_TYPE_INVALID);
  (*(tp_chan_get_interfaces_reply)data->cb) (proxy, OUT_arg0, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
tp_chan_get_interfaces_async (DBusGProxy *proxy, tp_chan_get_interfaces_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetInterfaces", tp_chan_get_interfaces_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
#endif /* defined DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_Telepathy_Channel */

G_END_DECLS