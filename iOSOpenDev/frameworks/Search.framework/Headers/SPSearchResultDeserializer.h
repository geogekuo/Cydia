/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Search.framework/Search
 */



@class SPSearchResult, NSString, NSArray, CPSearchMatcher;

@interface SPSearchResultDeserializer : NSObject {
	unsigned _byteVector;	// 20 = 0x14
	NSArray *_resultOffsetVector;	// 24 = 0x18
	BOOL _munmapAtDealloc;	// 28 = 0x1c
	unsigned _resultCount;	// 32 = 0x20
	unsigned _domain;	// 36 = 0x24
	NSString *_displayIdentifier;	// 40 = 0x28
	NSString *_category;	// 44 = 0x2c
	CPSearchMatcher *_matcher;	// 48 = 0x30
	CPSearchMatcher *_diacriticMatcher;	// 52 = 0x34
	SPSearchResult *_sortA;	// 56 = 0x38
	SPSearchResult *_sortB;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) SPSearchResult *sortB;	// G=0x4bfd; @synthesize=_sortB
@property(readonly, assign, nonatomic) SPSearchResult *sortA;	// G=0x4bed; @synthesize=_sortA
@property(readonly, assign, nonatomic) CPSearchMatcher *diacriticMatcher;	// G=0x4bdd; @synthesize=_diacriticMatcher
@property(readonly, assign, nonatomic) CPSearchMatcher *matcher;	// G=0x4bcd; @synthesize=_matcher
@property(readonly, assign, nonatomic) NSString *category;	// G=0x4bbd; @synthesize=_category
@property(readonly, assign, nonatomic) NSString *displayIdentifier;	// G=0x4bad; @synthesize=_displayIdentifier
@property(readonly, assign, nonatomic) unsigned domain;	// G=0x4b9d; @synthesize=_domain
@property(readonly, assign, nonatomic) unsigned resultCount;	// G=0x4b8d; @synthesize=_resultCount
// declared property getter: - (id)sortB;	// 0x4bfd
// declared property getter: - (id)sortA;	// 0x4bed
// declared property getter: - (id)diacriticMatcher;	// 0x4bdd
// declared property getter: - (id)matcher;	// 0x4bcd
// declared property getter: - (id)category;	// 0x4bbd
// declared property getter: - (id)displayIdentifier;	// 0x4bad
// declared property getter: - (unsigned)domain;	// 0x4b9d
// declared property getter: - (unsigned)resultCount;	// 0x4b8d
- (void)dealloc;	// 0x4a89
- (id)initWithSerializer:(id)serializer;	// 0x4a05
- (id)initWithMallocRegion:(unsigned)mallocRegion length:(unsigned)length;	// 0x49d9
- (id)initWithMappedRegion:(unsigned)mappedRegion length:(unsigned)length;	// 0x4719
- (void)_prepareForRandomAccess;	// 0x4525
- (id)readBytes:(unsigned)bytes;	// 0x44a1
- (int)read:(const char *)read maxLength:(unsigned)length;	// 0x4441
- (void)sortResultsUsingQueryString:(id)string;	// 0x42a9
- (BOOL)deserializeResultAtIndex:(unsigned)index toCursor:(id)cursor;	// 0x3df9
- (BOOL)readResultIntoCursor:(id)cursor;	// 0x3a89
@end