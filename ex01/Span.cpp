/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/17 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxNb(10){
    std::cout << "A default's new Span has been created with a limit of " << this->_maxNb << " numbers" << std::endl;
}

Span::Span(int nb) : _maxNb(nb){
    std::cout << "A surcharged's new Span has been created with a limit of " << this->_maxNb << " numbers" << std::endl;
}

Span::Span(Span const &cpy){
    *this = cpy;
    std::cout << "A copy's Span has been created with a limit of " << this->_maxNb << " numbers" << std::endl;
}

Span::~Span(){
    std::cout << "Span was destroyed" << std::endl;
}

Span    &Span::operator=(Span const &rhs){
    this->_maxNb = rhs._maxNb;
    this->_array = rhs._array;

    return (*this);
}

void    Span::addNumber(int nb){
    if (static_cast<int>(this->_array.size()) < this->_maxNb)
        this->_array.push_back(nb);
    else
        throw ExceptionFull();
}

int     Span::shortestSpan(void){
    std::vector<int>::iterator  it;
    std::vector<int>::iterator  it2;
    int lowDif = 2147483647;
    int dif = 0;

    if (this->_array.size() == 1 || this->_array.empty()){
        return (0);
    }
    for (it = this->_array.begin(); it != this->_array.end(); it++){
        for (it2 = it + 1; it2 != this->_array.end(); it2++){
            if (*it > *it2)
                dif = *it - *it2;
            else
                dif = *it2 - *it;
            if (dif < lowDif)
                lowDif = dif;
        }
    }
    return (lowDif);
}

int     Span::longestSpan(void){
    std::vector<int>::iterator  it;
    std::vector<int>::iterator  it2;
    int maxDif = 0;
    int dif = 0;

    for (it = this->_array.begin(); it != this->_array.end(); it++){
        for (it2 = it + 1; it2 != this->_array.end(); it2++){
            if (*it > *it2)
                dif = *it - *it2;
            else
                dif = *it2 - *it;
            if (dif > maxDif)
                maxDif = dif;
        }
    }
    return (maxDif);    
}

int generateRandomNumber() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    return std::rand();
}

void    Span::completeArray(int nb){
    if (nb <= (this->_maxNb - static_cast<int>(this->_array.size()))){
        while (nb > 0){
            this->_array.push_back(generateRandomNumber() % nb);
            nb--;
        }
    }
    else
        throw ExceptionFull();
}