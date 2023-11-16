// Copyright © 2017-2023 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "TestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWUltraProMainnetCoinType, TWCoinType) {
    const auto coin = TWCoinTypeUltraProMainnet;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto chainId = WRAPS(TWCoinTypeChainId(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0xba8914331d098b903162ab77d8538b8329a644076ee5aec501d1f43ebc8c1011"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0xCF6378414e6105B09c468aeEA36c7F2651fCF5E4"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "UPRO");
    assertStringsEqual(name, "UltraProMainnet");
    assertStringsEqual(symbol, "UPRO");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 18);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainUPRO);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0x0);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(chainId, "1");
    assertStringsEqual(txUrl, "https://ultraproscan.io/tx/0xba8914331d098b903162ab77d8538b8329a644076ee5aec501d1f43ebc8c1011");
    assertStringsEqual(accUrl, "https://ultraproscan.io/address/0xCF6378414e6105B09c468aeEA36c7F2651fCF5E4");
}
