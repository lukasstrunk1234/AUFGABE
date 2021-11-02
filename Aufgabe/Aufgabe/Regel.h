#pragma once
#include "Controller.h"

class Regel : public Controller
{
public:
	/// <summary>
	/// Standard-Konstruktor
	/// </summary>
	Regel();
	/// <summary>
	/// Konstruktor
	/// </summary>
	/// <param name="p_regel">Die anzuwendene Regel</param>
	Regel(const bool p_regel);

	/// <summary>
	/// Destruktor
	/// </summary>
	virtual ~Regel();

	virtual void checkRegel(Bestellung& p_bestellung) override;

	/// <summary>
	/// Liefert die Regel
	/// </summary>
	bool regel() const;

private:
	bool m_regel;
};

