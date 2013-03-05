//
//  ViewController.m
//  username
//
//  Created by S104 on 1/23/13.
//  Copyright (c) 2013 S104. All rights reserved.
//

#import "ViewController.h"
#import "UserViewController.h"

@interface ViewController ()

@end

@implementation ViewController
@synthesize nameField;
@synthesize numberField;
@synthesize btnNum0;
@synthesize btnNum1;
@synthesize btnNum2;
@synthesize btnNum3;
@synthesize btnNum4;
@synthesize btnNum5;
@synthesize btnNum6;
@synthesize btnNum7;
@synthesize btnNum8;
@synthesize btnNum9;
@synthesize btnAdd;
@synthesize btnDec;
@synthesize btnSub;
@synthesize btnDiv;
@synthesize btnEqual;
@synthesize btnClear;
@synthesize btnPoint;
@synthesize numberTxtFiled;
- (void)viewDidLoad
{
    [super viewDidLoad];
	
    myPass = @"1234";
    myUser = @"user1";
    number=0;
}

-(IBAction) loginCheckBtn {
    if ([nameField.text isEqualToString:myUser] ) {
        if ([numberField.text isEqualToString:myPass]) {
            NSLog(@"login success");
            UserViewController *userController = [[UserViewController alloc] initWithNibName:nil bundle:nil];
            [self.navigationController pushViewController:userController animated:YES];
            
        }
        else
            NSLog(@"passcode invalid");
    }
    else
        NSLog(@"username invalid");
}

-(IBAction) numericBtnClick:(id)sender {
    number=number*10+(float)[sender tag];
    numberTxtFiled.text = [NSString stringWithFormat:@"%2f", number];
}

-(IBAction) buttonOperationClick:(id)sender{
 
    if(currentOperation==0)result=number;
    else{
        switch(currentOperation){
             
            case 1:result=result+number;
                break;
            case 2:result=result-number;
                break;
            case 3:result=result*number;
                break;
            case 4:result=result/number;
                break;
            case 5:currentOperation=0;;
                break;
        
        }
    }
    number=0;
    numberTxtFiled.text=[NSString stringWithFormat:@"%2f", result];
    
    if([sender tag]==0) result=0;
    currentOperation= [sender tag];
    
}

-(IBAction) cancelInput{
    number=0;
    numberTxtFiled.text=@"0";

}

-(IBAction) cancelOperation{
    number=0;
    numberTxtFiled.text=@"0";
    currentOperation=0;
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
