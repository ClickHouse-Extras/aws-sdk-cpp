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

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>The endpoint from which data should be migrated.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CustomerNodeEndpoint">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API CustomerNodeEndpoint
  {
  public:
    CustomerNodeEndpoint();
    CustomerNodeEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    CustomerNodeEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The address of the node endpoint</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The address of the node endpoint</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The address of the node endpoint</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The address of the node endpoint</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The address of the node endpoint</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The address of the node endpoint</p>
     */
    inline CustomerNodeEndpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The address of the node endpoint</p>
     */
    inline CustomerNodeEndpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The address of the node endpoint</p>
     */
    inline CustomerNodeEndpoint& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The port of the node endpoint</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port of the node endpoint</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port of the node endpoint</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port of the node endpoint</p>
     */
    inline CustomerNodeEndpoint& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
