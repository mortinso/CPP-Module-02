/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:17:54 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/18 15:56:40 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int	numberValue;
		static const int	fractionalBits = 8;

	public:
		Fixed( void );
		Fixed( const Fixed &src );
		~Fixed( void );
		Fixed & operator = ( const Fixed &src );

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif