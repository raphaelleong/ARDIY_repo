#import <Foundation/Foundation.h>

@protocol AVSpeechDelegate <NSObject>
- (void)

@interface AVSpeech : NSObject
{
+ NSString* utterance; 
}


+ (void) utterSpeech:(NSString *) string;


@end

