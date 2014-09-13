//
//  MyScene.h
//  Flappy Flyer
//

//  Copyright (c) 2014 MooPark. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

typedef NS_ENUM(int, GameState) {
    GameStateMainMenu,
    GameStateTutorial,
    GameStatePlay,
    GameStateFalling,
    GameStateShowingScore,
    GameStateGameOver
};

@protocol MySceneDelegate
- (UIImage *)screenshot;
- (void)shareString:(NSString *)string url:(NSURL*)url image:(UIImage *)screenshot;
@end

@interface MyScene : SKScene

-(id)initWithSize:(CGSize)size delegate:(id<MySceneDelegate>)delegate;

@property (strong, nonatomic) id<MySceneDelegate> delegate;

@end
