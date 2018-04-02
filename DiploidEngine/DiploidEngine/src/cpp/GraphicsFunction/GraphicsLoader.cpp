#include "GraphicsFunction/GraphicsLoader.h"

bool GraphicsLoader::load(const char* path)
{
	image_flag = image.load(path);//‰æ‘œ‚ğ“Ç‚İ‚Ş

	width = image.getWidth();//•‚ğæ“¾
	height = image.getHeight();;//‚‚³‚ğæ“¾

	return image_flag;
}