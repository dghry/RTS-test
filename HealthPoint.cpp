#include"HealthPoint.h"
HealthPoint* HealthPoint::create(int hp)
{
	HealthPoint* healthPoint = new HealthPoint();
	healthPoint->point = hp;
	healthPoint->init();
	return healthPoint;
}
bool HealthPoint::init()
{
	bool bRet = false;
	do
	{
		//Ӧ�����ⲿ����frameCacheȻ����fram��ʼ��
		//	int type = this->getVo()->getNum();
		SpriteFrameCache* frameCache = SpriteFrameCache::sharedSpriteFrameCache();
		//		 SpriteFrame* frame = frameCache->spriteFrameByName( String::createWithFormat("road_%d.png",type)->getCString());
		SpriteFrame* frame = frameCache->spriteFrameByName("road.png");
		//	m_sprite =  Sprite::createWithSpriteFrame(frame);
		//		this->addChild(m_sprite);

		initWithSpriteFrame(frame);
		bRet = true;
	} while (0);
	return bRet;
}