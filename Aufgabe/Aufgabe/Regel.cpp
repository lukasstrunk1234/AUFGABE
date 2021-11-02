#include "Regel.h"

Regel::Regel()
	: m_regel()
{}

Regel::Regel(const bool p_regel)
	: m_regel(p_regel)
{}

Regel::~Regel()
{}

void Regel::checkRegel(Bestellung& p_bestellung)
{
	p_bestellung.istFreigabe(regel());
}

bool Regel::regel() const
{
	return m_regel;
}
