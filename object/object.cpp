#include "header\object.h"


//����������(x�̏����ʒu,y�̏����ʒu,�摜�ւ̑��΃p�X,�~�̏ꍇ�͔��a�����)
void Object::setup(float pos_x, float pos_y, char* path, float radius)
{
	graphics.load(path);//�摜�ǂݍ���
	position_x = pos_x;
	position_y = pos_y;

	object_impact.setup(pos_x, pos_y, graphics.getWidth(), graphics.getHeight(), radius);//�����蔻��
}

//�`��
void Object::draw(bool wire)
{
	if (object_impact.hit == true)//�q�b�g���Ă���摜���������邭�\������
	{
		if (object_impact.click == true) //�q�b�g���N���b�N���Ă����炳��ɖ��邭�\������B
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
	if (wire == true)object_impact.draw();//�����蔻��̃��C���[��\��
}

//ofApp::mouseMoved(int x,int y)�̒��ɋL�q����B�}�E�X�𓮂������Ƃ��Ƀq�b�g����������鏈��
void Object::mouseMovedUpdate(int x, int y)
{
	object_impact.mouseMovedUpdate(x, y);//�����蔻��
}

//ofApp::mousePressedUpdate(int x, int y, int button)�̒��ɋL�q����B�}�E�X���q�b�g���Ă���Ƃ��Ƀ{�^�����������Ƃ��̏����B
void Object::mousePressedUpdate(int x, int y, int button, int kind_button)
{
	object_impact.mousePressedUpdate(x, y, button, kind_button);//�����蔻��
}

//ofApp::mouseReleasedUpdate(int x, int y, int button)�̒��ɋL�q����B�}�E�X���q�b�g���Ă���Ƃ��Ƀ{�^���𗣂����Ƃ��̏����B
void Object::mouseReleasedUpdate(int x, int y, int button, int kind_button)
{
	object_impact.mouseReleasedUpdate(x, y, button, kind_button);//�����蔻��
}