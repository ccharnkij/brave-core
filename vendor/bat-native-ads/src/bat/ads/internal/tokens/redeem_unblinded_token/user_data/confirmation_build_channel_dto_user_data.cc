/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "bat/ads/internal/tokens/redeem_unblinded_token/user_data/confirmation_build_channel_dto_user_data_builder.h"

#include "bat/ads/ads.h"

namespace ads {
namespace dto {
namespace user_data {

base::DictionaryValue GetBuildChannel() {
  base::Value user_data(base::Value::Type::DICTIONARY);

  DCHECK(!g_build_channel.name.empty());
  user_data.SetKey("buildChannel", base::Value(g_build_channel.name));

  return user_data;
}

}  // namespace build_channel
}  // namespace user_data
}  // namespace dto
}  // namespace ads
