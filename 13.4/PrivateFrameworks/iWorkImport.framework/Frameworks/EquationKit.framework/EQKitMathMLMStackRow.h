//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EquationKit/EQKitMathMLNode.h>

#import <EquationKit/EQKitLayoutSchemataStackRow-Protocol.h>
#import <EquationKit/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

@interface EQKitMathMLMStackRow : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackRow>
{
    NSArray *mChildren;
}

- (id)schemataChildren;
- (_Bool)isBaseFontNameUsed;
- (struct Schemata)layoutSchemata;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;
- (const set_c5c159f9 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

