﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DeleteFolderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFolderRequest::DeleteFolderRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_folderIdHasBeenSet(false)
{
}

Aws::String DeleteFolderRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection DeleteFolderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}




