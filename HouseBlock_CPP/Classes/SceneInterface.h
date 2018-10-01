#pragma once
#include "commonInterface.h"

class SceneInterface: public commonInterface
{
public:
	/************************************************************************/
	/* ��ʼ��UI                                                                     */
	/************************************************************************/
	virtual bool initUI() { return true; };
	/************************************************************************/
	/* ��ʼ�������¼�                                                                     */
	/************************************************************************/
	virtual bool initTouchEvent() { return true; };
};
class StartSceneInterface: public SceneInterface
{

};
class PlaySceneInterface : public SceneInterface
{

};