#include "Artikel.h"

Artikel::Artikel()
    : m_id()
    , m_name()
    , m_preis()
{}

Artikel::Artikel(const int p_id, const std::string & p_name, const double p_preis)
    : m_id(p_id)
    , m_name(p_name)
    , m_preis(p_preis)
{}

Artikel::~Artikel()
{}

int Artikel::id() const
{
    return m_id;
}

std::string Artikel::name() const
{
    return m_name;
}

double Artikel::preis() const
{
    return m_preis;
}
