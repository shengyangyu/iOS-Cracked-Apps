//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface WDWendaInvitedQuestionbrowRequestModel : TTRequestModel
{
    NSNumber<Optional> *_min_behot_time;
    NSNumber<Optional> *_max_behot_time;
    NSString<Optional> *_api_param;
}

@property(retain, nonatomic) NSString<Optional> *api_param; // @synthesize api_param=_api_param;
@property(retain, nonatomic) NSNumber<Optional> *max_behot_time; // @synthesize max_behot_time=_max_behot_time;
@property(retain, nonatomic) NSNumber<Optional> *min_behot_time; // @synthesize min_behot_time=_min_behot_time;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end
