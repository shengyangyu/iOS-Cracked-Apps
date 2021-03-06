//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, QQARConfigModel;

@interface QQARActivityConfigManager : NSObject
{
    NSObject<OS_dispatch_queue> *_arActivityConfigQueue;
    QQARConfigModel *_configModel;
    QQARConfigModel *_currentConfigModel;
}

+ (id)GetInstance;
@property(retain, nonatomic) QQARConfigModel *currentConfigModel; // @synthesize currentConfigModel=_currentConfigModel;
@property(retain) QQARConfigModel *configModel; // @synthesize configModel=_configModel;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *arActivityConfigQueue; // @synthesize arActivityConfigQueue=_arActivityConfigQueue;
- (void).cxx_destruct;
- (void)resetConfigManager;
- (void)onLoginOutNotify:(id)arg1;
- (void)onLoginSuccess;
- (void)onConfigDataReadyNotify:(id)arg1;
- (void)clearARConfig;
- (void)clearAllLocalData;
- (void)updateModel:(id)arg1;
- (id)mergeModelArr:(id)arg1;
- (void)removeDuplicateModel:(id)arg1;
- (id)sharedFormatter;
- (void)localModel;
- (id)getScanResourceDir;
- (id)getConfigDir:(_Bool)arg1;
- (void)saveConfigModelToLocal:(id)arg1;
- (id)flagPath;
- (id)xmlPath;
- (id)configPath;
- (id)init;
- (void)dealloc;

@end

