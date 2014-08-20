#ifndef COLOR_H
#define COLOR_H

class Color
{
public:
    Color( double red = 0.0,
           double green = 0.0,
           double blue = 0.0 );

    void setRed( double red );
    void setGreen( double green );
    void setBlue( double blue );
    double getRed() const;
    double getGreen() const;
    double getBlue() const;

private:
    double m_red;
    double m_green;
    double m_blue;
};

#endif // COLOR_H
