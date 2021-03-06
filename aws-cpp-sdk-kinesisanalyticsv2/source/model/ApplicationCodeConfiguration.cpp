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

#include <aws/kinesisanalyticsv2/model/ApplicationCodeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

ApplicationCodeConfiguration::ApplicationCodeConfiguration() : 
    m_codeContentHasBeenSet(false),
    m_codeContentType(CodeContentType::NOT_SET),
    m_codeContentTypeHasBeenSet(false)
{
}

ApplicationCodeConfiguration::ApplicationCodeConfiguration(JsonView jsonValue) : 
    m_codeContentHasBeenSet(false),
    m_codeContentType(CodeContentType::NOT_SET),
    m_codeContentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationCodeConfiguration& ApplicationCodeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CodeContent"))
  {
    m_codeContent = jsonValue.GetObject("CodeContent");

    m_codeContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeContentType"))
  {
    m_codeContentType = CodeContentTypeMapper::GetCodeContentTypeForName(jsonValue.GetString("CodeContentType"));

    m_codeContentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationCodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_codeContentHasBeenSet)
  {
   payload.WithObject("CodeContent", m_codeContent.Jsonize());

  }

  if(m_codeContentTypeHasBeenSet)
  {
   payload.WithString("CodeContentType", CodeContentTypeMapper::GetNameForCodeContentType(m_codeContentType));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
