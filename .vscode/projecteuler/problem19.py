def count_sundays_manually():
    # Days in each month (January to December)
    # index 0 is placeholder for alignment (month 1 = Jan)
    days_in_months = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    
    # January 1, 1901 was a Tuesday
    # Monday = 1, Tuesday = 2, ..., Saturday = 6, Sunday = 0
    current_weekday = 2 
    sunday_count = 0
    
    for year in range(1901, 2001):
        # Update February for Leap Years
        if year % 4 == 0: # Note: 2000 is divisible by 400, so it's a leap year
            days_in_months[2] = 29
        else:
            days_in_months[2] = 28
            
        for month in range(1, 13):
            # If the 1st of the month is a Sunday, increment count
            if current_weekday == 0:
                sunday_count += 1
            
            # Shift the weekday forward by the number of days in this month
            current_weekday = (current_weekday + days_in_months[month]) % 7
            
    return sunday_count

print(f"Total Sundays on the 1st of the month: {count_sundays_manually()}")

