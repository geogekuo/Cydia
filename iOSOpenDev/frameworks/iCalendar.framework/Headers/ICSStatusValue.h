/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSPredefinedValue.h>
#import <iCalendar/ICSStatusValue.h>


@interface ICSStatusValue : ICSPredefinedValue {
}
+ (id)statusTypeFromCode:(int)code;	// 0xa245
@end

@interface ICSStatusValue (ICSWriter)
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0xd25d
@end

@interface ICSStatusValue (iCalendarImport)
+ (id)statusValueFromICSString:(id)icsstring;	// 0x1e191
@end