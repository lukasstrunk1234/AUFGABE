#pragma once
#include<list>
#include "Artikel.h"

class Bestellung
{
public:

	/// <summary>
	/// Standard-Konstruktur
	/// </summary>
	Bestellung();
	/// <summary>
	/// Konstruktor
	/// </summary>
	/// <param name="p_id">die ID der Bestellung (Der Einfachheit halber wird sie statisch übergeben)</param>
	/// <param name="p_artikelListe">Die Liste der Artikel einer Bestellung (Könnte hier auch generisch sein.)</param>
	Bestellung(const int p_id, const std::list<Artikel>& p_artikelListe);

	/// <summary>
	/// Destruktor
	/// </summary>
	virtual ~Bestellung();

	/// <summary>
	/// Liefert die ID des Objekts
	/// </summary>
	int id() const;

	/// <summary>
	/// Liefert den Wert der Bestellung in Euro. Entsteht aus der Summe der Preise der Artikel
	/// </summary>
	double wertEuro() const;


	/// <summary>
	/// Liste der Artikel der Bestellung
	/// </summary>
	std::list<Artikel> artikelListe() const;

	/// <summary>
	/// Setzt die Bestellung als freigegeben
	/// </summary>
	void istFreigabe(const bool p_val);

	/// <summary>
	/// Liefert true, wenn die Bestellung freigegeben ist, false sonst
	/// </summary>
	bool istFreigabe() const;
private:

	/// <summary>
	/// Berechnet den Wert der Bestellung
	/// </summary>
	void calcWertEuro();

private:
	int m_id;
	double m_wertEuro;
	std::list<Artikel> m_artikelListe;
	bool m_istFreigabe;
};

