//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MQQSecretQuestionItem : NSObject
{
    long long _questionId;
    NSString *_questionStr;
    NSString *_answerStr;
}

@property(retain, nonatomic) NSString *answerStr; // @synthesize answerStr=_answerStr;
@property(retain, nonatomic) NSString *questionStr; // @synthesize questionStr=_questionStr;
@property(nonatomic) long long questionId; // @synthesize questionId=_questionId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
