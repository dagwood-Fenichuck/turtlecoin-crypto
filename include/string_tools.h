// Copyright (c) 2020, The TurtleCoin Developers
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef CRYPTO_STRING_TOOLS_H
#define CRYPTO_STRING_TOOLS_H

#include "json_helper.h"

#include <algorithm>
#include <cstdint>
#include <exception>
#include <iostream>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

#define DEBUG_PRINT(val) std::cout << #val << ": " << val << std::endl

namespace Crypto::StringTools
{
    /**
     * Converts a hexadecimal string to a vector of uint8_t
     * @param text
     * @return
     */
    std::vector<uint8_t> from_hex(const std::string &text);

    /**
     * Converts a void pointer of the given length into a hexadecimal string
     * @param data
     * @param length
     * @return
     */
    std::string to_hex(const void *data, size_t length);
} // namespace Crypto::StringTools

#endif // CRYPTO_STRING_TOOLS_H