//---------------------------------------------------------------------------//
// Copyright (c) 2018-2020 Nil Foundation AG
// Copyright (c) 2018-2020 Mikhail Komarov <nemo@nil.foundation>
//
// Distributed under the Boost Software License, Version 1.0
// See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt
//---------------------------------------------------------------------------//

#ifndef CRYPTO3_PASSHASH_STATE_HPP
#define CRYPTO3_PASSHASH_STATE_HPP

#include <boost/accumulators/framework/accumulator_set.hpp>
#include <boost/accumulators/framework/features.hpp>

#include <nil/crypto3/passhash/accumulators/passhash.hpp>

namespace nil {
    namespace crypto3 {
        namespace passhash {
            /*!
             * @brief
             * @tparam Passhash
             * @ingroup passhash
             */
            template<typename Passhash>
            using accumulator_set = boost::accumulators::accumulator_set<
                static_digest<Passhash::input_block_bits>,
                boost::accumulators::features<accumulators::tag::passhash<Passhash>>>;
        }    // namespace passhash
    }        // namespace crypto3
}    // namespace nil

#endif    // CRYPTO3_MAC_STATE_HPP