﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/RetryBuildResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RetryBuildResult::RetryBuildResult()
{
}

RetryBuildResult::RetryBuildResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RetryBuildResult& RetryBuildResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("build"))
  {
    m_build = jsonValue.GetObject("build");

  }



  return *this;
}
