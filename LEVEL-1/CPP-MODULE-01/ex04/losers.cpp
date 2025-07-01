/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   losers.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 19:44:25 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 20:50:21 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "losers.hpp"

void	search_and_replace( std::ifstream& inFile, const std::string& filename,
	const std::string& strToFind, const std::string& strToReplace )
{
	std::string		_outFile;
	std::string		_readLine;
	std::string		_temp;

	_outFile = filename + ".replace";
	std::ofstream	outStream( _outFile );
	if ( !outStream.is_open() ) {
		std::cout << _outFile << " : (error opening file)" << std::endl;
		exit(EXIT_FAILURE);
	}
	while ( std::getline( inFile,  _readLine ) )
	{
		std::string		_newLine;

		for ( std::size_t i = 0; i < _readLine.length(); i++ )
		{
			_temp = _readLine.substr( i, strToFind.length() );
			if ( _temp == strToFind )
			{
				_newLine += strToReplace;
				i += strToFind.length() - 1;
			}
			else
				_newLine += _readLine[i];
		}
		outStream << _newLine << std::endl;
	}
}
