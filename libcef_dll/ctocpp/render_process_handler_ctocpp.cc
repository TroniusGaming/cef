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
// $hash=1bb6593092ca6768ea5a4d07cd9afbe23460e612$
//

#include "libcef_dll/ctocpp/render_process_handler_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/dictionary_value_cpptoc.h"
#include "libcef_dll/cpptoc/domnode_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/process_message_cpptoc.h"
#include "libcef_dll/cpptoc/v8context_cpptoc.h"
#include "libcef_dll/cpptoc/v8exception_cpptoc.h"
#include "libcef_dll/cpptoc/v8stack_trace_cpptoc.h"
#include "libcef_dll/ctocpp/load_handler_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefRenderProcessHandlerCToCpp::OnWebKitInitialized() {
  cef_render_process_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_web_kit_initialized)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->on_web_kit_initialized(_struct);
}

NO_SANITIZE("cfi-icall")
void CefRenderProcessHandlerCToCpp::OnBrowserCreated(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefDictionaryValue> extra_info) {
  cef_render_process_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_browser_created)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }
  // Unverified params: extra_info

  // Execute
  _struct->on_browser_created(_struct, CefBrowserCppToC::Wrap(browser),
                              CefDictionaryValueCppToC::Wrap(extra_info));
}

NO_SANITIZE("cfi-icall")
void CefRenderProcessHandlerCToCpp::OnBrowserDestroyed(
    CefRefPtr<CefBrowser> browser) {
  cef_render_process_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_browser_destroyed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->on_browser_destroyed(_struct, CefBrowserCppToC::Wrap(browser));
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefLoadHandler> CefRenderProcessHandlerCToCpp::GetLoadHandler() {
  cef_render_process_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_load_handler)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_load_handler_t* _retval = _struct->get_load_handler(_struct);

  // Return type: refptr_same
  return CefLoadHandlerCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
void CefRenderProcessHandlerCToCpp::OnContextCreated(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefV8Context> context) {
  cef_render_process_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_context_created)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get()) {
    return;
  }
  // Verify param: context; type: refptr_diff
  DCHECK(context.get());
  if (!context.get()) {
    return;
  }

  // Execute
  _struct->on_context_created(_struct, CefBrowserCppToC::Wrap(browser),
                              CefFrameCppToC::Wrap(frame),
                              CefV8ContextCppToC::Wrap(context));
}

NO_SANITIZE("cfi-icall")
void CefRenderProcessHandlerCToCpp::OnContextReleased(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefV8Context> context) {
  cef_render_process_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_context_released)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get()) {
    return;
  }
  // Verify param: context; type: refptr_diff
  DCHECK(context.get());
  if (!context.get()) {
    return;
  }

  // Execute
  _struct->on_context_released(_struct, CefBrowserCppToC::Wrap(browser),
                               CefFrameCppToC::Wrap(frame),
                               CefV8ContextCppToC::Wrap(context));
}

NO_SANITIZE("cfi-icall")
void CefRenderProcessHandlerCToCpp::OnUncaughtException(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefV8Context> context,
    CefRefPtr<CefV8Exception> exception,
    CefRefPtr<CefV8StackTrace> stackTrace) {
  cef_render_process_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_uncaught_exception)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get()) {
    return;
  }
  // Verify param: context; type: refptr_diff
  DCHECK(context.get());
  if (!context.get()) {
    return;
  }
  // Verify param: exception; type: refptr_diff
  DCHECK(exception.get());
  if (!exception.get()) {
    return;
  }
  // Verify param: stackTrace; type: refptr_diff
  DCHECK(stackTrace.get());
  if (!stackTrace.get()) {
    return;
  }

  // Execute
  _struct->on_uncaught_exception(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      CefV8ContextCppToC::Wrap(context), CefV8ExceptionCppToC::Wrap(exception),
      CefV8StackTraceCppToC::Wrap(stackTrace));
}

NO_SANITIZE("cfi-icall")
void CefRenderProcessHandlerCToCpp::OnFocusedNodeChanged(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefDOMNode> node) {
  cef_render_process_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_focused_node_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }
  // Unverified params: frame, node

  // Execute
  _struct->on_focused_node_changed(_struct, CefBrowserCppToC::Wrap(browser),
                                   CefFrameCppToC::Wrap(frame),
                                   CefDOMNodeCppToC::Wrap(node));
}

NO_SANITIZE("cfi-icall")
bool CefRenderProcessHandlerCToCpp::OnProcessMessageReceived(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefProcessId source_process,
    CefRefPtr<CefProcessMessage> message) {
  cef_render_process_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_process_message_received)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return false;
  }
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get()) {
    return false;
  }
  // Verify param: message; type: refptr_diff
  DCHECK(message.get());
  if (!message.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->on_process_message_received(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      source_process, CefProcessMessageCppToC::Wrap(message));

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefRenderProcessHandlerCToCpp::CefRenderProcessHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefRenderProcessHandlerCToCpp::~CefRenderProcessHandlerCToCpp() {}

template <>
cef_render_process_handler_t* CefCToCppRefCounted<
    CefRenderProcessHandlerCToCpp,
    CefRenderProcessHandler,
    cef_render_process_handler_t>::UnwrapDerived(CefWrapperType type,
                                                 CefRenderProcessHandler* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefRenderProcessHandlerCToCpp,
                                   CefRenderProcessHandler,
                                   cef_render_process_handler_t>::kWrapperType =
    WT_RENDER_PROCESS_HANDLER;
