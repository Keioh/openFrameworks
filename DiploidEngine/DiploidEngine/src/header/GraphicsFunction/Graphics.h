//�O���t�B�N�X�Ǘ��N���X
#pragma once
#include "ofMain.h"
#include "GraphicsFunction/GraphicsLoader.h"


class Graphics
{
private:

public:
	list<GraphicsLoader> graphics_loader_list;//�O���t�B�N�X��ǂݍ��ރN���X
	//list<GraphicsLoader>::iterator loader_iterator = graphics_loader_list.begin();//�C�e���[�^�[���擾
	GraphicsLoader graphics_loader;

	void GraphicsLoaderPush();
};