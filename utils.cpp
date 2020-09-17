//
// Created by eric on 16/09/2020.
//

#include <algorithm>
#include "utils.h"

bool utils::is_alpha(string &totest) {
    return std::all_of(std::begin(totest), std::end(totest),
                [](char c){ return std::isalpha(c); });
}
