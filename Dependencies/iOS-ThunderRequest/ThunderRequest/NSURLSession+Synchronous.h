//
//  NSURLSession+Synchronous.h
//  ThunderRequest
//
//  Created by Simon Mitchell on 04/11/2015.
//  Copyright © 2015 threesidedcube. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Adds synchronous methods to NSURLSession through the use of dispatch semaphores
 */
@interface NSURLSession (Synchronous)

/**
 @method sendSynchronousDataTaskWithRequest:returningResponse:error:
 @abstract Performs a synchronous load of the given request, returning an NSURLResponse in the given out parameter.
 @discussion A synchronous load for the given request is built on top of the asynchronous loading code made available by the class. The calling thread is blocked while the asynchronous loading system performs the URL load on a thread spawned specifically for this load request. No special threading or run loop configuration is necessary in the calling thread in order to perform a synchronous load. For instance, the calling thread need not be running its run loop.
 @param request The request to load.
 @param response An out parameter which is filled in with the response generated by performing the load.
 @param error Out parameter (may be NULL) used if an error occurs while processing the request. Will not be modified if the load succeeds.
 @result The content of the URL resulting from performing the load, or nil if the load failed.
 */
- (nullable NSData *)sendSynchronousDataTaskWithRequest:(NSURLRequest * __nonnull)request returningResponse:(NSURLResponse * __nullable * __nullable)response error:(NSError * __nullable * __nullable)error;

/**
 @method sendSynchronousDataTaskWithURL:returningResponse:error:
 @abstract Performs a synchronous load of the given request, returning an NSURLResponse in the given out parameter.
 @discussion A synchronous load for the given request is built on top of the asynchronous loading code made available by the class. The calling thread is blocked while the asynchronous loading system performs the URL load on a thread spawned specifically for this load request. No special threading or run loop configuration is necessary in the calling thread in order to perform a synchronous load. For instance, the calling thread need not be running its run loop.
 @param url The url to load.
 @param response An out parameter which is filled in with the response generated by performing the load.
 @param error Out parameter (may be NULL) used if an error occurs while processing the request. Will not be modified if the load succeeds.
 @result The content of the URL resulting from performing the load, or nil if the load failed.
 */
- (nullable NSData *)sendSynchronousDataTaskWithURL:(NSURL * __nonnull)url returningResponse:(NSURLResponse * __nullable * __nullable)response error:(NSError * __nullable * __nullable)error;

/**
 @method sendSynchronousUploadTaskWithRequest:fromFile:returningResponse:error:
 @abstract Performs a synchronous load of the given request, returning an NSURLResponse in the given out parameter.
 @discussion A synchronous load for the given request is built on top of the asynchronous loading code made available by the class. The calling thread is blocked while the asynchronous loading system performs the URL load on a thread spawned specifically for this load request. No special threading or run loop configuration is necessary in the calling thread in order to perform a synchronous load. For instance, the calling thread need not be running its run loop.
 @param request The request to load.
 @param fileURL The url of the file to upload
 @param response An out parameter which is filled in with the response generated by performing the load.
 @param error Out parameter (may be NULL) used if an error occurs while processing the request. Will not be modified if the load succeeds.
 @result The content of the URL resulting from performing the load, or nil if the load failed.
 */
- (nullable NSData *)sendSynchronousUploadTaskWithRequest:(NSURLRequest * __nonnull)request fromFile:(NSURL * __nonnull)fileURL returningResponse:(NSURLResponse * __nullable * __nullable)response error:(NSError * __nullable * __nullable)error;

/**
 @method sendSynchronousUploadTaskWithRequest:fromFile:returningResponse:error:
 @abstract Performs a synchronous load of the given request, returning an NSURLResponse in the given out parameter.
 @discussion A synchronous load for the given request is built on top of the asynchronous loading code made available by the class. The calling thread is blocked while the asynchronous loading system performs the URL load on a thread spawned specifically for this load request. No special threading or run loop configuration is necessary in the calling thread in order to perform a synchronous load. For instance, the calling thread need not be running its run loop.
 @param request The request to load.
 @param data The data to upload
 @param response An out parameter which is filled in with the response generated by performing the load.
 @param error Out parameter (may be NULL) used if an error occurs while processing the request. Will not be modified if the load succeeds.
 @result The content of the URL resulting from performing the load, or nil if the load failed.
 */
- (nullable NSData *)sendSynchronousUploadTaskWithRequest:(NSURLRequest * __nonnull)request fromData:(NSData * __nonnull)data returningResponse:(NSURLResponse * __nullable * __nullable)response error:(NSError * __nullable * __nullable)error;

/**
 @method sendSynchronousDownloadTaskWithRequest:returningResponse:error:
 @abstract Performs a synchronous load of the given request, returning an NSURLResponse in the given out parameter.
 @discussion A synchronous load for the given request is built on top of the asynchronous loading code made available by the class. The calling thread is blocked while the asynchronous loading system performs the URL load on a thread spawned specifically for this load request. No special threading or run loop configuration is necessary in the calling thread in order to perform a synchronous load. For instance, the calling thread need not be running its run loop.
 @param request The request to load.
 @param response An out parameter which is filled in with the response generated by performing the load.
 @param error Out parameter (may be NULL) used if an error occurs while processing the request. Will not be modified if the load succeeds.
 @result The download location resulting from performing the download, or nil if the load failed.
 */
- (nullable NSURL *)sendSynchronousDownloadTaskWithRequest:(NSURLRequest * __nonnull)request returningResponse:(NSURLResponse * __nullable * __nullable)response error:(NSError * __nullable * __nullable)error;

/**
 @method sendSynchronousDownloadTaskWithURL:returningResponse:error:
 @abstract Performs a synchronous load of the given request, returning an NSURLResponse in the given out parameter.
 @discussion A synchronous load for the given request is built on top of the asynchronous loading code made available by the class. The calling thread is blocked while the asynchronous loading system performs the URL load on a thread spawned specifically for this load request. No special threading or run loop configuration is necessary in the calling thread in order to perform a synchronous load. For instance, the calling thread need not be running its run loop.
 @param url The url to download.
 @param response An out parameter which is filled in with the response generated by performing the load.
 @param error Out parameter (may be NULL) used if an error occurs while processing the request. Will not be modified if the load succeeds.
 @result The download location resulting from performing the download, or nil if the load failed.
 */
- (nullable NSURL *)sendSynchronousDownloadTaskWithURL:(NSURL * __nonnull)url returningResponse:(NSURLResponse * __nullable * __nullable)response error:(NSError * __nullable * __nullable)error;

/**
 @method sendSynchronousDownloadTaskWithResumeData:returningResponse:error:
 @abstract Performs a synchronous load of the given request, returning an NSURLResponse in the given out parameter.
 @discussion A synchronous load for the given request is built on top of the asynchronous loading code made available by the class. The calling thread is blocked while the asynchronous loading system performs the URL load on a thread spawned specifically for this load request. No special threading or run loop configuration is necessary in the calling thread in order to perform a synchronous load. For instance, the calling thread need not be running its run loop.
 @param resumeData The data to resume downloading from.
 @param response An out parameter which is filled in with the response generated by performing the load.
 @param error Out parameter (may be NULL) used if an error occurs while processing the request. Will not be modified if the load succeeds.
 @result The download location resulting from performing the download, or nil if the load failed.
 */
- (nullable NSURL *)sendSynchronousDownloadTaskWithResumeData:(NSData * __nonnull)resumeData returningResponse:(NSURLResponse * __nullable * __nullable)response error:(NSError * __nullable * __nullable)error;

@end
