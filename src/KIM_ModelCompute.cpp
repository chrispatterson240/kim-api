//
// CDDL HEADER START
//
// The contents of this file are subject to the terms of the Common Development
// and Distribution License Version 1.0 (the "License").
//
// You can obtain a copy of the license at
// http://www.opensource.org/licenses/CDDL-1.0.  See the License for the
// specific language governing permissions and limitations under the License.
//
// When distributing Covered Code, include this CDDL HEADER in each file and
// include the License file in a prominent location with the name LICENSE.CDDL.
// If applicable, add the following below this CDDL HEADER, with the fields
// enclosed by brackets "[]" replaced with your own identifying information:
//
// Portions Copyright (c) [yyyy] [name of copyright owner]. All rights reserved.
//
// CDDL HEADER END
//

//
// Copyright (c) 2016--2017, Regents of the University of Minnesota.
// All rights reserved.
//
// Contributors:
//    Ryan S. Elliott
//

//
// Release: This file is part of the kim-api.git repository.
//

#ifndef KIM_LOG_VERBOSITY_HPP_
#include "KIM_LogVerbosity.hpp"
#endif

#ifndef KIM_LOG_HPP_
#include "KIM_Log.hpp"
#endif

#ifndef KIM_ARGUMENT_NAME_HPP_
#include "KIM_ArgumentName.hpp"
#endif

#ifndef KIM_CALLBACK_NAME_HPP_
#include "KIM_CallbackName.hpp"
#endif

#ifndef KIM_MODEL_COMPUTE_HPP_
#include "KIM_ModelCompute.hpp"
#endif

#ifndef KIM_MODEL_IMPLEMENTATION_HPP_
#include "KIM_ModelImplementation.hpp"
#endif

#define CONVERT_POINTER ModelImplementation *pImpl      \
  = reinterpret_cast<ModelImplementation *>(pimpl)

namespace KIM
{

int ModelCompute::GetNeighborList(int const neighborListIndex,
                                  int const particleNumber,
                                  int * const numberOfNeighbors,
                                  int const ** const neighborsOfParticle)
    const
{
  CONVERT_POINTER;

  return pImpl->GetNeighborList(neighborListIndex, particleNumber,
                                numberOfNeighbors, neighborsOfParticle);
}

int ModelCompute::ProcessDEDrTerm(double const de, double const r,
                                  double const * const dx,
                                  int const i, int const j) const
{
  CONVERT_POINTER;

  return pImpl->ProcessDEDrTerm(de, r, dx, i, j);
}

int ModelCompute::ProcessD2EDr2Term(double const de, double const * const r,
                                    double const * const dx,
                                    int const * const i, int const * const j)
    const
{
  CONVERT_POINTER;

  return pImpl->ProcessD2EDr2Term(de, r, dx, i, j);
}

int ModelCompute::GetArgumentPointer(ArgumentName const argumentName,
                          int const ** const ptr) const
{
  CONVERT_POINTER;

  return pImpl->GetArgumentPointer(argumentName, ptr);
}

int ModelCompute::GetArgumentPointer(ArgumentName const argumentName,
                                     int ** const ptr) const
{
  CONVERT_POINTER;

  return pImpl->GetArgumentPointer(argumentName, ptr);
}

int ModelCompute::GetArgumentPointer(ArgumentName const argumentName,
                                     double ** const ptr) const
{
  CONVERT_POINTER;

  return pImpl->GetArgumentPointer(argumentName, ptr);
}

int ModelCompute::GetArgumentPointer(ArgumentName const argumentName,
                                     double const ** const ptr) const
{
  CONVERT_POINTER;

  return pImpl->GetArgumentPointer(argumentName, ptr);
}

int ModelCompute::IsCallbackPresent(CallbackName const callbackName,
                                    int * const present) const
{
  CONVERT_POINTER;

  return pImpl->IsCallbackPresent(callbackName, present);
}

void ModelCompute::GetModelBufferPointer(void ** const ptr) const
{
  CONVERT_POINTER;

  pImpl->GetModelBufferPointer(ptr);
}

void ModelCompute::Log(LogVerbosity const logVerbosity,
                       std::string const & message,
                       int const lineNumber,
                       std::string const & fileName) const
{
  CONVERT_POINTER;

  pImpl->Log(logVerbosity, message, lineNumber, fileName);
}

std::string ModelCompute::String() const
{
  CONVERT_POINTER;

  return pImpl->String();
}

ModelCompute::ModelCompute() : pimpl(0)
{
}

ModelCompute::~ModelCompute()
{
}

}  // namespace KIM
