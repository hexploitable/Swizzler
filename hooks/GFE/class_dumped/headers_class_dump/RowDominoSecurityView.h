//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "RowGeneralSecurityView.h"

@interface RowDominoSecurityView : RowGeneralSecurityView
{
    int _status;
}

- (void)dealloc;
- (void)showIn:(id)arg1 withStatus:(int)arg2;
@property(nonatomic) int status;
- (void)setFontAndFrameToLabel;
- (void)setContentSizeCategory:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)singleLineFrame;
- (struct CGRect)multilineFrame;
- (float)messageLabelWidth;

@end
