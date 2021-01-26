﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DisableLDAPSRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisableLDAPSRequest::DisableLDAPSRequest() : 
    m_directoryIdHasBeenSet(false),
    m_type(LDAPSType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String DisableLDAPSRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", LDAPSTypeMapper::GetNameForLDAPSType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisableLDAPSRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DisableLDAPS"));
  return headers;

}




