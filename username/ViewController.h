//
//  ViewController.h
//  username
//
//  Created by S104 on 1/23/13.
//  Copyright (c) 2013 S104. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    UITextField *nameField;
    UITextField *numberField;
    
    
    NSString *myPass;
    NSString *myUser;
    
    UIButton  *btnNum0;
    UIButton  *btnNum1;
    UIButton  *btnNum2;
    UIButton  *btnNum3;
    UIButton  *btnNum4;
    UIButton  *btnNum5;
    UIButton  *btnNum6;
    UIButton  *btnNum7;
    UIButton  *btnNum8;
    UIButton  *btnNum9;
    UIButton  *btnAdd;
    UIButton  *btnDec;
    UIButton  *btnSub;
    UIButton  *btnDiv;
    UIButton  *btnEqual;
    UIButton  *btnClear;
    UIButton  *btnPoint;
    UITextField *numberTxtFiled;
    
    float number;
    float result;
    int currentOperation;
    
    
}

@property (nonatomic, retain) IBOutlet UITextField *nameField;
@property (nonatomic, retain) IBOutlet UITextField *numberField;
@property (nonatomic, retain) IBOutlet UIButton  *btnNum0;
@property (nonatomic, retain) IBOutlet UIButton  *btnNum1;
@property (nonatomic, retain) IBOutlet UIButton  *btnNum2;
@property (nonatomic, retain) IBOutlet UIButton  *btnNum3;
@property (nonatomic, retain) IBOutlet UIButton  *btnNum4;
@property (nonatomic, retain) IBOutlet UIButton  *btnNum5;
@property (nonatomic, retain) IBOutlet UIButton  *btnNum6;
@property (nonatomic, retain) IBOutlet UIButton  *btnNum7;
@property (nonatomic, retain) IBOutlet UIButton  *btnNum8;
@property (nonatomic, retain) IBOutlet UIButton  *btnNum9;
@property (nonatomic, retain) IBOutlet UIButton  *btnAdd;
@property (nonatomic, retain) IBOutlet UIButton  *btnDec;
@property (nonatomic, retain) IBOutlet UIButton  *btnSub;
@property (nonatomic, retain) IBOutlet UIButton  *btnDiv;
@property (nonatomic, retain) IBOutlet UIButton  *btnEqual;
@property (nonatomic, retain) IBOutlet UIButton  *btnClear;
@property (nonatomic, retain) IBOutlet UIButton  *btnPoint;
@property (nonatomic, retain) IBOutlet UITextField *numberTxtFiled;


-(IBAction) loginCheckBtn;
-(IBAction) numericBtnClick:(id)sender;
-(IBAction) buttonOperationClick:(id)sender;
-(IBAction) cancelInput;
-(IBAction) cancelOperation;


@end
