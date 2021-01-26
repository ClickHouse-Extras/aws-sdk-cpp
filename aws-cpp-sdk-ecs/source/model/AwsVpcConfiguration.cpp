﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/AwsVpcConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

AwsVpcConfiguration::AwsVpcConfiguration() : 
    m_subnetsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_assignPublicIp(AssignPublicIp::NOT_SET),
    m_assignPublicIpHasBeenSet(false)
{
}

AwsVpcConfiguration::AwsVpcConfiguration(JsonView jsonValue) : 
    m_subnetsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_assignPublicIp(AssignPublicIp::NOT_SET),
    m_assignPublicIpHasBeenSet(false)
{
  *this = jsonValue;
}

AwsVpcConfiguration& AwsVpcConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("subnets"))
  {
    Array<JsonView> subnetsJsonList = jsonValue.GetArray("subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroups"))
  {
    Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assignPublicIp"))
  {
    m_assignPublicIp = AssignPublicIpMapper::GetAssignPublicIpForName(jsonValue.GetString("assignPublicIp"));

    m_assignPublicIpHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsVpcConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_subnetsHasBeenSet)
  {
   Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("subnets", std::move(subnetsJsonList));

  }

  if(m_securityGroupsHasBeenSet)
  {
   Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("securityGroups", std::move(securityGroupsJsonList));

  }

  if(m_assignPublicIpHasBeenSet)
  {
   payload.WithString("assignPublicIp", AssignPublicIpMapper::GetNameForAssignPublicIp(m_assignPublicIp));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
