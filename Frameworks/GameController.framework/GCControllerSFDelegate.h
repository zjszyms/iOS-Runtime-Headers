/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSUserActivity;

@interface GCControllerSFDelegate : NSObject <NSUserActivityDelegate> {
    NSUserActivity *_activity;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property(copy) id completionHandler;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)completionHandler;
- (void)fireCompletionHandler;
- (void)setCompletionHandler:(id)arg1;
- (void)startScan;
- (void)userActivityWasContinued:(id)arg1;

@end
