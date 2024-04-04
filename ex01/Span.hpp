/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/17 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

class Span{
    private:
        int _maxNb;
        std::vector<int> _array;
    
    public:
        /* CONSTRUCTOR */
        Span();
        Span(int nb);
        /* COPY CONSTRUCTOR */
        Span(Span const &cpy);
        /* DESTRUCTOR */
        ~Span();
        /* SURCHARGED OPERATOR */
        Span    &operator=(Span const &rhs);
        /* MEMBER FUNCTIONS */
        void    addNumber(int nb);
        void    completeArray(int nb);
        int     shortestSpan(void);
        int     longestSpan(void);
        /* EXCEPTIONS */
        class ExceptionFull : public std::exception{
            public :
                virtual char const	*what(void) const throw(){
                    return ("The arrray limit has been reached");
                }
        };
};

#endif
