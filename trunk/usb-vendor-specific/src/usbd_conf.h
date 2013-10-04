#ifndef __USBD_CONF__H__
#define __USBD_CONF__H__

#include "usb_conf.h"

#define USBD_CFG_MAX_NUM           1
#define USBD_ITF_MAX_NUM           1
#define USB_MAX_STR_DESC_SIZ       64 
#define USBD_EP0_MAX_PACKET_SIZE   64

#define USBD_DYNAMIC_DESCRIPTOR_CHANGE_ENABLED

#define HID_IN_EP                    0x80 | 0x01 // 0x80 means that this is an IN endpoint.
#define HID_OUT_EP                   0x01

#define HID_IN_PACKET                4
#define HID_OUT_PACKET               4

#endif //__USBD_CONF__H__

