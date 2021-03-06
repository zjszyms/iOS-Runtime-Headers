/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSDownloadMonitorDelegate>, NSObject<OS_dispatch_queue>, SSXPCConnection;

@interface SSDownloadMonitor : NSObject {
    SSXPCConnection *_connection;
    <SSDownloadMonitorDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property <SSDownloadMonitorDelegate> * delegate;

- (id)_connection;
- (id)_copyItemsWithReply:(id)arg1 error:(id*)arg2;
- (void)_reloadForChangeNotification;
- (void)dealloc;
- (id)delegate;
- (void)getMonitorItemsWithCompletionBlock:(id)arg1;
- (id)init;
- (void)pauseMonitorItem:(id)arg1 completionBlock:(id)arg2;
- (void)prioritizeMonitorItem:(id)arg1 completionBlock:(id)arg2;
- (void)resumeMonitorItem:(id)arg1 completionBlock:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
