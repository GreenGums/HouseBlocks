#include "commonInterface.h"

class PhysicInterface: public commonInterface
{
public:
	virtual ~PhysicInterface() {};
	/************************************************************************/
	/* ��ʼ������                                                                     */
	/************************************************************************/
	virtual bool initPhysicsBody() = 0;

};