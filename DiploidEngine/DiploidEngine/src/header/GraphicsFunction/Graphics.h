//グラフィクス管理クラス
#pragma once
#include "ofMain.h"
#include "GraphicsFunction/GraphicsLoader.h"


class Graphics
{
private:

public:
	GraphicsLoader graphics_loader;//グラフィクスを読み込むクラス
	int index;//グラフィクスがいくつロードされているか確認変数(-1でエラー、0で画像ロードなし、1以上あれば画像ロードあり)
};