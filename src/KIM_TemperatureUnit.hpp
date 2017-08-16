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


#ifndef KIM_TEMPERATURE_UNIT_HPP_
#define KIM_TEMPERATURE_UNIT_HPP_

#include <string>

namespace KIM
{

class TemperatureUnit
{
 public:
  int temperatureUnitID;

  TemperatureUnit();
  TemperatureUnit(int const id);
  bool operator==(TemperatureUnit const & rhs) const;
  bool operator!=(TemperatureUnit const & rhs) const;
  std::string String() const;
};

namespace TEMPERATURE_UNIT
{
extern TemperatureUnit const unused;
extern TemperatureUnit const K;
}  // namespace TEMPERATURE_UNIT

}  // namespace KIM


namespace std
{
template<>
struct hash<KIM::TemperatureUnit const>
{
  size_t operator()(KIM::TemperatureUnit const & temperatureUnit) const
  {
    return temperatureUnit.temperatureUnitID;
  }
};
}  // namespace std
#endif  // KIM_TEMPERATURE_UNIT_HPP_
