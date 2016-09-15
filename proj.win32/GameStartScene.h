#ifndef _GAME_START_SCENE_H
#define _GAME_START_SCENE_H
#include"cocos2d.h"
#include"GameCoverLayer.h"
#include"GameSignLayer.h"
#include"GameStageLayer.h"
USING_NS_CC;
// director 操控 scene scene操控layer layer上包含各种node对象
class GameStartScene :public Scene {
private:
	GameCoverLayer *_coverLayer;
public:
	bool init();
};
#endif