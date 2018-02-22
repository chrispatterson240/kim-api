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
// Copyright (c) 2016--2018, Regents of the University of Minnesota.
// All rights reserved.
//
// Contributors:
//    Ryan S. Elliott
//

//
// Release: This file is part of the kim-api.git repository.
//


#ifndef KIM_TIME_UNIT_HPP_
#define KIM_TIME_UNIT_HPP_

#include <string>

namespace KIM
{

class TimeUnit
{
 public:
  int timeUnitID;

  TimeUnit();
  TimeUnit(int const id);
  TimeUnit(std::string const & str);
  bool operator==(TimeUnit const & rhs) const;
  bool operator!=(TimeUnit const & rhs) const;
  std::string const & String() const;
};

namespace TIME_UNIT
{
extern TimeUnit const unused;
extern TimeUnit const fs;
extern TimeUnit const ps;
extern TimeUnit const ns;
extern TimeUnit const s;

void GetNumberOfTimeUnits(int * const numberOfTimeUnits);
int GetTimeUnit(int const index, TimeUnit * const timeUnit);

struct Comparator
{
  bool operator()(TimeUnit const & a, TimeUnit const & b) const
  {
    return a.timeUnitID < b.timeUnitID;
  }
};
}  // namespace TIME_UNIT
}  // namespace KIM
#endif  // KIM_TIME_UNIT_HPP_
