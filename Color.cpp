
#include "Color.h"

Color::Color( double red, double green, double blue ) :
    m_red( red ),
    m_green( green ),
    m_blue( blue )
{

}

void Color::setRed( double red )
{
    m_red = red;
}

void Color::setGreen( double green )
{
    m_green = green;
}

void Color::setBlue( double blue )
{
    m_blue = blue;
}

double Color::getRed() const
{
    return m_red;
}

double Color::getGreen() const
{
    return m_green;
}

double Color::getBlue() const
{
    return m_blue;
}
