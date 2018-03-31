#include "GraphicsFunction\/Graphics.h"

Graphics& Graphics::GetInstans()
{
	static Graphics instans;
	return instans;
}