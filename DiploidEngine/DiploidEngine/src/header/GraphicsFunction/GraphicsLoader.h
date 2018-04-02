#pragma once
#include "ofMain.h"

class GraphicsLoader
{
private:

public:
	GraphicsLoader() {}

	ofImage image;
	float width;
	float height;
	bool image_flag;

	bool load(const char* path);

};