//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDKServiceConnection;
@protocol MDKAFCServiceDelegate;

@interface MDKAFCService : NSObject
{
    MDKServiceConnection *mServiceConnection;
    id <MDKAFCServiceDelegate> _delegate;
    struct __AFCConnection *_connectionRef;
}

@property struct __AFCConnection *connectionRef; // @synthesize connectionRef=_connectionRef;
@property __weak id <MDKAFCServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)delegateDidInvalidate;
- (void)delegateDidCompleteOperation:(id)arg1;
- (id)description;
- (BOOL)processOperationsWithTimeoutInterval:(double)arg1 error:(id *)arg2;
- (BOOL)processOperation:(id)arg1 timeoutInterval:(double)arg2 error:(id *)arg3;
- (BOOL)submitOperation:(id)arg1 error:(id *)arg2;
- (void)removeFromeRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithServiceConnection:(id)arg1;
- (id)initWithConnectionRef:(struct __AFCConnection *)arg1;
@property double timeoutInterval;
@property(readonly, getter=isValid) BOOL valid;

@end

