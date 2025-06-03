#include "MainForm.h"

using namespace SecurityGUIApp;

[STAThreadAttribute]
int main() {
	MainForm^ mainForm = gcnew MainForm();
	Application::Run(mainForm);
	return 0;
}
