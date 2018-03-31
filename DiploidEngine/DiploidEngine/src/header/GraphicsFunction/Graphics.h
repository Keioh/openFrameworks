//グラフィクス管理クラス
#pragma once
#include "ofMain.h"
#include "GraphicsFunction/GraphicsLoader.h"

class Graphics
{
private:
	Graphics() = default;
	~Graphics() = default;

public:

	//コピーコンストラクタ関係
	Graphics(const Graphics&) = delete;
	Graphics& operator=(const Graphics&) = delete;
	
	//ムーブコンストラクタ関係
	Graphics(Graphics&&) = delete;
	Graphics& operator=(Graphics&&) = delete;

	static Graphics& GetInstans();

};