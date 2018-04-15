#pragma once
#include <memory>
#include "ObjectFuction\object.h"


class LogoAnime
{
public:
	LogoAnime() {};

	float time;//数値を減らす時間を指定する変数
	float alpha_blend_speed;//α値を保存する変数。

	float anime_x, speed_x;//x方向へのアニメーション数値の保存,1フレームの移動量

	//画像データもろもろ
	/*
	std::unique_ptr<Object> logo_D;
	std::unique_ptr<Object> logo_d;
	std::unique_ptr<Object> logo_i, logo_i_2;
	std::unique_ptr<Object> logo_l;
	std::unique_ptr<Object> logo_o;
	std::unique_ptr<Object> logo_p;
	*/

	Object big_logo;

	void setup(float pos_x = 0.0f, float pos_y = 0.0f, float alpha_speed = 255);
	void update(float next_time_count = 0);
	void draw(bool wire = false);
};