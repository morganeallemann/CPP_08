/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/17 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>

int main(){

try{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
catch (std::exception &e){
    std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;
}
try{
    Span sp2 = Span(10000);
    sp2.completeArray(10000);

    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
}
catch (std::exception &e){
    std::cout << e.what() << std::endl;
}
try{
    Span sp = Span(4);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
}
catch (std::exception &e){
    std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;
}
try{
    Span sp2 = Span(100);
    sp2.completeArray(50);
    sp2.completeArray(51);
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
}
catch (std::exception &e){
    std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;
}

return (0);
}