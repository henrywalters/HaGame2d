#pragma once
#include "Component.h"
#include "UIComponent.h"
#include "TextRenderer.h"

class ButtonComponent : public UIComponent
{

public:
	
	RGB color = Color::white();
	

	ButtonComponent(float _width, float _height);
	~ButtonComponent();

	void onClick();
	void updateUI();
};
