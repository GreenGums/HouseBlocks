#include "commonInterface.h"

class PhysicInterface: public commonInterface
{
public:
	/************************************************************************/
	/* ��ʼ������                                                                     */
	/************************************************************************/
	virtual bool initPhysicsBody() { return true; };

};