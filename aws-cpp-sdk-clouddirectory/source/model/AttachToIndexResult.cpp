﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/AttachToIndexResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AttachToIndexResult::AttachToIndexResult()
{
}

AttachToIndexResult::AttachToIndexResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AttachToIndexResult& AttachToIndexResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AttachedObjectIdentifier"))
  {
    m_attachedObjectIdentifier = jsonValue.GetString("AttachedObjectIdentifier");

  }



  return *this;
}
