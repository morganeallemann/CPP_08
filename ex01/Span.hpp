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

class Span{
    private:
        int _maxNb;
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
        int     shortestSpan(void);
        int     longestSpan(void);

};

#endif
