//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBMTBCardCfg, TBMTBDefaultCfg;

@interface TBMTBBaseModule : TBJSONModel
{
    _Bool _recommend;
    NSString *_moduleId;
    NSString *_moduleName;
    NSString *_moduleType;
    NSString *_title;
    NSString *_titleIcon;
    NSString *_subTitle;
    NSString *_subTitleIcon;
    NSString *_moreUrl;
    TBMTBCardCfg *_cardCfg;
    TBMTBDefaultCfg *_defaultCardInfo;
    NSString *_recommendPic;
    NSString *_recommendReason;
    NSString *_desc;
    NSString *_checkSum;
    NSString *_scm;
    NSString *_spm;
    NSString *_controlName;
}

@property(nonatomic) _Bool recommend; // @synthesize recommend=_recommend;
@property(retain, nonatomic) NSString *controlName; // @synthesize controlName=_controlName;
@property(retain, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSString *checkSum; // @synthesize checkSum=_checkSum;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) NSString *recommendPic; // @synthesize recommendPic=_recommendPic;
@property(retain, nonatomic) TBMTBDefaultCfg *defaultCardInfo; // @synthesize defaultCardInfo=_defaultCardInfo;
@property(retain, nonatomic) TBMTBCardCfg *cardCfg; // @synthesize cardCfg=_cardCfg;
@property(retain, nonatomic) NSString *moreUrl; // @synthesize moreUrl=_moreUrl;
@property(retain, nonatomic) NSString *subTitleIcon; // @synthesize subTitleIcon=_subTitleIcon;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *moduleType; // @synthesize moduleType=_moduleType;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(retain, nonatomic) NSString *moduleId; // @synthesize moduleId=_moduleId;
- (void).cxx_destruct;

@end
