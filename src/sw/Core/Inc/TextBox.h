#ifndef _TEXTBOX_H_
#define _TEXTBOX_H_

#include "Utils.h"
#include <string>

class TextBox
{
	private:
		std::string m_text;
		Color m_color;
		int X;
		int Y;
	
	public:
		TextBox(std::string text, Color color, int x, int y);
		void render();
		void processInput();
}	;

#endif
