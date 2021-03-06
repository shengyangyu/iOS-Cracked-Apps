//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, UIImage;

@interface FBFriendCenterMenuItemDescription : NSObject
{
    unsigned long long _menuItem;
    NSString *_title;
    UIImage *_image;
    UIImage *_pressedImage;
    NSNumber *_badgeNumber;
    NSString *_accessibilityIdentifier;
}

@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(copy, nonatomic) NSNumber *badgeNumber; // @synthesize badgeNumber=_badgeNumber;
@property(retain, nonatomic) UIImage *pressedImage; // @synthesize pressedImage=_pressedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long menuItem; // @synthesize menuItem=_menuItem;
- (void).cxx_destruct;

@end

