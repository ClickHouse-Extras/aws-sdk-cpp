﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyHostsResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyHostsResponse::ModifyHostsResponse()
{
}

ModifyHostsResponse::ModifyHostsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyHostsResponse& ModifyHostsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyHostsResponse"))
  {
    resultNode = rootNode.FirstChild("ModifyHostsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode successfulNode = resultNode.FirstChild("successful");
    if(!successfulNode.IsNull())
    {
      XmlNode successfulMember = successfulNode.FirstChild("item");
      while(!successfulMember.IsNull())
      {
        m_successful.push_back(successfulMember.GetText());
        successfulMember = successfulMember.NextNode("item");
      }

    }
    XmlNode unsuccessfulNode = resultNode.FirstChild("unsuccessful");
    if(!unsuccessfulNode.IsNull())
    {
      XmlNode unsuccessfulMember = unsuccessfulNode.FirstChild("item");
      while(!unsuccessfulMember.IsNull())
      {
        m_unsuccessful.push_back(unsuccessfulMember);
        unsuccessfulMember = unsuccessfulMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ModifyHostsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
