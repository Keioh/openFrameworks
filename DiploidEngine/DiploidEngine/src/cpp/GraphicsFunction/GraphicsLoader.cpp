#include "GraphicsFunction/GraphicsLoader.h"

void GraphicsLoader::load(const char* path)
{
	image.load(path);//‰æ‘œ‚ğ“Ç‚İ‚Ş

	width = image.getWidth();//•‚ğæ“¾
	height = image.getHeight();;//‚‚³‚ğæ“¾
}