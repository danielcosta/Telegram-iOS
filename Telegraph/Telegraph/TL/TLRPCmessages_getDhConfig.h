/*
 * This is the source code of Telegram for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import <Foundation/Foundation.h>

#import "TLObject.h"
#import "TLMetaRpc.h"

@class TLmessages_DhConfig;

@interface TLRPCmessages_getDhConfig : TLMetaRpc

@property (nonatomic) int32_t version;
@property (nonatomic) int32_t random_length;

- (Class)responseClass;

- (int)impliedResponseSignature;

@end

@interface TLRPCmessages_getDhConfig$messages_getDhConfig : TLRPCmessages_getDhConfig


@end

