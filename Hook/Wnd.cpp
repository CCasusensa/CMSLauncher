#include "pch.h"
#include "Wnd.h"

namespace Wnd {
	void FixMinimizeButton(DWORD& dwStyle) {
		// CMS79-CMS84 don't show the minimize button when using window mode
		dwStyle |= WS_MINIMIZEBOX;
	}
}