//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLTextAreaElement : DOMHTMLElement
{
}

- (void)setSelectionRange:(int)arg1 end:(int)arg2;
- (void)setRangeText:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3 selectionMode:(id)arg4;
- (void)setRangeText:(id)arg1;
- (void)select;
- (void)setAutocomplete:(id)arg1;
- (id)autocomplete;
@property(copy) NSString *accessKey;
- (void)setSelectionDirection:(id)arg1;
- (id)selectionDirection;
@property int selectionEnd;
@property int selectionStart;
- (id)labels;
@property(readonly) _Bool willValidate;
- (unsigned int)textLength;
@property(copy) NSString *value;
@property(copy) NSString *defaultValue;
@property(readonly, copy) NSString *type;
- (void)setWrap:(id)arg1;
- (id)wrap;
@property int cols;
@property int rows;
- (void)setRequired:(_Bool)arg1;
- (_Bool)required;
@property _Bool readOnly;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
@property(copy) NSString *name;
- (void)setMaxLength:(int)arg1;
- (int)maxLength;
@property(readonly) DOMHTMLFormElement *form;
@property _Bool disabled;
- (void)setDirName:(id)arg1;
- (id)dirName;
@property _Bool autofocus;
- (int)structuralComplexityContribution;
- (_Bool)_isEdited;
- (int)_autocapitalizeType;
- (int)structuralComplexityContribution;
- (id)endPosition;
- (id)startPosition;

@end

