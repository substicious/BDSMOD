#include "Ԥ����ͷ.h"
#include "bdxcore.h"
#include "BDS����.hpp"
using namespace std;

THook(bool,
	"?explode@Level@@QEAAXAEAVBlockSource@@PEAVActor@@AEBVVec3@@M_N3M3@Z",
	void* _this, BlockSource* bs, Actor* a3, const Vec3 pos, float a5, bool a6, bool a7) {
	if (a6 != 0) { return original(_this, bs, a3, pos, a5, a6, a7); }
	else {
		const int id = a3->gettypeid();
		//cout << id << endl;
		if (id == 2849) {
			std::cout << u8"������λ��(" << (int)pos.x << "," << (int)pos.y << "," << (int)pos.z << ")" << u8"�ı�ը�ƻ�~" << std::endl;
			return original(_this, bs, a3, pos, a5, a6, 0);
		}
		else {
			return original(_this, bs, a3, pos, a5, a6, a7);
		}
	}
}
void init() {
	std::cout<<u8"[���]�������²����װ��~"<<std::endl;
}

void exit() {
	// �˴���д���ж��ʱ�Ĳ���
}

