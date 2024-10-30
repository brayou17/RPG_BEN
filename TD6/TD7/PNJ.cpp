#include "PNJ.h"

PNJ::PNJ()
{
	Vector2f tmp = { 500.f,100.f};

	pos = tmp;
}

Vector2f PNJ::getPos()
{
	return pos;
}
