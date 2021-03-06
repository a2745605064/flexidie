/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "SKPExpressionProtocol-Protocol.h"

@class NSDictionary, NSString, SKPMediaDocument, UIImage;

@interface SKPMoji : NSObject //<SKPExpressionProtocol>
{
    unsigned long long _documentStatus;
    SKPMediaDocument *_mediaDocument;
    unsigned long long _objectId;
}

+ (void)prefetchCachedThumbnailsForMojis:(id)arg1;
+ (id)keyPathsForValuesAffectingUri;
+ (id)keyPathsForValuesAffectingPickerTitle;
+ (id)keyPathsForValuesAffectingMetaProperties;
+ (id)keyPathsForValuesAffectingVideoDownloadProgress;
+ (id)keyPathsForValuesAffectingVideoMediaStatus;
+ (id)keyPathsForValuesAffectingVideoFilePath;
+ (id)keyPathsForValuesAffectingThumbnailMediaStatus;
+ (id)keyPathsForValuesAffectingThumbnail;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) SKPMediaDocument *mediaDocument; // @synthesize mediaDocument=_mediaDocument;
@property(readonly, nonatomic) unsigned long long documentStatus; // @synthesize documentStatus=_documentStatus;
//- (void).cxx_destruct;
- (void)retry;
@property(readonly, nonatomic) id identifier;
@property(readonly, nonatomic) unsigned long long expressionType;
@property(readonly, copy, nonatomic) NSString *pickerTitle;
@property(readonly, nonatomic) NSDictionary *metaProperties;
@property(readonly, nonatomic) unsigned long long videoMediaStatus;
@property(readonly, nonatomic) unsigned long long videoDownloadProgress;
@property(readonly, copy, nonatomic) NSString *videoFilePath;
@property(readonly, copy, nonatomic) NSString *uri;
@property(readonly, nonatomic) unsigned long long thumbnailMediaStatus;
@property(readonly, nonatomic) UIImage *thumbnail;
- (id)initWithObjectId:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

