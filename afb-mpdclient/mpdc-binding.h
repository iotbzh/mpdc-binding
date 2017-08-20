/*
 * AlsaLibMapping -- provide low level interface with ALSA lib (extracted from alsa-json-gateway code)
 * Copyright (C) 2015,2016,2017, Fulup Ar Foll fulup@iot.bzh
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

 
#ifndef MPCLIBMAPPING_H
#define MPCLIBMAPPING_H

#define AFB_BINDING_VERSION 2
#include <afb/afb-binding.h>
#include <json-c/json.h>

#include <common-utils.h>
#include <libclient-utils.h>
#include "mpdc-binding.h"



// mpdc-binding.c
PUBLIC bool mpdcIfConnectFail(mpdcChannelEnumT channel, mpdcHandleT *mpdcHandle, afb_req request);

// mpdc_command.c
PUBLIC bool mpdcapi_init(const char *bindername);

// mpdc-event.c
PUBLIC bool EventPush ( json_object *ctlEventJ);
PUBLIC void mpdcapi_subscribe(afb_req request);
PUBLIC bool EventCreate(mpdcHandleT *mpdcHandle, afb_req request);

// MainLoop.c
PUBLIC bool MainLoopAddMpdc(mpdcHandleT *mpdcHandle);

#endif /* MPCLIBMAPPING_H */
