/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation {
	id _badgeValue;	// 60 = 0x3c
	NSString *_bundleIdentifier;	// 64 = 0x40
}
@property(retain) NSString *bundleIdentifier;	// G=0x21675; S=0x21689; @synthesize=_bundleIdentifier
@property(retain) id badgeValue;	// G=0x2163d; S=0x21651; @synthesize=_badgeValue
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x21689
// declared property getter: - (id)bundleIdentifier;	// 0x21675
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x21651
// declared property getter: - (id)badgeValue;	// 0x2163d
- (id)uniqueKey;	// 0x21631
- (void)run;	// 0x214d5
- (void)dealloc;	// 0x21475
@end