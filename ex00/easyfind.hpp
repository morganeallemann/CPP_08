/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/17 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include<vector>
#include<iostream>
#include<string>
#include<algorithm>

class   NotFound : public std::exception{
    public:
            virtual char const	*what(void) const throw(){
                return ("Number not found on the container");
            }
};

template <typename T>
int easyfind(T &container, int occurence){
    typename T::iterator it = std::find(container.begin(), container.end(), occurence);
    if (it != container.end())
        return (*it);
    else
        throw NotFound();
}

#endif 