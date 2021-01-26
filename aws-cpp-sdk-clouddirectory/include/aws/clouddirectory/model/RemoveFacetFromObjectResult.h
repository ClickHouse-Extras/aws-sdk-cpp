﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API RemoveFacetFromObjectResult
  {
  public:
    RemoveFacetFromObjectResult();
    RemoveFacetFromObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RemoveFacetFromObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
