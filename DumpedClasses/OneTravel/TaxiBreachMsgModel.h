//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiBaseModel.h"

@class NSString<Optional>;

@interface TaxiBreachMsgModel : TaxiBaseModel
{
    NSString<Optional> *_title;
    NSString<Optional> *_detail;
    NSString<Optional> *_confirm_btn;
    NSString<Optional> *_cancel_btn;
}

@property(copy, nonatomic) NSString<Optional> *cancel_btn; // @synthesize cancel_btn=_cancel_btn;
@property(copy, nonatomic) NSString<Optional> *confirm_btn; // @synthesize confirm_btn=_confirm_btn;
@property(copy, nonatomic) NSString<Optional> *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
