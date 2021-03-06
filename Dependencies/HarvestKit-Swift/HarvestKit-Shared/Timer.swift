//
//  Timer.swift
//  HarvestKit
//
//  Created by Matthew Cheetham on 19/11/2015.
//  Copyright © 2015 Matt Cheetham. All rights reserved.
//

import Foundation

/**
A struct representation of a timer entry in the harvest system
*/
public struct Timer {

    /**
     A unique identifier for this timer
     */
    public var identifier: Int?
    
    /**
    Any notes the user has attatched to the entry
    */
    public var notes: String?
    
    /**
    The name of the client that the timer belongs to
    */
    public var clientName: String?
    
    /**
    The unique identifier for the project
    */
    public var projectIdentifier: String?
    
    /**
    The name of the project that the timer falls under
    */
    public var projectName: String?
    
    /**
     The unique identifier for the task
     */
    public var taskIdentifier: String?
    /**
     
    The name of the task that the timer falls under
    */
    public var taskName: String?
    
    /**
     A boolean to indicate whether or not the timer is currently active.
     */
    public var active = false
    
    /**
    The number of hours that the Timer has been running for
    */
    public var hours: Double?
    
    /**
    The number of hours that the Timer was manually adjusted to be running to.
    If the user has the timer running for an hour but then manually edits it to be 2.5 hours this property will show 1.5 hours.
    */
    public var hoursWithoutTimer: Double?

    public var externalReference: Dictionary<String, Any> = [:]

    public var spentAt: Date?
    
    /**
    Standard initialiser
    */
    public init() {}
    
    internal init?(dictionary: [String: AnyObject]) {
        
        identifier = dictionary["id"] as? Int
        notes = dictionary["notes"] as? String
        clientName = dictionary["client"] as? String
        projectIdentifier = dictionary["project_id"] as? String
        projectName = dictionary["project"] as? String
        taskIdentifier = dictionary["task_id"] as? String
        taskName = dictionary["task"] as? String
        hours = dictionary["hours"] as? Double
        hoursWithoutTimer = dictionary["hours_without_timer"] as? Double
        
        if let _ = dictionary["timer_started_at"] as? String {
            active = true
        }

        if let externalReference = dictionary["external_ref"] as? [String: Any] {
            self.externalReference = externalReference
        }

        if let spentAtString = dictionary["spent_at"] as? String, let spentAt = Timer.dateOnlyFormatter.date(from: spentAtString) {
            self.spentAt = spentAt
        }

    }

    public static var dateOnlyFormatter: DateFormatter = {
        let formatter = DateFormatter()
        formatter.locale = Locale(identifier: "en_US_POSIX")
        formatter.dateFormat = "yyyy'-'M'-'dd"
        formatter.timeZone = TimeZone(secondsFromGMT: 0)
        return formatter
    }()

}
