#ifndef COMPONENTAIHPP
#define COMPONENTAIHPP

#include <common.hpp>

#include <component.hpp>
#include <timer.hpp>
#include <geometry.hpp>

class CompAI;
using aiFunc=function<void(CompAI*,float)>;

class CompAI : public Component{
	//private members
public:
	//public members
	enum state{iddling,looking,walking,attacking,count};
	aiFunc foo;

	vector<int> states;
	vector<Timer> timers;
	vector<Vec2> targetPOS;
	vector<GameObject*> targetGO;

	CompAI(aiFunc func,int stCounts=0,int timCount=0,int posCount=0,int goCount=0);
	~CompAI();

	void Update(float time);
	void Render();
	Component::type GetType()const;
};

#endif//COMPONENTAIHPP
