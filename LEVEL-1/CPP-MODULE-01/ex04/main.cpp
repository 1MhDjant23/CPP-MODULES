/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:16:39 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 20:52:34 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "losers.hpp"

int main( int argc, char **argv )
{
	if ( argc > 4 ) {
		std::cerr << "too many argument" << std::endl;
		exit(EXIT_FAILURE);
	}
	if ( argc < 4 ) {
		std::cerr << "Usage: `./losers filename strToFind strToReplace`" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ifstream	inFile( argv[1] );
	if ( !inFile.is_open() ) {
		std::cerr << argv[1] << " :(Error opening file)"  << std::endl;
		exit(EXIT_FAILURE);
	}
	search_and_replace( inFile, argv[1], argv[2], argv[3] );
	return 0;
}
