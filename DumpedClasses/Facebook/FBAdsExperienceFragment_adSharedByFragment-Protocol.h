//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBFragmentModelProtocol-Protocol.h"

@class FBGraphQLConsistency, FBGraphQLServiceToken, NSObject, NSString;
@protocol FBAdsExperienceFragment_adSharedByFragmentBuilder, FBAdsExperienceFragment_adSharedBy_profilePictureFragment, OS_dispatch_queue;

@protocol FBAdsExperienceFragment_adSharedByFragment <FBFragmentModelProtocol>
- (id <FBAdsExperienceFragment_adSharedByFragmentBuilder>)updateBuilder;
- (id <FBAdsExperienceFragment_adSharedByFragmentBuilder>)copyBuilder;
- (FBGraphQLServiceToken *)subscribeWithConsistency:(FBGraphQLConsistency *)arg1 updateCallback:(void (^)(id <FBAdsExperienceFragment_adSharedByFragment>, id <FBGraphQLServiceStatus>))arg2 failureCallback:(void (^)(NSError *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (id <FBAdsExperienceFragment_adSharedBy_profilePictureFragment>)profilePicture;
- (NSString *)name;
- (NSString *)graphQLID;
@end
