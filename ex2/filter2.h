/**
 * filter2.h : The header file that defines the derived class for the 2nd filter
 */

#ifndef _FILTER2_H
#define _FILTER2_H

#include "ReadFilteredWords.h"

class filter2 : public ReadFilteredWords {
    public:
        bool filter(string word) override;
};

#endif
