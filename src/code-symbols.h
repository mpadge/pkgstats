#pragma once

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
#include <stdio.h>
#include <vector>
#include <numeric> // std::accumulate
#include <assert.h>
#include <cctype> // isspace

namespace codesymbols {

std::vector <size_t> get_sympos (const std::string &s, const std::string &sym);

std::vector <size_t> rm_syms_in_quotes (std::vector <size_t> &sympos,
        std::vector <size_t> qpos,
        const bool in_quote);

std::vector <size_t> get_quote_pos (const std::string &s);

void balance_block_cmts (std::vector <size_t> &opens,
        std::vector <size_t> &closes);

} // end namespace whitespace