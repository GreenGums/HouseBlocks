#pragma once
#include "cocos2d.h"
USING_NS_CC;

/************************************************************************/
/* ���������������                                                                     */
/************************************************************************/
class SceneMediator 
{
protected:
	static SceneMediator* _instance;
public:
	void gotoStartScene();
	void gotoPlayScene();
	static SceneMediator* getInstance();
};