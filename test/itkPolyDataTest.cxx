/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#include "itkPolyData.h"

int itkPolyDataTest( int, char *[] )
{
  using PixelType = float;

  using PolyDataType = itk::PolyData< PixelType >;
  PolyDataType::Pointer polyData = PolyDataType::New();

  polyData->Print(std::cout);

  return EXIT_SUCCESS;
}
