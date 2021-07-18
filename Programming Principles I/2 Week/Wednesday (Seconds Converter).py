# [%] equal divide
# [//] equal remainder
#sph = seconds per hour
#spm = seconds per minute



sph = 3600
spm = 60

total_seconds = int(input("Enter the total number of seconds: "))
hours = total_seconds % sph
minutes = (total_seconds % sph) // spm
seconds_left = total_seconds % spm

print(str(total_seconds) + " seconds = " + str(hours) + " hours, " + str(minutes) + " minutes, " + str(seconds_left) + " seconds ")
