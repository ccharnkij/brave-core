/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BAT_ADS_INTERNAL_STATEMENT_STATEMENT_H_
#define BAT_ADS_INTERNAL_STATEMENT_STATEMENT_H_

#include <stdint.h>

namespace ads {

class AdsImpl;
struct StatementInfo;

class Statement {
 public:
  Statement(
    AdsImpl* ads);

  ~Statement();

  StatementInfo Get(
      const int64_t from_timestamp,
      const int64_t to_timestamp);

 private:
  AdsImpl* ads_;  // NOT OWNED
};

}  // namespace ads

#endif  // BAT_ADS_INTERNAL_STATEMENT_STATEMENT_H_
