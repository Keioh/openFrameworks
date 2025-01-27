#include "GraphicsFunction/GraphicsLoader.h"

bool GraphicsLoader::load(const char* path)
{
	image_flag = image.load(path);//画像を読み込む

	width = image.getWidth();//幅を取得
	height = image.getHeight();;//高さを取得

	return image_flag;
}