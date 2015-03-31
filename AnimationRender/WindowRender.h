#pragma once
#include "stdafx.h"

using namespace std;
using namespace ShapeLibrary;

namespace WindowRender
{
	class WindowsRender
	{
	public:
		WindowsRender(IWindowAPI& _window);
		void render();
		void attach(Shape& _shape);
		void putOnTop(Shape& _p);

	private:
		IWindowAPI* windowAPI;
		vector<Shape*> shapes;
	};


}
