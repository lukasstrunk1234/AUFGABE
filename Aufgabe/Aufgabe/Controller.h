#pragma once

#include "Bestellung.h"

class Controller
{
public:
	/// <summary>
	/// Standard-Konstruktor
	/// </summary>
	Controller() = default;
	/// <summary>
	/// Prüft eine Bestellung, ob sie freigegeben werden kann
	/// </summary>
	/// <param name="p_bestellung"></param>
	virtual void checkRegel(Bestellung& p_bestellung) = 0;
};

