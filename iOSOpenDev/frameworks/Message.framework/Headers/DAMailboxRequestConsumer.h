/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/DAActionConsumer.h>


@protocol DAMailboxRequestConsumer <DAActionConsumer>
- (void)resultsForMailbox:(id)mailbox newTag:(id)tag actions:(id)actions responses:(id)responses percentComplete:(double)complete moreAvailable:(BOOL)available;
@end