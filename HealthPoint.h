#pragma once
#include"cocos2d.h"
USING_NS_CC;
class HealthPoint :public cocos2d::Sprite
{
public:
	int point;
	static HealthPoint* create(int hp);
	bool init();

private:

};