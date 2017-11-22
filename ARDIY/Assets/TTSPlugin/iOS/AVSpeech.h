#import <Foundation/Foundation.h>

@interface NetServiceBrowserDelegate : NSObject
{
  NSString* utterance; 
}


- (void) utterSpeech:(NSString *) string;


@end

