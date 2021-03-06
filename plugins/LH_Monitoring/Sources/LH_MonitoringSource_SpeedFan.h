/*
  Copyright (c) 2009-2016 Johan Lindh <johan@linkdata.se>

  This file is part of LCDHost.

  LCDHost is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  LCDHost is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with LCDHost.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef LH_MONITORINGSOURCE_SPEEDFAN_H
#define LH_MONITORINGSOURCE_SPEEDFAN_H

#include "LH_MonitoringSource.h"


class LH_MonitoringSource_SpeedFan : public LH_MonitoringSource
{
    void updateFromArray(QString type, int count, const qreal *valueSet, qreal modifier, SensorDefinition def);
    void updateFromArray(QString type, int count, const uint  *valueSet, qreal modifier, SensorDefinition def);
    void updateFromArray(QString type, int count, const int   *valueSet, qreal modifier, SensorDefinition def);

    SensorDefinition temp_;
    SensorDefinition fans_;
    SensorDefinition volt_;

protected:
    bool doUpdate();

public:
    LH_MonitoringSource_SpeedFan(LH_QtObject *parent);
};

#endif // LH_MONITORINGSOURCE_SPEEDFAN_H
