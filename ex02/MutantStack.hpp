/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/17 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

template <typename T>
class   MutantStack : public std::stack<T>{
    private:

    public:
        /* CONSTRUCTOR */
        MutantStack(){}
        /* COPY CONSTRUCTOR */
        MutantStack(MutantStack const &cpy){
            *this = cpy;
        }
        /* DESTRUCTOR */
        ~MutantStack(){}
        /* SURCHARGED OPERATOR */
        MutantStack &operator=(MutantStack const &rhs){
            std::stack<T>::operator=(rhs);
            return (*this);
        }
        /* MEMBER FUNCTIONS */
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator    begin(void){
            return (this->c.begin());
        }
        iterator    end(void){
            return (this->c.end());
        }
};

#endif
