/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "UINavigationControllerDelegate-Protocol.h"

@interface GUNavigationControllerPrivateDelegate : _ABAddressBookAddRecord <UINavigationControllerDelegate>
{
    id <UINavigationControllerDelegate> _forwardingDelegate;
}

- (void)setForwardingDelegate:(id)fp8;
- (id)forwardingDelegate;
- (void)navigationController:(id)fp8 willShowViewController:(id)fp12 animated:(BOOL)fp16;
- (id)forwardingTargetForSelector:(SEL)fp8;
- (BOOL)respondsToSelector:(SEL)fp8;

@end

