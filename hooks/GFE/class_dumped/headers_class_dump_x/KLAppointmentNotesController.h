/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GUKeyboardSizeHandlerVC.h"

@class AppointmentWrapper;

@interface KLAppointmentNotesController : GUKeyboardSizeHandlerVC
{
    AppointmentWrapper *_appWrapper;
    AppointmentWrapper *_appWrapperTmp;
}

- (void)setAppWrapperTmp:(id)fp8;
- (id)appWrapperTmp;
- (void)setAppWrapper:(id)fp8;
- (id)appWrapper;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)createTextView;
- (void)dealloc;
- (void)done;
- (id)init;

@end
