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


#ifndef KIM_LENGTH_UNIT_HPP_
#define KIM_LENGTH_UNIT_HPP_

#include <string>

namespace KIM
{

class LengthUnit
{
 public:
  int lengthUnitID;

  LengthUnit();
  LengthUnit(int const id);
  bool operator==(LengthUnit const & rhs) const;
  bool operator!=(LengthUnit const & rhs) const;
  std::string String() const;
};

namespace LENGTH_UNIT
{
extern LengthUnit const unused;
extern LengthUnit const A;
extern LengthUnit const Bohr;
extern LengthUnit const cm;
extern LengthUnit const m;
extern LengthUnit const nm;
}  // namespace LENGTH_UNIT

}  // namespace KIM


namespace std
{
template<>
struct hash<KIM::LengthUnit const>
{
  size_t operator()(KIM::LengthUnit const & lengthUnit) const
  {
    return lengthUnit.lengthUnitID;
  }
};
}  // namespace std
#endif  // KIM_LENGTH_UNIT_HPP_
