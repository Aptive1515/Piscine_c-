/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:56:27 by aptive            #+#    #+#             */
/*   Updated: 2022/11/09 18:15:20 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Fixed.class.hpp"

Fixed::Fixed( void )
{
	// std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::Fixed( Fixed const & src)
{
	// std::cout << "Copy constructor called" << std::endl;

	*this = src;
}

Fixed::~Fixed( void )
{
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;

	return this->_rawBits;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;

	this->_rawBits = rhs.getRawBits();
	return *this;
}

void	Fixed::setRawBits( int const raw )
{
	this->_rawBits = raw;
}


Fixed::Fixed( int const nb )
{
	// std::cout << "Int constructor called" << std::endl;
	this->_rawBits = (nb << _bits);
}
Fixed::Fixed( float const f_nb )
{
	// std::cout << "Float constructor called" << std::endl;
	this->_rawBits = int(roundf(f_nb * (1 << _bits)));
}

float	Fixed::toFloat( void ) const
{
	return float(this->_rawBits) / (1 << _bits);
}

int		Fixed::toInt( void ) const
{
	return this->_rawBits >> _bits;
	return 0;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

bool	Fixed::operator>(Fixed const & rhs)
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs)
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs)
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs)
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs)
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs)
{
	return (this->getRawBits() != rhs.getRawBits());
}


Fixed Fixed::operator+(Fixed const & rhs)
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs)
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	return (this->toFloat() / rhs.toFloat());
}

Fixed &	Fixed::operator++( void )
{
	this->_rawBits++;
	return *this;
}

Fixed &	Fixed::operator--( void )
{
	this->_rawBits--;
	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return b;
	return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return b;
	return a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a._rawBits > b._rawBits)
		return b;
	return a;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a._rawBits < b._rawBits)
		return b;
	return a;
}
