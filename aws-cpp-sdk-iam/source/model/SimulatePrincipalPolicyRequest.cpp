﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/SimulatePrincipalPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

SimulatePrincipalPolicyRequest::SimulatePrincipalPolicyRequest() : 
    m_policySourceArnHasBeenSet(false),
    m_policyInputListHasBeenSet(false),
    m_permissionsBoundaryPolicyInputListHasBeenSet(false),
    m_actionNamesHasBeenSet(false),
    m_resourceArnsHasBeenSet(false),
    m_resourcePolicyHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false),
    m_callerArnHasBeenSet(false),
    m_contextEntriesHasBeenSet(false),
    m_resourceHandlingOptionHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String SimulatePrincipalPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SimulatePrincipalPolicy&";
  if(m_policySourceArnHasBeenSet)
  {
    ss << "PolicySourceArn=" << StringUtils::URLEncode(m_policySourceArn.c_str()) << "&";
  }

  if(m_policyInputListHasBeenSet)
  {
    unsigned policyInputListCount = 1;
    for(auto& item : m_policyInputList)
    {
      ss << "PolicyInputList.member." << policyInputListCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      policyInputListCount++;
    }
  }

  if(m_permissionsBoundaryPolicyInputListHasBeenSet)
  {
    unsigned permissionsBoundaryPolicyInputListCount = 1;
    for(auto& item : m_permissionsBoundaryPolicyInputList)
    {
      ss << "PermissionsBoundaryPolicyInputList.member." << permissionsBoundaryPolicyInputListCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      permissionsBoundaryPolicyInputListCount++;
    }
  }

  if(m_actionNamesHasBeenSet)
  {
    unsigned actionNamesCount = 1;
    for(auto& item : m_actionNames)
    {
      ss << "ActionNames.member." << actionNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      actionNamesCount++;
    }
  }

  if(m_resourceArnsHasBeenSet)
  {
    unsigned resourceArnsCount = 1;
    for(auto& item : m_resourceArns)
    {
      ss << "ResourceArns.member." << resourceArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      resourceArnsCount++;
    }
  }

  if(m_resourcePolicyHasBeenSet)
  {
    ss << "ResourcePolicy=" << StringUtils::URLEncode(m_resourcePolicy.c_str()) << "&";
  }

  if(m_resourceOwnerHasBeenSet)
  {
    ss << "ResourceOwner=" << StringUtils::URLEncode(m_resourceOwner.c_str()) << "&";
  }

  if(m_callerArnHasBeenSet)
  {
    ss << "CallerArn=" << StringUtils::URLEncode(m_callerArn.c_str()) << "&";
  }

  if(m_contextEntriesHasBeenSet)
  {
    unsigned contextEntriesCount = 1;
    for(auto& item : m_contextEntries)
    {
      item.OutputToStream(ss, "ContextEntries.member.", contextEntriesCount, "");
      contextEntriesCount++;
    }
  }

  if(m_resourceHandlingOptionHasBeenSet)
  {
    ss << "ResourceHandlingOption=" << StringUtils::URLEncode(m_resourceHandlingOption.c_str()) << "&";
  }

  if(m_maxItemsHasBeenSet)
  {
    ss << "MaxItems=" << m_maxItems << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}


void  SimulatePrincipalPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
