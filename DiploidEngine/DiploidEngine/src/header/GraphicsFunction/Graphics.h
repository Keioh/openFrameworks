//グラフィクス管理クラス
#pragma once
#include "ofMain.h"
#include "GraphicsFunction/GraphicsLoader.h"


class Graphics
{
private:

public:
	list<GraphicsLoader> graphics_loader_list;//グラフィクスを読み込むクラス
	//list<GraphicsLoader>::iterator loader_iterator = graphics_loader_list.begin();//イテレーターを取得
	GraphicsLoader graphics_loader;

	void GraphicsLoaderPush();
};