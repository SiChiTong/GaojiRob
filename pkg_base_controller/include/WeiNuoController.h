#ifndef WEINUOCONTROLLER_H
#define WEINUOCONTROLLER_H

#include "BaseController.h"

class WeiNuoController:public BaseController{
private:
	
public:
	WeiNuoController();
	void onRecCmdVel(const geometry_msgs::Twist::ConstPtr& msg);
	void start();
};


#endif
