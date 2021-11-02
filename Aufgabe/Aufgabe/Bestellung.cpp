#include "Bestellung.h"

Bestellung::Bestellung()
	: m_id(0)
	, m_wertEuro(0)
	, m_artikelListe()
	,m_istFreigabe(false)
{}

Bestellung::Bestellung(const int p_id, const std::list<Artikel>& p_artikelListe)
	: m_id(p_id)
	, m_wertEuro(0)
	, m_artikelListe(p_artikelListe)
	, m_istFreigabe(false)
{
	calcWertEuro();
	
}

Bestellung::~Bestellung()
{}

int Bestellung::id() const
{
	return m_id;
}

double Bestellung::wertEuro() const
{
	return m_wertEuro;
}

std::list<Artikel> Bestellung::artikelListe() const
{
	return m_artikelListe;
}

void Bestellung::istFreigabe(const bool p_val)
{
	m_istFreigabe = p_val;
}

bool Bestellung::istFreigabe() const
{
	return m_istFreigabe;
}

void Bestellung::calcWertEuro()
{
	for (const auto& l_artikel : artikelListe()) {
		m_wertEuro += l_artikel.preis();
	}
}
