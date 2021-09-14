/*
 * VehicleDeedTemplate.h
 *
 *  Created on: Oct 4, 2010
 *      Author: kyle
 */

#ifndef VEHICLEDEEDTEMPLATE_H_
#define VEHICLEDEEDTEMPLATE_H_

#include "templates/tangible/DeedTemplate.h"

class VehicleDeedTemplate : public DeedTemplate {
private:
	String controlDeviceObjectTemplate;
	int hitPoints;
	float vehicle_speed;
	float vehicle_acceleration;
	float vehicle_handling;

public:
	VehicleDeedTemplate() {

	}

	~VehicleDeedTemplate() {

	}

	void readObject(LuaObject* templateData) {
		DeedTemplate::readObject(templateData);

		controlDeviceObjectTemplate = templateData->getStringField("controlDeviceObjectTemplate");
		hitPoints = templateData->getStringField("hit_points");
		vehicle_speed = templateData->getStringField("vehicle_speed");
		vehicle_acceleration = templateData->getStringField("vehicle_acceleration");
		vehicle_handling = templateData->getStringField("vehicle_handling");
    }

	String getControlDeviceObjectTemplate()
	{
		return controlDeviceObjectTemplate;
	}
};


#endif /* VEHICLEDEEDTEMPLATE_H_ */
