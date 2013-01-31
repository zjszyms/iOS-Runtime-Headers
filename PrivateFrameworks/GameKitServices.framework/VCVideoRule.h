/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCVideoRule : NSObject  {
    int iWidth;
    int iHeight;
    float fRate;
    float fPref;
}

@property int iWidth;
@property int iHeight;
@property float fRate;
@property float fPref;


- (int)compare:(id)arg1;
- (id)description;
- (int)compareByPref:(id)arg1;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 pref:(float)arg4;
- (void)setFPref:(float)arg1;
- (void)setToVideoRule:(id)arg1;
- (void)setFRate:(float)arg1;
- (void)setIHeight:(int)arg1;
- (void)setIWidth:(int)arg1;
- (float)fPref;
- (float)fRate;
- (int)iHeight;
- (int)iWidth;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3;

@end