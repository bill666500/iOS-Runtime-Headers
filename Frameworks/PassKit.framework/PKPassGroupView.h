/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKPassView, UIPageControl, PKReusablePassViewQueue, UIView, <PKPassGroupViewDelegate>, PKPassGroup, UIScrollView, NSMutableDictionary;

@interface PKPassGroupView : UIView <WLCardViewDelegate, PKPassGroupDelegate, UIScrollViewDelegate> {
    NSMutableDictionary *_passViewsByUniqueID;
    PKReusablePassViewQueue *_passViewQueue;
    int _presentationState;
    UIScrollView *_horizontalScrollView;
    UIPageControl *_pageControl;
    unsigned int _displayIndex;
    UIView *_dimmerView;
    PKPassGroup *_group;
    <PKPassGroupViewDelegate> *_delegate;
}

@property(retain) PKPassGroup * group;
@property(readonly) PKPassView * frontmostPassView;
@property PKReusablePassViewQueue * passViewQueue;
@property int presentationState;
@property(readonly) unsigned int displayIndex;
@property(readonly) UIPageControl * pageControl;
@property(readonly) <PKPassGroupViewDelegate> * delegate;


- (id)delegate;
- (void)dealloc;
- (int)presentationState;
- (id)pageControl;
- (id)group;
- (void)setGroup:(id)arg1;
- (struct CGSize { float x1; float x2; })_contentSize;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (id)passViewQueue;
- (void)flipPassViewForPass:(id)arg1 animated:(BOOL)arg2;
- (void)_tilePagesEagerly:(BOOL)arg1;
- (void)_loadNeededViews;
- (void)_evictUnusedViews;
- (id)_loadCardViewForUniqueID:(id)arg1;
- (id)_uniqueIDsOfVisibleCards;
- (unsigned int)displayIndex;
- (id)_stackIndexesFromVisibleIndexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_fanningFrameForCardView:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_setupPageControl;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_pagingFrameForCardView:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setShowPageControl:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3 delay:(double)arg4;
- (void)_showFrontmostPassOnly:(BOOL)arg1;
- (void)_enumerateCardViewsByStackOrderWithBlock:(id)arg1;
- (int)_defaultContentModeForIndex:(unsigned int)arg1;
- (void)_setupViewsForFanningWithAnimation:(BOOL)arg1 resizeCards:(BOOL)arg2;
- (void)_setupViewsForPileWithAnimation:(BOOL)arg1 resizeCards:(BOOL)arg2;
- (void)_setupViewsForStackingWithAnimation:(BOOL)arg1 scrolling:(BOOL)arg2 resizeCards:(BOOL)arg3;
- (void)_setupViewsForPagingWithAnimation:(BOOL)arg1 resizeCards:(BOOL)arg2;
- (void)_updatePageControl;
- (void)_pageControlChanged:(id)arg1;
- (id)_loadCardViewForIndex:(unsigned int)arg1 contentMode:(int)arg2;
- (void)setPassViewQueue:(id)arg1;
- (void)group:(id)arg1 didRemovePassWithUniqueID:(id)arg2 atIndex:(unsigned int)arg3;
- (void)group:(id)arg1 didReplacePassWithUniqueID:(id)arg2 withPass:(id)arg3 atIndex:(unsigned int)arg4;
- (void)group:(id)arg1 didMovePassFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)group:(id)arg1 willReplacePassWithUniqueID:(id)arg2;
- (void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setPresentationState:(int)arg1 animated:(BOOL)arg2 resizePasses:(BOOL)arg3;
- (void)applyDefaultModeForPassesWithDuration:(double)arg1;
- (void)setPresentationState:(int)arg1;
- (id)frontmostPassView;
- (id)initWithGroup:(id)arg1 delegate:(id)arg2 contentMode:(int)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfVisibleIndexes;
- (void)setPresentationState:(int)arg1 animated:(BOOL)arg2;
- (void)passViewTapped:(id)arg1;
- (void)passViewDidFlip:(id)arg1 animated:(BOOL)arg2;
- (BOOL)passViewShouldFlip:(id)arg1;
- (BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2;
- (BOOL)passViewBackGrowsCentered:(id)arg1;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)setDimmer:(float)arg1 animated:(BOOL)arg2;
- (id)uniqueID;

@end