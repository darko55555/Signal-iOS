//
//  Copyright (c) 2019 Open Whisper Systems. All rights reserved.
//

#import "SSKJobRecord.h"

NS_ASSUME_NONNULL_BEGIN

@class SDSAnyReadTransaction;
@class TSOutgoingMessage;

@interface SSKMessageSenderJobRecord : SSKJobRecord

@property (nonatomic, readonly, nullable) NSString *messageId;
@property (nonatomic, readonly, nullable) NSString *threadId;
@property (nonatomic, readonly, nullable) TSOutgoingMessage *invisibleMessage;
@property (nonatomic, readonly) BOOL removeMessageAfterSending;

- (nullable instancetype)initWithMessage:(TSOutgoingMessage *)message
               removeMessageAfterSending:(BOOL)removeMessageAfterSending
                                   label:(NSString *)label
                             transaction:(SDSAnyReadTransaction *)transaction
                                   error:(NSError **)outError NS_DESIGNATED_INITIALIZER;

- (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithLabel:(nullable NSString *)label NS_UNAVAILABLE;

// --- CODE GENERATION MARKER

// This snippet is generated by /Scripts/sds_codegen/sds_generate.py. Do not manually edit it, instead run
// `sds_codegen.sh`.

// clang-format off

- (instancetype)initWithUniqueId:(NSString *)uniqueId
                    failureCount:(NSUInteger)failureCount
                           label:(NSString *)label
                          sortId:(unsigned long long)sortId
                          status:(SSKJobRecordStatus)status
                invisibleMessage:(nullable TSOutgoingMessage *)invisibleMessage
                       messageId:(nullable NSString *)messageId
       removeMessageAfterSending:(BOOL)removeMessageAfterSending
                        threadId:(nullable NSString *)threadId
NS_SWIFT_NAME(init(uniqueId:failureCount:label:sortId:status:invisibleMessage:messageId:removeMessageAfterSending:threadId:));

// clang-format on

// --- CODE GENERATION MARKER

@end

NS_ASSUME_NONNULL_END
