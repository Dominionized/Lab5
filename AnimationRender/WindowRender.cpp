#include  "stdafx.h"

using namespace WindowRender;
using namespace ShapeLibrary;

WindowsRender::WindowsRender(IWindowAPI& _window)
:windowAPI(&_window)
{
	
}

void WindowsRender::render()
{
	for (unsigned int i = 0; i < shapes.size(); i++)
	{
		shapes[i]->draw();
	}

	windowAPI->getEvent();
	windowAPI->hasEvent();
	windowAPI->clearScreen();
	windowAPI->displayScreen();
	windowAPI->wait(10);
}

void WindowsRender::attach(Shape& _shape)
{
	shapes.push_back(&_shape);
}

void WindowsRender::putOnTop(Shape& _p)
{
	shapes.push_back(&_p);
	for (unsigned int i = 0; i < shapes.size(); i++)
	{
		if ((shapes[i] == &_p) && i != shapes.size() - 1)
		{
			shapes.erase(shapes.begin() + i);
		}
	}
}