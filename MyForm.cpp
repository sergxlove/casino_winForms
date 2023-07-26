#include "MyForm.h"
#include "MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array <String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	casinowinForms::MyForm form;
	casinowinForms::MyForm1 form1;
	Application::Run(% form);
}
