#pragma once
#include"cocos2d.h"
USING_NS_CC;
class ResourceModel
{
public:
	static ResourceModel * getInstance();
	~ResourceModel(void);
	bool preloadResources();
	bool dynamicLoad();
private:
	ResourceModel(void);

};

