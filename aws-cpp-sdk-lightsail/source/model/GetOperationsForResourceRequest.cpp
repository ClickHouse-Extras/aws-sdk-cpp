﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetOperationsForResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetOperationsForResourceRequest::GetOperationsForResourceRequest() : 
    m_resourceNameHasBeenSet(false),
    m_pageTokenHasBeenSet(false)
{
}

Aws::String GetOperationsForResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("pageToken", m_pageToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetOperationsForResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetOperationsForResource"));
  return headers;

}




