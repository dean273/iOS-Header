//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASChangedCollectionLeaf.h>

#import <DAEAS/DADataElement-Protocol.h>

@class NSArray, NSDate, NSString;

@interface ASContact : ASChangedCollectionLeaf <DADataElement>
{
    _Bool _bodyTruncated;
    int _bodySize;
    void *_abRecord;
    NSDate *_anniversary;
    NSString *_assistantName;
    NSString *_assistantTelephoneNumber;
    NSDate *_birthday;
    NSString *_body;
    NSString *_business2TelephoneNumber;
    NSString *_businessAddressCity;
    NSString *_businessAddressCountry;
    NSString *_businessAddressPostalCode;
    NSString *_businessAddressState;
    NSString *_businessAddressStreet;
    NSString *_businessFaxNumber;
    NSString *_businessTelephoneNumber;
    NSString *_carTelephoneNumber;
    NSArray *_categories;
    NSArray *_children;
    NSString *_companyName;
    NSString *_department;
    NSString *_email1Address;
    NSString *_email2Address;
    NSString *_email3Address;
    NSString *_fileAs;
    NSString *_firstName;
    NSString *_home2TelephoneNumber;
    NSString *_homeAddressCity;
    NSString *_homeAddressCountry;
    NSString *_homeAddressPostalCode;
    NSString *_homeAddressState;
    NSString *_homeAddressStreet;
    NSString *_homeTelephoneNumber;
    NSString *_homeFaxNumber;
    NSString *_jobTitle;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_mobileTelephoneNumber;
    NSString *_officeLocation;
    NSString *_otherAddressCity;
    NSString *_otherAddressCountry;
    NSString *_otherAddressPostalCode;
    NSString *_otherAddressState;
    NSString *_otherAddressStreet;
    NSString *_pagerNumber;
    NSString *_picture;
    NSString *_radioTelephoneNumber;
    NSString *_spouse;
    NSString *_suffix;
    NSString *_title;
    NSString *_webpage;
    NSString *_yomiCompanyName;
    NSString *_yomiFirstName;
    NSString *_yomiLastName;
    NSString *_customerID;
    NSString *_governmentID;
    NSString *_im1Address;
    NSString *_im2Address;
    NSString *_im3Address;
    NSString *_managerName;
    NSString *_companyMainPhone;
    NSString *_accountName;
    NSString *_nickName;
    NSString *_mms;
    long long _fileAsAutoConstruction;
}

+ (id)contactWithABRecord:(void *)arg1 serverID:(id)arg2;
+ (id)externalRepClasses;
+ (id)asParseRules;
+ (void)_setSystemTimeZoneForUnitTests:(id)arg1;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
@property(nonatomic) long long fileAsAutoConstruction; // @synthesize fileAsAutoConstruction=_fileAsAutoConstruction;
@property(retain, nonatomic) NSString *mms; // @synthesize mms=_mms;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain, nonatomic) NSString *companyMainPhone; // @synthesize companyMainPhone=_companyMainPhone;
@property(retain, nonatomic) NSString *managerName; // @synthesize managerName=_managerName;
@property(retain, nonatomic) NSString *im3Address; // @synthesize im3Address=_im3Address;
@property(retain, nonatomic) NSString *im2Address; // @synthesize im2Address=_im2Address;
@property(retain, nonatomic) NSString *im1Address; // @synthesize im1Address=_im1Address;
@property(retain, nonatomic) NSString *governmentID; // @synthesize governmentID=_governmentID;
@property(retain, nonatomic) NSString *customerID; // @synthesize customerID=_customerID;
@property(retain, nonatomic) NSString *yomiLastName; // @synthesize yomiLastName=_yomiLastName;
@property(retain, nonatomic) NSString *yomiFirstName; // @synthesize yomiFirstName=_yomiFirstName;
@property(retain, nonatomic) NSString *yomiCompanyName; // @synthesize yomiCompanyName=_yomiCompanyName;
@property(retain, nonatomic) NSString *webpage; // @synthesize webpage=_webpage;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(retain, nonatomic) NSString *spouse; // @synthesize spouse=_spouse;
@property(retain, nonatomic) NSString *radioTelephoneNumber; // @synthesize radioTelephoneNumber=_radioTelephoneNumber;
@property(retain, nonatomic) NSString *picture; // @synthesize picture=_picture;
@property(retain, nonatomic) NSString *pagerNumber; // @synthesize pagerNumber=_pagerNumber;
@property(retain, nonatomic) NSString *otherAddressStreet; // @synthesize otherAddressStreet=_otherAddressStreet;
@property(retain, nonatomic) NSString *otherAddressState; // @synthesize otherAddressState=_otherAddressState;
@property(retain, nonatomic) NSString *otherAddressPostalCode; // @synthesize otherAddressPostalCode=_otherAddressPostalCode;
@property(retain, nonatomic) NSString *otherAddressCountry; // @synthesize otherAddressCountry=_otherAddressCountry;
@property(retain, nonatomic) NSString *otherAddressCity; // @synthesize otherAddressCity=_otherAddressCity;
@property(retain, nonatomic) NSString *officeLocation; // @synthesize officeLocation=_officeLocation;
@property(retain, nonatomic) NSString *mobileTelephoneNumber; // @synthesize mobileTelephoneNumber=_mobileTelephoneNumber;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(retain, nonatomic) NSString *homeFaxNumber; // @synthesize homeFaxNumber=_homeFaxNumber;
@property(retain, nonatomic) NSString *homeTelephoneNumber; // @synthesize homeTelephoneNumber=_homeTelephoneNumber;
@property(retain, nonatomic) NSString *homeAddressStreet; // @synthesize homeAddressStreet=_homeAddressStreet;
@property(retain, nonatomic) NSString *homeAddressState; // @synthesize homeAddressState=_homeAddressState;
@property(retain, nonatomic) NSString *homeAddressPostalCode; // @synthesize homeAddressPostalCode=_homeAddressPostalCode;
@property(retain, nonatomic) NSString *homeAddressCountry; // @synthesize homeAddressCountry=_homeAddressCountry;
@property(retain, nonatomic) NSString *homeAddressCity; // @synthesize homeAddressCity=_homeAddressCity;
@property(retain, nonatomic) NSString *home2TelephoneNumber; // @synthesize home2TelephoneNumber=_home2TelephoneNumber;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *fileAs; // @synthesize fileAs=_fileAs;
@property(retain, nonatomic) NSString *email3Address; // @synthesize email3Address=_email3Address;
@property(retain, nonatomic) NSString *email2Address; // @synthesize email2Address=_email2Address;
@property(retain, nonatomic) NSString *email1Address; // @synthesize email1Address=_email1Address;
@property(retain, nonatomic) NSString *department; // @synthesize department=_department;
@property(retain, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *carTelephoneNumber; // @synthesize carTelephoneNumber=_carTelephoneNumber;
@property(retain, nonatomic) NSString *businessTelephoneNumber; // @synthesize businessTelephoneNumber=_businessTelephoneNumber;
@property(retain, nonatomic) NSString *businessFaxNumber; // @synthesize businessFaxNumber=_businessFaxNumber;
@property(retain, nonatomic) NSString *businessAddressStreet; // @synthesize businessAddressStreet=_businessAddressStreet;
@property(retain, nonatomic) NSString *businessAddressState; // @synthesize businessAddressState=_businessAddressState;
@property(retain, nonatomic) NSString *businessAddressPostalCode; // @synthesize businessAddressPostalCode=_businessAddressPostalCode;
@property(retain, nonatomic) NSString *businessAddressCountry; // @synthesize businessAddressCountry=_businessAddressCountry;
@property(retain, nonatomic) NSString *businessAddressCity; // @synthesize businessAddressCity=_businessAddressCity;
@property(retain, nonatomic) NSString *business2TelephoneNumber; // @synthesize business2TelephoneNumber=_business2TelephoneNumber;
@property(nonatomic) _Bool bodyTruncated; // @synthesize bodyTruncated=_bodyTruncated;
@property(nonatomic) int bodySize; // @synthesize bodySize=_bodySize;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *assistantTelephoneNumber; // @synthesize assistantTelephoneNumber=_assistantTelephoneNumber;
@property(retain, nonatomic) NSString *assistantName; // @synthesize assistantName=_assistantName;
@property(retain, nonatomic) NSDate *anniversary; // @synthesize anniversary=_anniversary;
@property(nonatomic, setter=setABRecord:) void *abRecord; // @synthesize abRecord=_abRecord;
- (_Bool)deleteFromContainer:(void *)arg1;
- (_Bool)saveServerIDToExistingItem;
- (_Bool)loadLocalItemWithAccount:(id)arg1;
- (void)setLocalItem:(void *)arg1;
- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)setBodyTruncatedNumber:(id)arg1;
- (void)setBodySizeNumber:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)dealloc;
- (void)postProcessApplicationData;
- (id)bestEmailFromAppData:(int)arg1;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (_Bool)deleteFromAddressBook;
- (void)loadClientIDs;
- (_Bool)saveServerIDToContact;
- (_Bool)loadABRecord;
- (_Bool)saveToAddressBookWithExistingRecord:(void *)arg1 inSource:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 storeExternalRep:(_Bool)arg5;
- (_Bool)_saveExternalRepToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2 storeExternalRep:(_Bool)arg3;
- (_Bool)_saveIMsToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;
- (_Bool)_saveURLsToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;
- (_Bool)_saveEmailsToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;
- (_Bool)_saveStreetAddressesToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;
- (_Bool)_savePhoneNumbersToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;
- (_Bool)_saveRelatedNamesToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;
- (_Bool)_saveDatesToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;
- (id)initWithABRecord:(void *)arg1 serverID:(id)arg2;
- (void)_loadAttributesFromABRecord:(void *)arg1;
- (void)_reconstructFileAsField;
- (void)_detectFileAsAutoConstruction;
- (_Bool)_setExternalRepWithExistingRecord:(void *)arg1;
- (_Bool)_setIMsWithExistingRecord:(void *)arg1;
- (_Bool)_setURLsWithExistingRecord:(void *)arg1;
- (_Bool)_setEmailsWithExistingRecord:(void *)arg1;
- (_Bool)_setStreetAddressesWithExistingRecord:(void *)arg1;
- (_Bool)_setPhoneNumbersWithExistingRecord:(void *)arg1;
- (_Bool)_setRelatedNamesWithExistingRecord:(void *)arg1;
- (_Bool)_setDatesWithExistingRecord:(void *)arg1;
- (void)_setImageOnContactFromPerson:(void *)arg1;
- (long long)dataclass;
- (id)_transformedDateForActiveSync:(id)arg1;
- (id)_transformedDateForABFramework:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

