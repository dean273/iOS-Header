//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKDOMNode, NSMutableDictionary;

@interface IKDOMNodeData : NSObject
{
    _Bool _updated;
    _Bool _childrenUpdated;
    _Bool _subtreeUpdated;
    _Bool _autoHighlightRead;
    _Bool _bindingParsed;
    _Bool _rulesParsed;
    _Bool _prototypesResolved;
    _Bool _dataResolved;
    IKDOMNode *_ownerJSNode;
    NSMutableDictionary *_featuresMap;
}

+ (id)jsNodeDataForNode:(struct _xmlNode *)arg1 create:(_Bool)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *featuresMap; // @synthesize featuresMap=_featuresMap;
@property(nonatomic, getter=isDataResolved) _Bool dataResolved; // @synthesize dataResolved=_dataResolved;
@property(nonatomic, getter=arePrototypesResolved) _Bool prototypesResolved; // @synthesize prototypesResolved=_prototypesResolved;
@property(nonatomic, getter=areRulesParsed) _Bool rulesParsed; // @synthesize rulesParsed=_rulesParsed;
@property(nonatomic, getter=isBindingParsed) _Bool bindingParsed; // @synthesize bindingParsed=_bindingParsed;
@property(nonatomic, getter=isAutoHighlightRead) _Bool autoHighlightRead; // @synthesize autoHighlightRead=_autoHighlightRead;
@property(nonatomic, getter=isSubtreeUpdated) _Bool subtreeUpdated; // @synthesize subtreeUpdated=_subtreeUpdated;
@property(nonatomic, getter=isChildrenUpdated) _Bool childrenUpdated; // @synthesize childrenUpdated=_childrenUpdated;
@property(nonatomic, getter=isUpdated) _Bool updated; // @synthesize updated=_updated;
@property(nonatomic) __weak IKDOMNode *ownerJSNode; // @synthesize ownerJSNode=_ownerJSNode;
- (id)featureForName:(id)arg1;
- (void)setFeature:(id)arg1 forName:(id)arg2;
@property(readonly, nonatomic) _Bool containsUpdates;

@end

