//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "RowGeneralSecurityView.h"

@class SMIMESecurityProgressView, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITextView;

@interface RowSMIMESecurityView : RowGeneralSecurityView
{
    UILabel *_message;
    UIButton *_decryptMsg;
    UIButton *_moreDetails;
    UIImageView *_securityIcon2;
    UIImageView *_securityIconSmimeDisabled;
    UITextView *_securityInfoSmimeDisabled;
    UIActivityIndicatorView *_activityIndicator;
    SMIMESecurityProgressView *_progressView;
    float _decryptMsgDefaultY;
    float _moreDetailsDefaultY;
    id <SmimeEmailDisplayProtocol> _emailViewHandle;
}

@property(nonatomic) id <SmimeEmailDisplayProtocol> emailViewHandle; // @synthesize emailViewHandle=_emailViewHandle;
@property(readonly, nonatomic) UITextView *securityInfoSmimeDisabled; // @synthesize securityInfoSmimeDisabled=_securityInfoSmimeDisabled;
@property(readonly, nonatomic) UIButton *moreDetails; // @synthesize moreDetails=_moreDetails;
@property(readonly, nonatomic) UIButton *decryptMsg; // @synthesize decryptMsg=_decryptMsg;
@property(readonly, nonatomic) UILabel *message; // @synthesize message=_message;
- (void)setContentSizeCategory:(id)arg1;
- (void)moveDecryptButtonUp;
- (void)moveDecryptButtonDown;
- (BOOL)shouldMoveButton;
- (void)updateMessageFrame;
- (void)disableDecryptAndMoreDetailsButtons;
- (void)enableMoreDetailsButton;
- (void)enableDecryptButton;
- (void)enableDecryptAndMoreDetailsButtons;
- (void)setIconForDisabledSmime:(id)arg1;
- (void)setFirstSmimeIcon:(id)arg1;
- (void)setFirstSmimeIcon:(id)arg1 secondSmimeIcon:(id)arg2;
- (void)setProgressViewCallback:(id)arg1;
- (float)getProgressViewValue;
- (void)updateProgressView:(float)arg1;
- (void)stopActivityIndicator;
- (void)startActivityIndicator;
- (void)disableProgressView;
- (void)enableProgressView;
- (void)showDataForDisabledSmime;
- (void)showDataForEnabledSmime;
- (void)showSecurityCell;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

