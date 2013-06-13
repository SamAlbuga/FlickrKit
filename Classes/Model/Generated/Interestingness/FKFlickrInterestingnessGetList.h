//
//  FKFlickrInterestingnessGetList.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 12 Jun, 2013 at 17:19.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrInterestingnessGetListError_NotAValidDateString = 1,		 /* The date string passed did not validate. All dates must be formatted : YYYY-MM-DD */
	FKFlickrInterestingnessGetListError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrInterestingnessGetListError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrInterestingnessGetListError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrInterestingnessGetListError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrInterestingnessGetListError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrInterestingnessGetListError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrInterestingnessGetListError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrInterestingnessGetListError;

/*

Returns the list of interesting photos for the most recent day or a user-specified date.




*/
@interface FKFlickrInterestingnessGetList : NSObject <FKFlickrAPIMethod>

/* A specific date, formatted as YYYY-MM-DD, to return interesting photos for. */
@property (nonatomic, strong) NSString *date;

/* Always ask the pandas for interesting photos. This is a temporary argument to allow developers to update their code. */
@property (nonatomic, strong) NSString *use_panda;

/* A comma-delimited list of extra information to fetch for each returned record. Currently supported fields are: <code>description</code>, <code>license</code>, <code>date_upload</code>, <code>date_taken</code>, <code>owner_name</code>, <code>icon_server</code>, <code>original_format</code>, <code>last_update</code>, <code>geo</code>, <code>tags</code>, <code>machine_tags</code>, <code>o_dims</code>, <code>views</code>, <code>media</code>, <code>path_alias</code>, <code>url_sq</code>, <code>url_t</code>, <code>url_s</code>, <code>url_q</code>, <code>url_m</code>, <code>url_n</code>, <code>url_z</code>, <code>url_c</code>, <code>url_l</code>, <code>url_o</code> */
@property (nonatomic, strong) NSString *extras;

/* Number of photos to return per page. If this argument is omitted, it defaults to 100. The maximum allowed value is 500. */
@property (nonatomic, strong) NSString *per_page;

/* The page of results to return. If this argument is omitted, it defaults to 1. */
@property (nonatomic, strong) NSString *page;


@end