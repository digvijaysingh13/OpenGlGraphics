#pragma once
#include <string>
#include <iostream>
#include <SDL.h>
#undef main
class Display
{
public:
	Display(int w, int h,const std::string & title);
	~Display();
	void Update();
	bool IsClosed() { return m_isClosed; }
	void Clear(float r, float g, float b, float a);
private :
	Display(const Display& other) {};
	void operator=(const Display & other) {}
	SDL_Window* m_window = nullptr;
	SDL_GLContext m_glContext = nullptr;
	bool  m_isClosed= false;
};

