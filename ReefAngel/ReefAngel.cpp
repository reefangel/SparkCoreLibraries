#include "ReefAngel.h"

void ReefAngelClass::Init()
{
	Serial.begin(57600);
}

ReefAngelClass ReefAngel = ReefAngelClass() ;
