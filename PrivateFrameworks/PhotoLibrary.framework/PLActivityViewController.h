/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLActivityViewControllerDelegate>, NSArray, UIViewController;

@interface PLActivityViewController : UIActivityViewController {
    <PLActivityViewControllerDelegate> *_delegate;
    int _idiom;
    int _mode;
    NSArray *_photosActivities;
    UIViewController *_referenceViewController;
}

@property <PLActivityViewControllerDelegate> * delegate;
@property int idiom;
@property int mode;
@property(retain) NSArray * photosActivities;
@property(retain) UIViewController * referenceViewController;

+ (id)applicationActivitiesForMode:(int)arg1 interfaceIdiom:(int)arg2;
+ (void)trackUserActivity:(id)arg1 forAssets:(id)arg2;

- (void)_cleanupWithSuccess:(BOOL)arg1;
- (void)_performActivity:(id)arg1;
- (BOOL)_shouldShowSystemActivity:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (int)idiom;
- (id)initWithManagedAssets:(id)arg1 forMode:(int)arg2 interfaceIdiom:(int)arg3;
- (int)mode;
- (id)photosActivities;
- (id)referenceViewController;
- (void)setDelegate:(id)arg1;
- (void)setIdiom:(int)arg1;
- (void)setMode:(int)arg1;
- (void)setPhotosActivities:(id)arg1;
- (void)setPublishingActivityDelegate:(id)arg1;
- (void)setReferenceViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;

@end