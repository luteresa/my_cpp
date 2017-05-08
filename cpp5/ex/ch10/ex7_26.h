//
//  ex7_26.h
//  Exercise 7.26
//
//  Created by pezy on 11/14/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//
//  @See ex7_21.h
//  @Add inline member function "Sales_data::avg_pric"

#ifndef CP5_ex7_26_h
#define CP5_ex7_26_h

#include <string>
#include <iostream>

class Sales_data {

public:
    Sales_data() = default;
    Sales_data(const std::string& s) : bookNo(s) {}
    Sales_data(const std::string& s, unsigned n, double p)
        : bookNo(s), units_sold(n), revenue(n * p)
    {
    }

    std::string isbn() const { return bookNo; };

private:
    inline double avg_price() const;

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

inline double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
}


#endif
