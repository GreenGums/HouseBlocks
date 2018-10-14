#pragma once
#include "commonInterface.h"

class PhysicInterface: public commonInterface
{
public:
	virtual ~PhysicInterface() {};
	/************************************************************************/
	/* ��ʼ������                                                                     */
	/************************************************************************/
	virtual bool initPhysicsBody() = 0;
	/************************************************************************/
	/* ��ʼ����ײ�¼�                                                                     */
	/************************************************************************/
	virtual bool initCollisionEvent() = 0;
};