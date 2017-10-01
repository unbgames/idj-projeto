/*
*  File: componentMemory.cpp
*
*  Description:  Implements componentMemory class
*/

#include <componentMemory.hpp>

/*!
  * @fn CompMemory::CompMemory()
	* @brief No params constructor method
  * @param No params
*/

CompMemory::CompMemory() {

}

/*!
  * @fn CompMemory::~CompMemory()
	* @brief No params destructor method
  * @param No params
*/

CompMemory::~CompMemory() {

}

/*!
  * @fn CompMemory::Update(float time)
	* @brief Updates memory according to the time param
  * @param No params
*/

void CompMemory::Update(float time) {
	//! TODO: Refactorate repetition strucuture
	for(auto& t:timers)t.second.Update(time);
}

/*!
  * @fn CompMemory::Render()
	* @brief Renders memory, obviously not necessary
  * @param No params
*/

void CompMemory::Render() {

}

/*!
  * @fn Component::type CompMemory::GetType()
  * @param No params
	* @return Component::type::t_memory
	* @brief Obtain the component type
*/

Component::type CompMemory::GetType() const {
	return Component::type::t_memory;
}
