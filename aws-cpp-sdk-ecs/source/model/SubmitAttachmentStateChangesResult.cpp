﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/SubmitAttachmentStateChangesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SubmitAttachmentStateChangesResult::SubmitAttachmentStateChangesResult()
{
}

SubmitAttachmentStateChangesResult::SubmitAttachmentStateChangesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SubmitAttachmentStateChangesResult& SubmitAttachmentStateChangesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("acknowledgment"))
  {
    m_acknowledgment = jsonValue.GetString("acknowledgment");

  }



  return *this;
}
