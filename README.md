# Mechanic

On SWG:BS a new profession has been implemented: Mechanic.
Mechanic is a speeder-crafting profession which can craft a total of 13 landspeeders and speederbikes, and it can be obtained after master artisan. Furthermore, mechanics can alter the condition, speed, acceleration, and handling of the speeders through 15 new components granted throughout the profession. A few components also increase the resistance of the speeder. More speeders and components are planned to be added through quests and loot.

![A showcase of the new crafting options](https://imgur.com/nVsNYjt.jpg)

It works much akin to WS and AS, where the component stats gets added to the enhancement modules, which then in turn gets added to the vehicle. You are able to experiment on relevant stats at each step, and each speeder will take a different number (1-3) of enhancement modules, but you're not limited in how many same-type enhancement modules you can add.

A .tre file is required if you wish to test out the profession, which can be found here: https://megafile.cc/d/6BlD/mechanic

The mountCommand has been modified to allow the new modifiers to work, as well as the vehicleDeedImplementation to allow the stats to show up on the deeds. Trainers have been added to the world and to the recruitSkillTrainerCommand. Beyond that it's mostly .tre work and adding the schematics to the server.

If there are any questions or suggestions please feel free to message me on discord **@TheTinyPebble#7645**

TODO: 
- Customization options for all speeders.
- Make the vehicles compatible with Halyns multi-passenger.
- The AV-21 power converter (from the Corvette) currently doesn't do anything. Either remove it or include it in the AV-21 draft schematic
- The jetpack is still a deed from the reward, this should most likely be a schematic instead. Jetpack should also be updated to the new crafting system.
- The flash speeder is still a veteran reward, should be removed.
- Experience and crafting timers haven't been properly adjusted yet.