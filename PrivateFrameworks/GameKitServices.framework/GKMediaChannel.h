/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSString;

@interface GKMediaChannel : NSObject {
    id channelImpl;
    NSString *groupTag;
    BOOL hold;
}

@property(copy) NSString *groupTag;
@property BOOL hold;

- (id)engine;
- (id)groupTag;
- (long)handleIncomingData:(id)arg1;
- (long)handleIncomingRTCP:(id)arg1;
- (BOOL)hold;
- (float)incomingAudioLevel;
- (id)initWithEngine:(id)arg1;
- (float)outgoingAudioLevel;
- (void)setCodecs:(id)arg1;
- (void)setGroupTag:(id)arg1;
- (void)setHold:(BOOL)arg1;
- (void)setIncomingEnabled:(BOOL)arg1;
- (void)setIncomingSSRC:(NSInteger)arg1;
- (void)setOutgoingEnabled:(BOOL)arg1;
- (void)setOutgoingSSRC:(NSInteger)arg1;
- (void)setPearSendInterface:(void*)arg1 info:(void*)arg2;
- (void)setSendInterface:(id)arg1;
- (long)setSyncChannel:(id)arg1;
- (void)setUsingRTCP:(BOOL)arg1;
- (NSUInteger)type;

@end