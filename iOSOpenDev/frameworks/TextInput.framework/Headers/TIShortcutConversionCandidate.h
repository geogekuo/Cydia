/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TextInput-Structs.h>
#import <Foundation/NSBundle.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TIShortcutConversionCandidate : NSBundle {
@private
	NSString *_input;	// 4 = 0x4
	BOOL _isForShortcutConversion;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *input;	// G=0x12ac9; S=0x12b39; @synthesize=_input
@property(assign, nonatomic) BOOL isForShortcutConversion;	// G=0x12aa9; S=0x12ab9; @synthesize=_isForShortcutConversion
- (id)initWithCandidate:(id)candidate input:(id)input;	// 0x12ad9
- (id)copyWithZone:(NSZone *)zone;	// 0x12b5d
// declared property getter: - (BOOL)isForShortcutConversion;	// 0x12aa9
// declared property setter: - (void)setIsForShortcutConversion:(BOOL)shortcutConversion;	// 0x12ab9
// declared property getter: - (id)input;	// 0x12ac9
// declared property setter: - (void)setInput:(id)input;	// 0x12b39
@end