/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSString, UITraitCollection, UIViewController;

@interface PKPaymentAuthorizationLayout : NSObject <UITraitEnvironment> {
    float _contentHeightPadding;
    float _contentMargin;
    UIViewController *_controller;
    float _headerMargin;
    float _valueLeftMargin;
}

@property(readonly) float contentHeightPadding;
@property(readonly) float contentMargin;
@property UIViewController * controller;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) float headerMargin;
@property(readonly) Class superclass;
@property(readonly) UITraitCollection * traitCollection;
@property(readonly) float valueLeftMargin;

- (float)contentHeightPadding;
- (float)contentMargin;
- (id)controller;
- (float)headerMargin;
- (id)initWithController:(id)arg1;
- (void)setController:(id)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (float)valueLeftMargin;

@end
