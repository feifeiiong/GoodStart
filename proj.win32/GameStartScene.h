#ifndef _GAME_START_SCENE_H
#define _GAME_START_SCENE_H
#include"cocos2d.h"
#include"GameCoverLayer.h"
#include"GameSignLayer.h"
#include"GameStageLayer.h"
USING_NS_CC;
// director �ٿ� scene scene�ٿ�layer layer�ϰ�������node����
class GameStartScene :public Scene {
private:
	GameCoverLayer *_coverLayer;
public:
	bool init();
};
#endif