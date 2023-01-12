/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spawn.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:05:55 by aptive            #+#    #+#             */
/*   Updated: 2023/01/12 02:33:10 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPWAN_HPP
# define SPWAN_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <time.h>


template <typename T>
class Array
{
	public:

	// --------------------------------- CONSTRUCTOR --------------------------------
		Array( void ) : _array(NULL), _size(0){}
		Array( unsigned int size) : _array(new T[size]), _size(size) {}
		Array(Array const & src) : _array(new T[src._size]), _size(src._size)
		{
			for (unsigned int i; i < src._size; i++)
				_array[i] = src._array[i];
		}

		Array &	operator=( const Array & rhs )
		{
			if ( this != &rhs )
			{
				_array = new T(rhs._size);
				this->_size = rhs._size;
				for (unsigned int i; i < rhs._size; i++)
					_array[i] = rhs._array[i];
			}
			return *this;
		}

	// --------------------------------- OVERLOAD -----------------------------------
		T &	operator[]( unsigned int index)
		{
			if (index >= this->size())
				throw Array::OutIndex();

			return this->_array[index];
		}

	// --------------------------------- DESTRUCTOR ---------------------------------
		~Array(){ delete[] this->_array;}

	// --------------------------------- METHODS -----------------------------------
		unsigned int	size( void ){ return this->_size; }

	// --------------------------------- EXPTION ------------------------------------
		class OutIndex : public std::exception
		{const char* what() const throw(){ return ("error : index out of bounds"); }};

	private:
		T * 			_array;
		unsigned int	_size;

};



#endif /* ******************************************************** SPWAN_HPP */
