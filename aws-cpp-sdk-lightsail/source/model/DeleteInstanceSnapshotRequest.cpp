﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DeleteInstanceSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteInstanceSnapshotRequest::DeleteInstanceSnapshotRequest() : 
    m_instanceSnapshotNameHasBeenSet(false)
{
}

Aws::String DeleteInstanceSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceSnapshotNameHasBeenSet)
  {
   payload.WithString("instanceSnapshotName", m_instanceSnapshotName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteInstanceSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.DeleteInstanceSnapshot"));
  return headers;

}




