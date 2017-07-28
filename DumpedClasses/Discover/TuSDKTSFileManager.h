//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TuSDKTSFileManager : NSObject
{
}

+ (id)md5File:(id)arg1;
+ (_Bool)movePath:(id)arg1 toPath:(id)arg2;
+ (void)deletePaths:(id)arg1;
+ (_Bool)deletePath:(id)arg1;
+ (id)createDir:(id)arg1 AtPath:(id)arg2;
+ (id)createDir:(id)arg1;
+ (_Bool)isArriveUpperLimitAtPaths:(id)arg1 WithUpperLimitByMByte:(unsigned long long)arg2;
+ (_Bool)isArriveUpperLimitAtPaths:(id)arg1 WithUpperLimitByKByte:(unsigned long long)arg2;
+ (_Bool)isArriveUpperLimitAtPaths:(id)arg1 WithUpperLimitByByte:(unsigned long long)arg2;
+ (unsigned long long)totalFilesSizeAtPath:(id)arg1;
+ (unsigned long long)fileSizeWithInDirectFolderAtPath:(id)arg1;
+ (_Bool)isExistDir:(id)arg1 AtPath:(id)arg2;
+ (_Bool)isExistFile:(id)arg1 AtPath:(id)arg2;
+ (_Bool)isExistDirAtPath:(id)arg1;
+ (_Bool)isExistFileAtPath:(id)arg1;
+ (_Bool)isFilePathExist:(id)arg1 isDir:(_Bool)arg2;
+ (id)pathInCacheWithDirPath:(id)arg1 filePath:(id)arg2;
+ (id)pathInLibraryWithDirPath:(id)arg1 filePath:(id)arg2;
+ (id)pathInDocumentsWithDirPath:(id)arg1 filePath:(id)arg2;
+ (id)filePathAtBasicPath:(id)arg1 WithFileName:(id)arg2;
+ (id)dirPathAtBasicPath:(id)arg1 WithDirName:(id)arg2;
+ (id)CachePath;
+ (id)LibraryPath;
+ (id)DocumentsPath;

@end

