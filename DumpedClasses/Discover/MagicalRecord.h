//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MagicalRecord : NSObject
{
}

+ (void)initialize;
+ (id)defaultStoreName;
+ (void)setDefaultModelFromClass:(Class)arg1;
+ (void)setDefaultModelNamed:(id)arg1;
+ (id)currentStack;
+ (void)cleanUpStack;
+ (void)cleanUp;
+ (unsigned long long)version;
+ (void)saveWithBlockAndWait:(CDUnknownBlockType)arg1;
+ (void)saveWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)saveWithBlock:(CDUnknownBlockType)arg1;
+ (void)saveInBackgroundUsingCurrentContextWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
+ (void)saveInBackgroundWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)saveInBackgroundWithBlock:(CDUnknownBlockType)arg1;
+ (void)saveUsingCurrentThreadContextWithBlockAndWait:(CDUnknownBlockType)arg1;
+ (void)saveUsingCurrentThreadContextWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)setErrorHandlerTarget:(id)arg1 action:(SEL)arg2;
+ (SEL)errorHandlerAction;
+ (id)errorHandlerTarget;
+ (void)handleErrors:(id)arg1;
+ (void)defaultErrorHandler:(id)arg1;
+ (void)cleanUpErrorHanding;
+ (void)setupCoreDataStackWithiCloudContainer:(id)arg1 contentNameKey:(id)arg2 localStoreAtURL:(id)arg3 cloudStorePathComponent:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)setupCoreDataStackWithiCloudContainer:(id)arg1 contentNameKey:(id)arg2 localStoreAtURL:(id)arg3 cloudStorePathComponent:(id)arg4;
+ (void)setupCoreDataStackWithiCloudContainer:(id)arg1 localStoreAtURL:(id)arg2;
+ (void)setupCoreDataStackWithiCloudContainer:(id)arg1 contentNameKey:(id)arg2 localStoreNamed:(id)arg3 cloudStorePathComponent:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)setupCoreDataStackWithiCloudContainer:(id)arg1 contentNameKey:(id)arg2 localStoreNamed:(id)arg3 cloudStorePathComponent:(id)arg4;
+ (void)setupCoreDataStackWithiCloudContainer:(id)arg1 localStoreNamed:(id)arg2;
+ (void)setICloudEnabled:(_Bool)arg1;
+ (_Bool)isICloudEnabled;
+ (void)setLoggingLevel:(unsigned long long)arg1;
+ (unsigned long long)loggingLevel;
+ (void)setShouldDeleteStoreOnModelMismatch:(_Bool)arg1;
+ (_Bool)shouldDeleteStoreOnModelMismatch;
+ (void)setShouldAutoCreateDefaultPersistentStoreCoordinator:(_Bool)arg1;
+ (_Bool)shouldAutoCreateDefaultPersistentStoreCoordinator;
+ (void)setShouldAutoCreateManagedObjectModel:(_Bool)arg1;
+ (_Bool)shouldAutoCreateManagedObjectModel;
+ (void)setupCoreDataStackWithInMemoryStore;
+ (void)setupCoreDataStackWithAutoMigratingSqliteStoreAtURL:(id)arg1;
+ (void)setupCoreDataStackWithStoreAtURL:(id)arg1;
+ (void)setupCoreDataStackWithAutoMigratingSqliteStoreNamed:(id)arg1;
+ (void)setupCoreDataStackWithStoreNamed:(id)arg1;
+ (void)setupAutoMigratingCoreDataStack;
+ (void)setupCoreDataStack;
+ (void)updateResolveMethodsForClass:(Class)arg1;
+ (_Bool)MR_resolveInstanceMethod:(SEL)arg1;
+ (_Bool)MR_resolveClassMethod:(SEL)arg1;
+ (id)methodNameBlacklist;
+ (id)classesToSwizzle;
+ (void)enableShorthandMethods;
- (void)handleErrors:(id)arg1;

@end

