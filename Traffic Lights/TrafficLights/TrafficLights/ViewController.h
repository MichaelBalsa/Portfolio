//
//  ViewController.h
//  TrafficLights
//
//  Created by Aaron Caines on 23/08/2018.
//  Copyright © 2018 Aaron Caines. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
    NSTimer *timer;
    NSTimer *scoreTimer;
    
    int timerInt;
    int scoreInt;
    
}

@property (weak, nonatomic) IBOutlet UIImageView *trafficLight;
@property (weak, nonatomic) IBOutlet UILabel *scoreLabel;
@property (weak, nonatomic) IBOutlet UIButton *startButton;

- (IBAction)startGame:(id)sender;

@end

