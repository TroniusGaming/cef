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
// $hash=e96fe0660b55afa20c3bb5fdebc85635ccc53d09$
//

#include "libcef_dll/cpptoc/life_span_handler_cpptoc.h"
#include "libcef_dll/cpptoc/client_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/dictionary_value_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/template_util.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK life_span_handler_on_before_popup(
    struct _cef_life_span_handler_t* self,
    cef_browser_t* browser,
    cef_frame_t* frame,
    const cef_string_t* target_url,
    const cef_string_t* target_frame_name,
    cef_window_open_disposition_t target_disposition,
    int user_gesture,
    const cef_popup_features_t* popupFeatures,
    cef_window_info_t* windowInfo,
    cef_client_t** client,
    struct _cef_browser_settings_t* settings,
    struct _cef_dictionary_value_t** extra_info,
    int* no_javascript_access) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser) {
    return 0;
  }
  // Verify param: frame; type: refptr_diff
  DCHECK(frame);
  if (!frame) {
    return 0;
  }
  // Verify param: popupFeatures; type: simple_byref_const
  DCHECK(popupFeatures);
  if (!popupFeatures) {
    return 0;
  }
  // Verify param: windowInfo; type: struct_byref
  DCHECK(windowInfo);
  if (!windowInfo) {
    return 0;
  }
  if (!template_util::has_valid_size(windowInfo)) {
    DCHECK(false) << "invalid windowInfo->[base.]size";
    return 0;
  }
  // Verify param: client; type: refptr_same_byref
  DCHECK(client);
  if (!client) {
    return 0;
  }
  // Verify param: settings; type: struct_byref
  DCHECK(settings);
  if (!settings) {
    return 0;
  }
  if (!template_util::has_valid_size(settings)) {
    DCHECK(false) << "invalid settings->[base.]size";
    return 0;
  }
  // Verify param: extra_info; type: refptr_diff_byref
  DCHECK(extra_info);
  if (!extra_info) {
    return 0;
  }
  // Verify param: no_javascript_access; type: bool_byaddr
  DCHECK(no_javascript_access);
  if (!no_javascript_access) {
    return 0;
  }
  // Unverified params: target_url, target_frame_name

  // Translate param: popupFeatures; type: simple_byref_const
  CefPopupFeatures popupFeaturesVal =
      popupFeatures ? *popupFeatures : CefPopupFeatures();
  // Translate param: windowInfo; type: struct_byref
  CefWindowInfo windowInfoObj;
  if (windowInfo) {
    windowInfoObj.AttachTo(*windowInfo);
  }
  // Translate param: client; type: refptr_same_byref
  CefRefPtr<CefClient> clientPtr;
  if (client && *client) {
    clientPtr = CefClientCppToC::Unwrap(*client);
  }
  CefClient* clientOrig = clientPtr.get();
  // Translate param: settings; type: struct_byref
  CefBrowserSettings settingsObj;
  if (settings) {
    settingsObj.AttachTo(*settings);
  }
  // Translate param: extra_info; type: refptr_diff_byref
  CefRefPtr<CefDictionaryValue> extra_infoPtr;
  if (extra_info && *extra_info) {
    extra_infoPtr = CefDictionaryValueCToCpp::Wrap(*extra_info);
  }
  CefDictionaryValue* extra_infoOrig = extra_infoPtr.get();
  // Translate param: no_javascript_access; type: bool_byaddr
  bool no_javascript_accessBool =
      (no_javascript_access && *no_javascript_access) ? true : false;

  // Execute
  bool _retval = CefLifeSpanHandlerCppToC::Get(self)->OnBeforePopup(
      CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame),
      CefString(target_url), CefString(target_frame_name), target_disposition,
      user_gesture ? true : false, popupFeaturesVal, windowInfoObj, clientPtr,
      settingsObj, extra_infoPtr, &no_javascript_accessBool);

  // Restore param: windowInfo; type: struct_byref
  if (windowInfo) {
    windowInfoObj.DetachTo(*windowInfo);
  }
  // Restore param: client; type: refptr_same_byref
  if (client) {
    if (clientPtr.get()) {
      if (clientPtr.get() != clientOrig) {
        *client = CefClientCppToC::Wrap(clientPtr);
      }
    } else {
      *client = nullptr;
    }
  }
  // Restore param: settings; type: struct_byref
  if (settings) {
    settingsObj.DetachTo(*settings);
  }
  // Restore param: extra_info; type: refptr_diff_byref
  if (extra_info) {
    if (extra_infoPtr.get()) {
      if (extra_infoPtr.get() != extra_infoOrig) {
        *extra_info = CefDictionaryValueCToCpp::Unwrap(extra_infoPtr);
      }
    } else {
      *extra_info = nullptr;
    }
  }
  // Restore param: no_javascript_access; type: bool_byaddr
  if (no_javascript_access) {
    *no_javascript_access = no_javascript_accessBool ? true : false;
  }

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK
life_span_handler_on_after_created(struct _cef_life_span_handler_t* self,
                                   cef_browser_t* browser) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser) {
    return;
  }

  // Execute
  CefLifeSpanHandlerCppToC::Get(self)->OnAfterCreated(
      CefBrowserCToCpp::Wrap(browser));
}

int CEF_CALLBACK
life_span_handler_do_close(struct _cef_life_span_handler_t* self,
                           cef_browser_t* browser) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser) {
    return 0;
  }

  // Execute
  bool _retval = CefLifeSpanHandlerCppToC::Get(self)->DoClose(
      CefBrowserCToCpp::Wrap(browser));

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK
life_span_handler_on_before_close(struct _cef_life_span_handler_t* self,
                                  cef_browser_t* browser) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser) {
    return;
  }

  // Execute
  CefLifeSpanHandlerCppToC::Get(self)->OnBeforeClose(
      CefBrowserCToCpp::Wrap(browser));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefLifeSpanHandlerCppToC::CefLifeSpanHandlerCppToC() {
  GetStruct()->on_before_popup = life_span_handler_on_before_popup;
  GetStruct()->on_after_created = life_span_handler_on_after_created;
  GetStruct()->do_close = life_span_handler_do_close;
  GetStruct()->on_before_close = life_span_handler_on_before_close;
}

// DESTRUCTOR - Do not edit by hand.

CefLifeSpanHandlerCppToC::~CefLifeSpanHandlerCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefLifeSpanHandler> CefCppToCRefCounted<
    CefLifeSpanHandlerCppToC,
    CefLifeSpanHandler,
    cef_life_span_handler_t>::UnwrapDerived(CefWrapperType type,
                                            cef_life_span_handler_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefLifeSpanHandlerCppToC,
                                   CefLifeSpanHandler,
                                   cef_life_span_handler_t>::kWrapperType =
    WT_LIFE_SPAN_HANDLER;
