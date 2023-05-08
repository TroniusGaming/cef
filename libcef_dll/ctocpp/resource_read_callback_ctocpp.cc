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
// $hash=453b8327acaa3268d910e7bbc14e735b176d8c47$
//

#include "libcef_dll/ctocpp/resource_read_callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefResourceReadCallbackCToCpp::Continue(int bytes_read) {
  shutdown_checker::AssertNotShutdown();

  cef_resource_read_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cont)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->cont(_struct, bytes_read);
}

// CONSTRUCTOR - Do not edit by hand.

CefResourceReadCallbackCToCpp::CefResourceReadCallbackCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefResourceReadCallbackCToCpp::~CefResourceReadCallbackCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_resource_read_callback_t* CefCToCppRefCounted<
    CefResourceReadCallbackCToCpp,
    CefResourceReadCallback,
    cef_resource_read_callback_t>::UnwrapDerived(CefWrapperType type,
                                                 CefResourceReadCallback* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefResourceReadCallbackCToCpp,
                                   CefResourceReadCallback,
                                   cef_resource_read_callback_t>::kWrapperType =
    WT_RESOURCE_READ_CALLBACK;
