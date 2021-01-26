﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AcceptInputDeviceTransferRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcceptInputDeviceTransferRequest::AcceptInputDeviceTransferRequest() : 
    m_inputDeviceIdHasBeenSet(false)
{
}

Aws::String AcceptInputDeviceTransferRequest::SerializePayload() const
{
  return {};
}




