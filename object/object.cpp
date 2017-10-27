#include "header\object.h"


//����������(x�̏����ʒu,y�̏����ʒu,�摜�ւ̑��΃p�X,�~�̏ꍇ�͔��a�����)
void Object::setup(float pos_x, float pos_y, char* path, float radius)
{
	graphics.load(path);//�摜�ǂݍ���
	position_x = graphics_position_x = pos_x;
	position_y = graphics_position_y = pos_y;
	
	Impact::setup(position_x, position_y, graphics.getWidth(), graphics.getHeight(), radius);//�����蔻��
}

//�A�j���[�V���������B
void Object::update(float moved_x, float moved_y, float rate)
{
	position_x = (moved_x * rate) + graphics_position_x;//�摜��x�����Ɉړ�������B
	position_y = (moved_y * rate) + graphics_position_y;//�摜��y�����Ɉړ�������B

	Impact::update((moved_x * rate) + graphics_position_x, (moved_y * rate) + graphics_position_y);//�q�b�g�{�b�N�X���ړ�������B
}

//�`��
void Object::draw(bool wire)
{

	if (Impact::hit == true)//�q�b�g���Ă���摜���������邭�\������
	{
		if (Impact::click == true) //�q�b�g���N���b�N���Ă����炳��ɖ��邭�\������B
		{ 
			ofSetColor(255, 255, 255); 
		}
		else
		{
			ofSetColor(235, 235, 235);
		}
	}
	else
	{
		ofSetColor(200, 200, 200);//�q�b�g���Ă��Ȃ�������Â��\������B
	}

	graphics.draw(position_x,position_y);//�摜�̕\��
	if (wire == true)Impact::draw();//�����蔻��̃��C���[��\��
}

//ofApp::mouseMoved(int x,int y)�̒��ɋL�q����B�}�E�X�𓮂������Ƃ��Ƀq�b�g����������鏈��
void Object::mouseMovedUpdate(int x, int y)
{
	Impact::mouseMovedUpdate(x, y);//�����蔻��
}

//ofApp::mousePressedUpdate(int x, int y, int button)�̒��ɋL�q����B�}�E�X���q�b�g���Ă���Ƃ��Ƀ{�^�����������Ƃ��̏����B
void Object::mousePressedUpdate(int x, int y, int button, int kind_button)
{
	Impact::mousePressedUpdate(x, y, button, kind_button);//�����蔻��
}

//ofApp::mouseReleasedUpdate(int x, int y, int button)�̒��ɋL�q����B�}�E�X���q�b�g���Ă���Ƃ��Ƀ{�^���𗣂����Ƃ��̏����B
void Object::mouseReleasedUpdate(int x, int y, int button, int kind_button)
{
	Impact::mouseReleasedUpdate(x, y, button, kind_button);//�����蔻��
}