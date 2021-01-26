﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceMetadataOptionsResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

InstanceMetadataOptionsResponse::InstanceMetadataOptionsResponse() : 
    m_state(InstanceMetadataOptionsState::NOT_SET),
    m_stateHasBeenSet(false),
    m_httpTokens(HttpTokensState::NOT_SET),
    m_httpTokensHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false),
    m_httpEndpoint(InstanceMetadataEndpointState::NOT_SET),
    m_httpEndpointHasBeenSet(false)
{
}

InstanceMetadataOptionsResponse::InstanceMetadataOptionsResponse(const XmlNode& xmlNode) : 
    m_state(InstanceMetadataOptionsState::NOT_SET),
    m_stateHasBeenSet(false),
    m_httpTokens(HttpTokensState::NOT_SET),
    m_httpTokensHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false),
    m_httpEndpoint(InstanceMetadataEndpointState::NOT_SET),
    m_httpEndpointHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceMetadataOptionsResponse& InstanceMetadataOptionsResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = InstanceMetadataOptionsStateMapper::GetInstanceMetadataOptionsStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode httpTokensNode = resultNode.FirstChild("httpTokens");
    if(!httpTokensNode.IsNull())
    {
      m_httpTokens = HttpTokensStateMapper::GetHttpTokensStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpTokensNode.GetText()).c_str()).c_str());
      m_httpTokensHasBeenSet = true;
    }
    XmlNode httpPutResponseHopLimitNode = resultNode.FirstChild("httpPutResponseHopLimit");
    if(!httpPutResponseHopLimitNode.IsNull())
    {
      m_httpPutResponseHopLimit = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpPutResponseHopLimitNode.GetText()).c_str()).c_str());
      m_httpPutResponseHopLimitHasBeenSet = true;
    }
    XmlNode httpEndpointNode = resultNode.FirstChild("httpEndpoint");
    if(!httpEndpointNode.IsNull())
    {
      m_httpEndpoint = InstanceMetadataEndpointStateMapper::GetInstanceMetadataEndpointStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpEndpointNode.GetText()).c_str()).c_str());
      m_httpEndpointHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceMetadataOptionsResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << InstanceMetadataOptionsStateMapper::GetNameForInstanceMetadataOptionsState(m_state) << "&";
  }

  if(m_httpTokensHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpTokens=" << HttpTokensStateMapper::GetNameForHttpTokensState(m_httpTokens) << "&";
  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }

  if(m_httpEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpEndpoint=" << InstanceMetadataEndpointStateMapper::GetNameForInstanceMetadataEndpointState(m_httpEndpoint) << "&";
  }

}

void InstanceMetadataOptionsResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << InstanceMetadataOptionsStateMapper::GetNameForInstanceMetadataOptionsState(m_state) << "&";
  }
  if(m_httpTokensHasBeenSet)
  {
      oStream << location << ".HttpTokens=" << HttpTokensStateMapper::GetNameForHttpTokensState(m_httpTokens) << "&";
  }
  if(m_httpPutResponseHopLimitHasBeenSet)
  {
      oStream << location << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }
  if(m_httpEndpointHasBeenSet)
  {
      oStream << location << ".HttpEndpoint=" << InstanceMetadataEndpointStateMapper::GetNameForInstanceMetadataEndpointState(m_httpEndpoint) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
