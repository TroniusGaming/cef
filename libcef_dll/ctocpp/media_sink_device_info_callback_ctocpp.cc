// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=067877a410a4ae9d7d671d5826a5c93eb6cdad37$
//

#include "libcef_dll/ctocpp/media_sink_device_info_callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefMediaSinkDeviceInfoCallbackCToCpp::OnMediaSinkDeviceInfo(
    const CefMediaSinkDeviceInfo& device_info) {
  shutdown_checker::AssertNotShutdown();

  cef_media_sink_device_info_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_media_sink_device_info)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->on_media_sink_device_info(_struct, &device_info);
}

// CONSTRUCTOR - Do not edit by hand.

CefMediaSinkDeviceInfoCallbackCToCpp::CefMediaSinkDeviceInfoCallbackCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefMediaSinkDeviceInfoCallbackCToCpp::~CefMediaSinkDeviceInfoCallbackCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_media_sink_device_info_callback_t*
CefCToCppRefCounted<CefMediaSinkDeviceInfoCallbackCToCpp,
                    CefMediaSinkDeviceInfoCallback,
                    cef_media_sink_device_info_callback_t>::
    UnwrapDerived(CefWrapperType type, CefMediaSinkDeviceInfoCallback* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefMediaSinkDeviceInfoCallbackCToCpp,
                        CefMediaSinkDeviceInfoCallback,
                        cef_media_sink_device_info_callback_t>::kWrapperType =
        WT_MEDIA_SINK_DEVICE_INFO_CALLBACK;
