﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/model/Group.h>
#include <utility>

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
namespace IdentityStore
{
namespace Model
{
  class AWS_IDENTITYSTORE_API ListGroupsResult
  {
  public:
    ListGroupsResult();
    ListGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>Group</code> objects in the identity store.</p>
     */
    inline const Aws::Vector<Group>& GetGroups() const{ return m_groups; }

    /**
     * <p>A list of <code>Group</code> objects in the identity store.</p>
     */
    inline void SetGroups(const Aws::Vector<Group>& value) { m_groups = value; }

    /**
     * <p>A list of <code>Group</code> objects in the identity store.</p>
     */
    inline void SetGroups(Aws::Vector<Group>&& value) { m_groups = std::move(value); }

    /**
     * <p>A list of <code>Group</code> objects in the identity store.</p>
     */
    inline ListGroupsResult& WithGroups(const Aws::Vector<Group>& value) { SetGroups(value); return *this;}

    /**
     * <p>A list of <code>Group</code> objects in the identity store.</p>
     */
    inline ListGroupsResult& WithGroups(Aws::Vector<Group>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Group</code> objects in the identity store.</p>
     */
    inline ListGroupsResult& AddGroups(const Group& value) { m_groups.push_back(value); return *this; }

    /**
     * <p>A list of <code>Group</code> objects in the identity store.</p>
     */
    inline ListGroupsResult& AddGroups(Group&& value) { m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> APIs. This value is generated by the identity store
     * service and is returned in the API response if the total results are more than
     * the size of one page, and when this token is used in the API request to search
     * for the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> APIs. This value is generated by the identity store
     * service and is returned in the API response if the total results are more than
     * the size of one page, and when this token is used in the API request to search
     * for the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> APIs. This value is generated by the identity store
     * service and is returned in the API response if the total results are more than
     * the size of one page, and when this token is used in the API request to search
     * for the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> APIs. This value is generated by the identity store
     * service and is returned in the API response if the total results are more than
     * the size of one page, and when this token is used in the API request to search
     * for the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> APIs. This value is generated by the identity store
     * service and is returned in the API response if the total results are more than
     * the size of one page, and when this token is used in the API request to search
     * for the next page.</p>
     */
    inline ListGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> APIs. This value is generated by the identity store
     * service and is returned in the API response if the total results are more than
     * the size of one page, and when this token is used in the API request to search
     * for the next page.</p>
     */
    inline ListGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> APIs. This value is generated by the identity store
     * service and is returned in the API response if the total results are more than
     * the size of one page, and when this token is used in the API request to search
     * for the next page.</p>
     */
    inline ListGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Group> m_groups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
