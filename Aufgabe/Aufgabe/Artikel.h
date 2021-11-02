#pragma once

#include<string>

class Artikel
{

public:
	/// <summary>
	/// Standard-Konstruktor
	/// </summary>
	Artikel();
	/// <summary>
	/// Konstruktor
	/// </summary>
	/// <param name="p_id">Die Objekt-ID (hier: einfach gehalten)</param>
	/// <param name="p_name">Der Artikelname</param>
	/// <param name="p_preis">Der Artikelpreis</param>
	Artikel(const int p_id, const std::string& p_name, const double p_preis);

	/// <summary>
	/// Destruktor
	/// </summary>
	virtual ~Artikel();

	/// <summary>
	/// Liefert die Artikel-ID
	/// </summary>
	/// <returns></returns>
	int id() const;
	/// <summary>
	/// Liefert den Artikelnamen
	/// </summary>
	/// <returns></returns>
	std::string name() const;
	/// <summary>
	/// Liefert den Artikelpreis
	/// </summary>
	/// <returns></returns>
	double preis() const;

private:

	int m_id;
	std::string m_name;
	double m_preis;
};

