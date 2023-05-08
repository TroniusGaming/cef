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
// $hash=e0ae5295de1a999b825687b01fcb494d2901dacc$
//

#include "libcef_dll/cpptoc/run_context_menu_callback_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK
run_context_menu_callback_cont(struct _cef_run_context_menu_callback_t* self,
                               int command_id,
                               cef_event_flags_t event_flags) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefRunContextMenuCallbackCppToC::Get(self)->Continue(command_id, event_flags);
}

void CEF_CALLBACK run_context_menu_callback_cancel(
    struct _cef_run_context_menu_callback_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefRunContextMenuCallbackCppToC::Get(self)->Cancel();
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefRunContextMenuCallbackCppToC::CefRunContextMenuCallbackCppToC() {
  GetStruct()->cont = run_context_menu_callback_cont;
  GetStruct()->cancel = run_context_menu_callback_cancel;
}

// DESTRUCTOR - Do not edit by hand.

CefRunContextMenuCallbackCppToC::~CefRunContextMenuCallbackCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefRunContextMenuCallback>
CefCppToCRefCounted<CefRunContextMenuCallbackCppToC,
                    CefRunContextMenuCallback,
                    cef_run_context_menu_callback_t>::
    UnwrapDerived(CefWrapperType type, cef_run_context_menu_callback_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCppToCRefCounted<CefRunContextMenuCallbackCppToC,
                        CefRunContextMenuCallback,
                        cef_run_context_menu_callback_t>::kWrapperType =
        WT_RUN_CONTEXT_MENU_CALLBACK;
