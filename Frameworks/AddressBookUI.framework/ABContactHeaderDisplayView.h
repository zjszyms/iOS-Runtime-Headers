/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSDictionary, NSString, UILabel, UIView;

@interface ABContactHeaderDisplayView : ABContactHeaderView {
    NSString *_alternateName;
    UILabel *_fakeTaglineAlignmentLabel;
    UIView *_markerView;
    NSString *_message;
    UILabel *_nameLabel;
    UIView *_personHeaderView;
    UILabel *_taglineLabel;
    NSDictionary *_taglineTextAttributes;
}

@property(retain) NSString * alternateName;
@property(retain) NSString * message;
@property(retain) UIView * personHeaderView;
@property(copy) NSDictionary * taglineTextAttributes;

+ (id)contactHeaderViewWithContact:(id)arg1 personHeaderView:(id)arg2;

- (id)_headerStringForContact:(id)arg1;
- (id)_taglineStringForContact:(id)arg1;
- (void)_updatePhotoView;
- (id)alternateName;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)dealloc;
- (void)disablePhotoTapGesture;
- (void)handleNameLabelLongPress:(id)arg1;
- (id)initWithContact:(id)arg1 personHeaderView:(id)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)menuWillHide:(id)arg1;
- (id)message;
- (id)personHeaderView;
- (void)reloadDataPreservingChanges:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setTaglineTextAttributes:(id)arg1;
- (id)taglineTextAttributes;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateFontSizes;

@end
