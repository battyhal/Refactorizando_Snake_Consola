#pragma once

#include<memory>
#include<vector>

#include"Component.h"

class Actor
{
public:
	Actor():m_components(){}
	virtual ~Actor(){}

	virtual void Load()   = 0;
	virtual void Update() = 0;
	virtual void Render() = 0;

	template<typename T>
	std::shared_ptr<T>SetComponent()
	{
		std::shared_ptr<T>newComponent = std::make_shared<T>();
		for (std::shared_ptr<Component> &existingComponent : m_components)
		{
			if (std::dynamic_pointer_cast<T>existingComponent)
			{
				existingComponent = newComponent;
				return newComponent;
			}
		}
		m_components.push_back(newComponent);
		return newComponent;
	}

	template<typename T>
	std::shared_ptr<T>GetComponent()
	{
		for (std::shared_ptr<Component>existingComponent : m_components)
		{
			if (std::dynamic_pointer_cast<T>existingComponent)
			{
				return std::dynamic_pointer_cast<T>existingComponent;
			}
		}
		return nullptr;
	}

protected:
	std::vector<std::shared_ptr<Component>>m_components;

};




