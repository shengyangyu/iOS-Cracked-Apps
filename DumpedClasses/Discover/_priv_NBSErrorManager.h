//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLock.h"

@class NSMutableArray, NSMutableDictionary;

@interface _priv_NBSErrorManager : NSLock
{
    NSMutableDictionary *Errors;
    NSMutableArray *ErrList;
    _Bool busy;
    int busy_length;
    struct dispatch_queue_s *nbs_queue;
    NSMutableArray *_errorUploadBuf;
    NSMutableArray *_unsupportedErrors;
}

+ (id)sharedErrorManager;
@property(retain, nonatomic) NSMutableArray *unsupportedErrors; // @synthesize unsupportedErrors=_unsupportedErrors;
@property(retain, nonatomic) NSMutableArray *errorUploadBuf; // @synthesize errorUploadBuf=_errorUploadBuf;
@property(readonly) NSMutableArray *ErrList; // @synthesize ErrList;
@property(readonly) NSMutableDictionary *Errors; // @synthesize Errors;
- (void).cxx_destruct;
- (void)freeUploadErrorsBuf:(_Bool)arg1;
- (void)getErrorList_free:(_Bool)arg1;
- (void)addErrorsToUploadBuf:(id)arg1;
- (id)getUploadErrors;
- (id)getErrorList_busy;
- (int)getNumberWithHttpMethod:(id)arg1;
- (void)logUnsupportedURLError:(id)arg1;
- (void)logErrorWithError:(id)arg1 urlString:(id)arg2 stackTrace:(id)arg3;
- (void)logErrorWithHTTPError:(id)arg1 Response:(id)arg2 ResponseData:(id)arg3 withIP:(id)arg4 cdnAssosiateInfo:(id)arg5;
- (void)logErrorWithError:(id)arg1 Request:(id)arg2 withIP:(id)arg3 cdnAssosiateInfo:(id)arg4;
- (void)logErrorWithException:(id)arg1 Request:(id)arg2;
- (_Bool)ignoreErrorByCode:(int)arg1 request:(id)arg2;
- (_Bool)ignoreErrorByCode:(int)arg1 url:(id)arg2;
- (id)addErrToListForKey:(id)arg1;
- (id)getParamStrFromRequest:(id)arg1 Response:(id)arg2 ResponseData:(id)arg3 Exception:(id)arg4;
- (_Bool)findAndIncrease:(id)arg1;
- (id)getKeyFromURI:(id)arg1 urlParams:(id)arg2 statusCode:(int)arg3 httpMethod:(id)arg4;
- (void)dealloc;
- (id)init;
- (void)handleMemoryWarning;
- (void)clearAll;
- (void)clearTo:(unsigned long long)arg1;
- (void)innerClear:(unsigned long long)arg1;

@end

