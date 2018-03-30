#pragma once
#include "ofMain.h"

class GraphicsLoader
{
private:

public:
	GraphicsLoader();

	ofImage image;
	float width;
	float height;

	bool load(const char* path);

};