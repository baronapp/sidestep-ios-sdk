//
//  InputField.h
//  Sidestep
//
//  Created by Victor Kinelev on 10.02.14.
//  Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InputView.h"
@class Errors;
@class InputField;

@interface InputFieldsController : NSObject <UITextFieldDelegate>

// отображение ошибок, скрытие ошибок
@property(weak, nonatomic) UIViewController *viewController;

- (void)configureInputField:(InputField *)inputField
                  withTitle:(NSString *)title;
- (void)configureInputField:(InputField *)inputField
                  withTitle:(NSString *)title
                 andOptions:(NSDictionary *)options;
- (void)showErrors:(Errors *)errors;
- (void)clearErrors;

@end

@interface InputField : UIView

@property(strong, nonatomic) NSString *title;
@property(strong, nonatomic) NSString *value;
@property(strong, nonatomic) InputView *myInputView;

@property(assign, nonatomic) CGFloat cornerRadius UI_APPEARANCE_SELECTOR;
@property(assign, nonatomic) CGFloat borderWidth UI_APPEARANCE_SELECTOR;
@property(strong, nonatomic) UIColor *borderColor UI_APPEARANCE_SELECTOR;
@property(strong, nonatomic) UIColor *errorColor UI_APPEARANCE_SELECTOR;
@property(nonatomic) BOOL readOnly;
// only if need use custom text field delegate
@property(weak, nonatomic) id<UITextFieldDelegate> delegate;

- (void)showError:(NSString *)error;
- (void)clearError;
- (void)addInformationView:(UIView *)view;

@end
