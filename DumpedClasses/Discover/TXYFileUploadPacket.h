//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXYFilePacket.h"

@interface TXYFileUploadPacket : TXYFilePacket
{
}

- (int)sliceSize;
- (id)packFileReqInfo;
- (void)setUploadControlReq:(struct FileControlReq *)arg1;
- (id)initWithTask:(id)arg1;

@end

