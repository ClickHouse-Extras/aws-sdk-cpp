﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetWorkflowRequest::GetWorkflowRequest() : 
    m_nameHasBeenSet(false),
    m_includeGraph(false),
    m_includeGraphHasBeenSet(false)
{
}

Aws::String GetWorkflowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_includeGraphHasBeenSet)
  {
   payload.WithBool("IncludeGraph", m_includeGraph);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetWorkflowRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetWorkflow"));
  return headers;

}




