#pragma once

#include "header\define.h"
#include "header\impact.h"


class Object : public Impact
{
public:
	ofImage graphics;//�摜���������߂̕ϐ���錾
	float position_x, position_y;//�|�W�V����
	float graphics_position_x, graphics_position_y;//�摜�|�W�V����

	void setup(float pos_x, float pos_y, char* path, float radius = -1);//����������(x�̏����ʒu,y�̏����ʒu,�摜�ւ̑��΃p�X,�~�̏ꍇ�͔��a�����)
	virtual void update(float moved_x, float moved_y, float rate = 1.0f);//�A�j���[�V���������B(i�t���[���̈ړ��ʂ�moved_x,moved_y�ɏ���rate�͈ړ��{��1.0f�ň�{)
	void draw(bool wire = false);//�`��

	void mouseMovedUpdate(int x, int y);//ofApp::mouseMoved(int x,int y)�̒��ɋL�q����B�}�E�X�𓮂������Ƃ��Ƀq�b�g����������鏈���B
	void mousePressedUpdate(int x, int y, int button, int kind_button);//ofApp::mousePressedUpdate(int x, int y, int button)�̒��ɋL�q����B�}�E�X���q�b�g���Ă���Ƃ��Ƀ{�^�����������Ƃ��̏����B
	void mouseReleasedUpdate(int x, int y, int button, int kind_button);//ofApp::mouseReleasedUpdate(int x, int y, int button)�̒��ɋL�q����B�}�E�X���q�b�g���Ă���Ƃ��Ƀ{�^���𗣂����Ƃ��̏����B

};