#pragma once

#include "header\define.h"
#include "header\impact.h"
#include "ofMain.h"


class Object : public ofBaseApp
{
public:
	ofImage graphics;//�摜���������߂̕ϐ���錾
	Impact object_impact;//�����蔻��������Ȃ��ׂ̕ϐ��錾
	float position_x, position_y;//�|�W�V����

	void setup(float pos_x, float pos_y, char* path, float radius = -1);//����������(x�̏����ʒu,y�̏����ʒu,�摜�ւ̑��΃p�X,�~�̏ꍇ�͔��a�����)
	void update() {};//�A�j���[�V���������B
	void draw(bool wire = false);//�`��

	void mouseMovedUpdate(int x, int y);//ofApp::mouseMoved(int x,int y)�̒��ɋL�q����B�}�E�X�𓮂������Ƃ��Ƀq�b�g����������鏈���B
	void mousePressedUpdate(int x, int y, int button, int kind_button);//ofApp::mousePressedUpdate(int x, int y, int button)�̒��ɋL�q����B�}�E�X���q�b�g���Ă���Ƃ��Ƀ{�^�����������Ƃ��̏����B
	void mouseReleasedUpdate(int x, int y, int button, int kind_button);//ofApp::mouseReleasedUpdate(int x, int y, int button)�̒��ɋL�q����B�}�E�X���q�b�g���Ă���Ƃ��Ƀ{�^���𗣂����Ƃ��̏����B

};