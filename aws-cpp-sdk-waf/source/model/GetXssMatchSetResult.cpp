﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/GetXssMatchSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetXssMatchSetResult::GetXssMatchSetResult()
{
}

GetXssMatchSetResult::GetXssMatchSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetXssMatchSetResult& GetXssMatchSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("XssMatchSet"))
  {
    m_xssMatchSet = jsonValue.GetObject("XssMatchSet");

  }



  return *this;
}
