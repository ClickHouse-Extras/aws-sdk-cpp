﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iot/model/HttpUrlDestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

HttpUrlDestinationConfiguration::HttpUrlDestinationConfiguration() : 
    m_confirmationUrlHasBeenSet(false)
{
}

HttpUrlDestinationConfiguration::HttpUrlDestinationConfiguration(JsonView jsonValue) : 
    m_confirmationUrlHasBeenSet(false)
{
  *this = jsonValue;
}

HttpUrlDestinationConfiguration& HttpUrlDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("confirmationUrl"))
  {
    m_confirmationUrl = jsonValue.GetString("confirmationUrl");

    m_confirmationUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpUrlDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_confirmationUrlHasBeenSet)
  {
   payload.WithString("confirmationUrl", m_confirmationUrl);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
