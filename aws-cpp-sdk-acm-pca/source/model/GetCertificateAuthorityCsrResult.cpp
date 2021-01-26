﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/GetCertificateAuthorityCsrResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCertificateAuthorityCsrResult::GetCertificateAuthorityCsrResult()
{
}

GetCertificateAuthorityCsrResult::GetCertificateAuthorityCsrResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCertificateAuthorityCsrResult& GetCertificateAuthorityCsrResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Csr"))
  {
    m_csr = jsonValue.GetString("Csr");

  }



  return *this;
}
