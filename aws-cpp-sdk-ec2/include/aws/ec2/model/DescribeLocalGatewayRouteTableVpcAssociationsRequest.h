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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeLocalGatewayRouteTableVpcAssociationsRequest : public EC2Request
  {
  public:
    DescribeLocalGatewayRouteTableVpcAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLocalGatewayRouteTableVpcAssociations"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IDs of the associations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLocalGatewayRouteTableVpcAssociationIds() const{ return m_localGatewayRouteTableVpcAssociationIds; }

    /**
     * <p>The IDs of the associations.</p>
     */
    inline bool LocalGatewayRouteTableVpcAssociationIdsHasBeenSet() const { return m_localGatewayRouteTableVpcAssociationIdsHasBeenSet; }

    /**
     * <p>The IDs of the associations.</p>
     */
    inline void SetLocalGatewayRouteTableVpcAssociationIds(const Aws::Vector<Aws::String>& value) { m_localGatewayRouteTableVpcAssociationIdsHasBeenSet = true; m_localGatewayRouteTableVpcAssociationIds = value; }

    /**
     * <p>The IDs of the associations.</p>
     */
    inline void SetLocalGatewayRouteTableVpcAssociationIds(Aws::Vector<Aws::String>&& value) { m_localGatewayRouteTableVpcAssociationIdsHasBeenSet = true; m_localGatewayRouteTableVpcAssociationIds = std::move(value); }

    /**
     * <p>The IDs of the associations.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithLocalGatewayRouteTableVpcAssociationIds(const Aws::Vector<Aws::String>& value) { SetLocalGatewayRouteTableVpcAssociationIds(value); return *this;}

    /**
     * <p>The IDs of the associations.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithLocalGatewayRouteTableVpcAssociationIds(Aws::Vector<Aws::String>&& value) { SetLocalGatewayRouteTableVpcAssociationIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the associations.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& AddLocalGatewayRouteTableVpcAssociationIds(const Aws::String& value) { m_localGatewayRouteTableVpcAssociationIdsHasBeenSet = true; m_localGatewayRouteTableVpcAssociationIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the associations.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& AddLocalGatewayRouteTableVpcAssociationIds(Aws::String&& value) { m_localGatewayRouteTableVpcAssociationIdsHasBeenSet = true; m_localGatewayRouteTableVpcAssociationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the associations.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& AddLocalGatewayRouteTableVpcAssociationIds(const char* value) { m_localGatewayRouteTableVpcAssociationIdsHasBeenSet = true; m_localGatewayRouteTableVpcAssociationIds.push_back(value); return *this; }


    /**
     * <p>One or more filters.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_localGatewayRouteTableVpcAssociationIds;
    bool m_localGatewayRouteTableVpcAssociationIdsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
