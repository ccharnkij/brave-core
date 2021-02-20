/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "bat/ads/internal/tokens/redeem_unblinded_token/user_data/confirmation_conversion_dto_user_data.h"

namespace ads {
namespace dto {
namespace user_data {

base::DictionaryValue GetConversion(
    const ConversionQueueItemList& conversion_queue_items) {
  base::Value user_data(base::Value::Type::DICTIONARY);

  return user_data;
}

}  // namespace user_data
}  // namespace dto
}  // namespace ads
