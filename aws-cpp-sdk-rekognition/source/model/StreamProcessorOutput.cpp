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

#include <aws/rekognition/model/StreamProcessorOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

StreamProcessorOutput::StreamProcessorOutput() : 
    m_kinesisDataStreamHasBeenSet(false)
{
}

StreamProcessorOutput::StreamProcessorOutput(JsonView jsonValue) : 
    m_kinesisDataStreamHasBeenSet(false)
{
  *this = jsonValue;
}

StreamProcessorOutput& StreamProcessorOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KinesisDataStream"))
  {
    m_kinesisDataStream = jsonValue.GetObject("KinesisDataStream");

    m_kinesisDataStreamHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamProcessorOutput::Jsonize() const
{
  JsonValue payload;

  if(m_kinesisDataStreamHasBeenSet)
  {
   payload.WithObject("KinesisDataStream", m_kinesisDataStream.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
