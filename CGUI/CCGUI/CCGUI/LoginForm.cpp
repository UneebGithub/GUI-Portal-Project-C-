#include "LoginForm.h"
#include <Windows.h>
using namespace CCGUI; // This is your project name

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew LoginForm());
	return 0;

}

