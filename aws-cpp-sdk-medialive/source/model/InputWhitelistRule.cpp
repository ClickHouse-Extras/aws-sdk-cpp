﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputWhitelistRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputWhitelistRule::InputWhitelistRule() : 
    m_cidrHasBeenSet(false)
{
}

InputWhitelistRule::InputWhitelistRule(JsonView jsonValue) : 
    m_cidrHasBeenSet(false)
{
  *this = jsonValue;
}

InputWhitelistRule& InputWhitelistRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cidr"))
  {
    m_cidr = jsonValue.GetString("cidr");

    m_cidrHasBeenSet = true;
  }

  return *this;
}

JsonValue InputWhitelistRule::Jsonize() const
{
  JsonValue payload;

  if(m_cidrHasBeenSet)
  {
   payload.WithString("cidr", m_cidr);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
