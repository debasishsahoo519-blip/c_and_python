# January 1, 1901 is a Tuesday (Day 2)
current_day = 2  
sunday_count = 0

# Loop through every year from 1901 to 2000
for year in range(1901, 2001):
    
    # Check if the year is a leap year using math rules
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        feb_days = 29
    else:
        feb_days = 28
        
    # List of month lengths for the current year
    months = [31, feb_days, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    
    # Loop through each month
    for days_in_month in months:
        # If the 1st of the current month is a Sunday (0), increment count
        if current_day == 0:
            sunday_count += 1
            
        # Mathematically shift the day pointer to the 1st of the NEXT month
        current_day = (current_day + days_in_month) % 7

print(sunday_count)
