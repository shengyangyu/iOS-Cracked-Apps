//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PopLayerAdapterFacade : NSObject
{
    id <WebViewFactory> _webViewFactory;
    id <ConfigCenterProtocalForPoplayer> _configCenterInstance;
    id <NavProtocalForPoplayer> _navInstance;
    id <UIButtonProtocalForPoplayer> _uiInstance;
    id <TimerProtocolForPoplayer> _timerInstance;
    id <PopCenterProtocolForPoplayer> _popCenterInstance;
}

+ (void)startPopLayer:(id)arg1 url:(id)arg2;
+ (void)startPopLayer:(id)arg1;
+ (void)windVaneClearCountFunction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)windVaneOpenConsoleFunction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)windVaneEnableMockFunction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)registerGlobalJS;
+ (id)sharedInstance;
+ (void)initPopLayer:(id)arg1 ui:(id)arg2 timer:(id)arg3 configcenter:(id)arg4 webviewFactory:(id)arg5;
@property(retain, nonatomic) id <PopCenterProtocolForPoplayer> popCenterInstance; // @synthesize popCenterInstance=_popCenterInstance;
@property(retain, nonatomic) id <TimerProtocolForPoplayer> timerInstance; // @synthesize timerInstance=_timerInstance;
@property(retain, nonatomic) id <UIButtonProtocalForPoplayer> uiInstance; // @synthesize uiInstance=_uiInstance;
@property(retain, nonatomic) id <NavProtocalForPoplayer> navInstance; // @synthesize navInstance=_navInstance;
@property(retain, nonatomic) id <ConfigCenterProtocalForPoplayer> configCenterInstance; // @synthesize configCenterInstance=_configCenterInstance;
@property(retain, nonatomic) id <WebViewFactory> webViewFactory; // @synthesize webViewFactory=_webViewFactory;
- (void).cxx_destruct;
- (id)urlEncode:(id)arg1;

@end
