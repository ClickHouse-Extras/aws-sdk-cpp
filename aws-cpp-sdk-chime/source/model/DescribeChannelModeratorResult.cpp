﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DescribeChannelModeratorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeChannelModeratorResult::DescribeChannelModeratorResult()
{
}

DescribeChannelModeratorResult::DescribeChannelModeratorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeChannelModeratorResult& DescribeChannelModeratorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChannelModerator"))
  {
    m_channelModerator = jsonValue.GetObject("ChannelModerator");

  }



  return *this;
}
