#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>


@interface AVSpeech : NSObject
{
+ NSString* utterance;
- AVSpeechSynthesizer *speechSynthesizer;
}


+ (void) utterSpeech:(NSString *) string;
+ (void) stopSpeech;
+ (NSString*) checkUtterance;

@end

