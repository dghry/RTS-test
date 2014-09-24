#pragma once
#include"cocos2d.h"
USING_NS_CC;
class Base
{
	CC_SYNTHESIZE(int, _health, Health);
	CC_SYNTHESIZE(int, _defence, Defence);
	CC_SYNTHESIZE(int, _iSpeed, iSpeed);
	CC_SYNTHESIZE(int, _length, Length);
	CC_SYNTHESIZE(int, _width, Width);
	CC_SYNTHESIZE(int, _height, Height);
	CC_SYNTHESIZE(int, _attck, Attck);
	CC_SYNTHESIZE(int, _atDistance,AtDistance);
public:
	Base();
private:
	

};