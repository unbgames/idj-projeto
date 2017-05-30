#ifndef GAMEOBJECTHPP
#define GAMEOBJECTHPP

#include <common.hpp>

#include <component.hpp>
#include <geometry.hpp>

class GameObject{
public:
	bitset<Component::type::t_count> hasComponent;
	array<Component*,Component::type::t_count> components;

	vector<GameObject*> attachedObjs;
	GameObject* attachedTo=nullptr;

	Rect box;
	float rotation;
	bool anchored=false;
	bool dead=false;

	GameObject();
	GameObject(const Rect &rec,float r=0.0f, bool a=false);
	~GameObject();

	void Update(float time);
	void Render();
	void AddComponent(Component* component);
	void ReplaceComponent(Component* component);
	void RemoveComponent(Component::type t);

	void AttachObj(GameObject* obj);
	void AttachTo(GameObject* obj);
	void UnAttachObj(GameObject* obj);
	void UnAttach();

	bool IsDead()const;
};

#endif//GAMEOBJECTHPP
