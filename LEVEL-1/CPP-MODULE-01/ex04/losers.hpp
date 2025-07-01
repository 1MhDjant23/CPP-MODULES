/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   losers.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:21:44 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/07 09:53:58 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LOSERS_HPP
#define	LOSERS_HPP

#include <iostream>
#include <fstream>

void	search_and_replace( std::ifstream& inFile, const std::string& filename, 
	const std::string& strToFind, const std::string& strToReplace );

#endif