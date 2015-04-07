#include  "stdafx.h"

using namespace WindowRender;
using namespace ShapeLibrary;

WindowsRender::WindowsRender(IWindowAPI& _window)
:windowAPI(&_window)
{
	
}

void WindowsRender::render()
{
	windowAPI->clearScreen();
	bool exit = false;
	while (!exit)
	{
		while (windowAPI->hasEvent())
		{
			if (windowAPI->getEvent().getEventType() == QUIT)
			{
				exit = true;
			}
		}
		for (unsigned int i = 0; i < shapes.size(); i++)
		{
			shapes[i]->draw();
		}
		windowAPI->displayScreen();
		windowAPI->wait(10);
	}

}

void WindowsRender::attach(Shape& _shape)
{
	shapes.push_back(&_shape);
}

void WindowsRender::putOnTop(Shape& _newTopShape)
{
	for (int i = 0; i < shapes.size(); i++)
	{
		if (&(*shapes[i]) == &(_newTopShape))
		{
			shapes.erase(shapes.begin() + i);
			return;
		}
	}
	shapes.push_back(&_newTopShape);
}