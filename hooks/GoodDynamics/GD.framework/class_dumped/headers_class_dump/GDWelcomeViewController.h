//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDStartViewController.h"

@class GDActivityIndicatorView;

@interface GDWelcomeViewController : GDStartViewController
{
    GDActivityIndicatorView *_activityIndicator;
}

@property(retain, nonatomic) GDActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dealloc;
- (void)nextButtonPressed;
- (void)initInputUIData;
- (void)didReceiveMemoryWarning;
- (void)updateUIToOrientation:(int)arg1;
- (void)makeiPadLayout:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

