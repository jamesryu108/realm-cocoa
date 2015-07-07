////////////////////////////////////////////////////////////////////////////
//
// Copyright 2014 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

@interface NSTask (LaunchAdditions)

/**
 Create task and launch synchronously with string from standard output
 
 @param path          Path of task to be executed
 @param args          Arguments to bundle with task command
 @param directoryPath Current directory path to execute task (optional)
 @param output        Output as NSString from Standard output pipe
 
 @return Launched Task
 */
+ (NSTask *)launchedTaskSynchonouslyWithPath:(NSString *)path arguments:(NSArray *)args inCurrentDirectoryPath:(NSString*)directoryPath standardOutput:(NSString* __autoreleasing *)output;

@end
