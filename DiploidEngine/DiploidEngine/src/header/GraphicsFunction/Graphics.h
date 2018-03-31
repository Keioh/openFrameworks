//�O���t�B�N�X�Ǘ��N���X
#pragma once
#include "ofMain.h"
#include "GraphicsFunction/GraphicsLoader.h"

class Graphics
{
private:
	Graphics() = default;
	~Graphics() = default;

public:

	//�R�s�[�R���X�g���N�^�֌W
	Graphics(const Graphics&) = delete;
	Graphics& operator=(const Graphics&) = delete;
	
	//���[�u�R���X�g���N�^�֌W
	Graphics(Graphics&&) = delete;
	Graphics& operator=(Graphics&&) = delete;

	static Graphics& GetInstans();

};