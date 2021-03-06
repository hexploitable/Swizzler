//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIViewController.h"

#import "BAIBluetoothDeviceDiscoveryDelegate.h"
#import "BAIBluetoothPairingDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSConditionLock, UIActivityIndicatorView, UIButton, UILabel, UINavigationController, UITableView, UITextView, UIView;

@interface BAIPairingViewController : UIViewController <BAIBluetoothDeviceDiscoveryDelegate, UITableViewDelegate, UITableViewDataSource, BAIBluetoothPairingDelegate>
{
    void *context;
    UINavigationController *navcontroller;
    UIView *currentView;
    UIView *detachedView;
    UIView *pairingFinishedSuccessView;
    UIView *pairingFinishedFailedView;
    UIView *pairingPINMatchView;
    UIView *pairingNotBegunView;
    UIView *pairingWaitView;
    UIView *pairingDiscoveryView;
    UITableView *discoveryTableView;
    UITextView *pairingBeginMessageTextView;
    UILabel *pairingPinLabel;
    UIButton *pairingMatchButton;
    UIButton *pairingNoMatchButton;
    UIActivityIndicatorView *pairingPinMatchActivityIndicator;
    NSConditionLock *pairingMatchCondLock;
    unsigned char pairingPinMatch;
    BOOL pairingWasSuccessful;
    int state;
    BOOL viewWasDismissed;
    NSArray *discoveredDevicesArray;
    CDUnknownFunctionPointerType pairingCallbackFunction;
}

@property(setter=setPairingCallback:) CDUnknownFunctionPointerType pairingCallbackFunction; // @synthesize pairingCallbackFunction;
@property void *context; // @synthesize context;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)BAIBluetoothPairingStateDidChange:(int)arg1;
- (void)BAIBluetoothPairingStateDidChangeMainThread:(id)arg1;
- (BOOL)BAIBluetoothPairingConfirmPIN:(id)arg1;
- (void)confirmPairingPin:(id)arg1;
- (void)pinMatchButtonWasPressed:(id)arg1;
- (void)pairToDevice:(id)arg1;
- (void)BAIBluetoothDeviceDiscoveryFinished:(id)arg1 error:(BOOL)arg2;
- (void)BAIBluetoothDeviceDiscoveryListChanged:(id)arg1;
- (void)beginPairingButtonWasPressed:(id)arg1;
- (void)accessoryDidDetach:(id)arg1;
- (void)accessoryDidAttach:(id)arg1;
- (void)updateUIForState:(int)arg1;
- (void)updateUIForStateAsNumber:(id)arg1;
- (void)dismissButtonWasPressed:(id)arg1;
- (void)viewIsDisappearing;
- (unsigned char)show:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;

@end

