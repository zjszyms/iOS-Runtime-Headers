/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSMutableDictionary, NSString, NSURL, SKUIArtworkList, SKUIItemOffer;

@interface SKUIItem : NSObject <SKUICacheCoding, SSMetricsEventFieldProvider> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _ageBandRange;
    NSString *_artistName;
    SKUIArtworkList *_artworks;
    NSString *_bundleID;
    NSString *_categoryName;
    NSString *_collectionName;
    unsigned int _deviceFamilies;
    NSString *_editorialBadge;
    NSString *_editorialBage;
    BOOL _hasInAppPurchases;
    long long _itemIdentifier;
    int _itemKind;
    NSString *_itemKindString;
    SKUIItemOffer *_itemOffer;
    BOOL _newsstandApp;
    SKUIArtworkList *_newsstandArtworks;
    int _newsstandBindingEdge;
    int _newsstandBindingType;
    int _numberOfChildItems;
    int _numberOfUserRatings;
    int _parentalControlsRank;
    BOOL _prerenderedArtwork;
    NSString *_productPageURLString;
    NSArray *_requiredCapabilities;
    NSString *_title;
    float _userRating;
    long long _versionIdentifier;
    NSString *_versionString;
    NSArray *_videos;
}

@property(readonly) NSString * _downloadKind;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } ageBandRange;
@property(readonly) NSString * artistName;
@property(readonly) SKUIArtworkList * artworks;
@property(readonly) NSString * bundleIdentifier;
@property(readonly) NSMutableDictionary * cacheRepresentation;
@property(readonly) NSString * categoryName;
@property(readonly) NSArray * childItemIdentifiers;
@property(readonly) NSString * collectionName;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int deviceFamilies;
@property(readonly) NSString * editorialBadge;
@property(readonly) BOOL hasInAppPurchases;
@property(readonly) unsigned int hash;
@property(readonly) long long itemIdentifier;
@property(readonly) int itemKind;
@property(readonly) NSString * itemKindString;
@property(readonly) NSURL * largestArtworkURL;
@property(readonly) NSArray * loadedChildItems;
@property(getter=isNewsstandApp,readonly) BOOL newsstandApp;
@property(readonly) SKUIArtworkList * newsstandArtworks;
@property(readonly) int newsstandBindingEdge;
@property(readonly) int newsstandBindingType;
@property(readonly) int numberOfChildItems;
@property(readonly) int numberOfUserRatings;
@property(readonly) int parentalControlsRank;
@property(getter=hasPrerenderedArtwork,readonly) BOOL prerenderedArtwork;
@property(readonly) SKUIItemOffer * primaryItemOffer;
@property(readonly) NSString * productPageURLString;
@property(readonly) NSArray * requiredCapabilities;
@property(readonly) Class superclass;
@property(readonly) NSString * title;
@property(readonly) float userRating;
@property(readonly) long long versionIdentifier;
@property(readonly) NSString * versionString;
@property(readonly) NSArray * videos;

- (void).cxx_destruct;
- (id)_downloadKind;
- (void)_setHasInAppPurchases:(BOOL)arg1;
- (void)addItemOfferParameterWithName:(id)arg1 value:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })ageBandRange;
- (id)artistName;
- (id)artworkURLForSize:(int)arg1;
- (id)artworks;
- (id)bundleIdentifier;
- (id)cacheRepresentation;
- (id)categoryName;
- (id)childItemForIdentifier:(id)arg1;
- (id)childItemIdentifiers;
- (id)collectionName;
- (unsigned int)deviceFamilies;
- (id)editorialBadge;
- (BOOL)hasInAppPurchases;
- (BOOL)hasPrerenderedArtwork;
- (unsigned int)hash;
- (id)initContainerItemWithItem:(id)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNewsstandApp;
- (long long)itemIdentifier;
- (int)itemKind;
- (id)itemKindString;
- (id)largestArtworkURL;
- (id)loadedChildItems;
- (id)lookupDictionary;
- (id)newsstandArtworks;
- (int)newsstandBindingEdge;
- (int)newsstandBindingType;
- (int)numberOfChildItems;
- (int)numberOfUserRatings;
- (int)parentalControlsRank;
- (id)primaryItemOffer;
- (id)productPageURLString;
- (id)requiredCapabilities;
- (id)title;
- (float)userRating;
- (id)valueForMetricsField:(id)arg1;
- (long long)versionIdentifier;
- (id)versionString;
- (id)videos;

@end
