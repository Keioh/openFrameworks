#include "GraphicsFunction/GraphicsLoader.h"

bool GraphicsLoader::load(const char* path)
{
	image_flag = image.load(path);//�摜��ǂݍ���

	width = image.getWidth();//�����擾
	height = image.getHeight();;//�������擾

	return image_flag;
}