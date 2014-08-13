#pragma once

#include <raindance/Core/Headers.hh>

class Window
{
public:
	Window(const char* title, const int width, const int height)
	{
		m_Title = std::string(title);
		m_Width = width;
		m_Height = height;
		m_FullScreen = false;

        glutInitWindowSize(m_Width, m_Height);
        glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
        glutCreateWindow(m_Title.c_str());
	}

	void fullscreen()
	{
        m_FullScreen = !m_FullScreen;

        if (m_FullScreen)
            glutFullScreen();
        else
        {
            glutReshapeWindow(m_Width, m_Height);
            glutPositionWindow(0, 0);
        }
	}

	inline const std::string& title() { return m_Title; }
    inline int width() { return m_Width; }
    inline int height() { return m_Height; }

private:
	std::string m_Title;
	int m_Width;
	int m_Height;
	bool m_FullScreen;
};

