# Lecture 9


## Observer Motivation
- Observer motivation can be used to help different systems interact with each other
	- for example if a elevator is traveling it needs to know when to open and close the doors

The **The Observer process** focuses on requests and on sending alerts between systems and sending requests between systems
	$\rightarrow$ The subject will tell all of the observers that something has happened when a state change in the subject has happened $\rightarrow$ means it will notify observers and they will react accordingly to state change/notification
	$\rightarrow$  all the observers should need to do is to register the specific alert(notice)

**EX:**
	```python
	def Tick():
		if (tick.happens()):
			Notify()
		```
## Observer Consequences
### Abstract coupling
- a subject only knows that it has a collection of observers
- "Coupling in abstract and minimal"

### Broadcast Communication
- subject does not specify the reciever in its notification, the request is autimatically broadcast to all the observers of the subject

### Observer Dependencies
- many observer may depend on the same subject without knowing that
- if the subject fails to notify, multiple observers systems can fail as a result

## Observer Implementation
### Mapping subject to Observers
- subects keep track of observers
-  use an external object to maintain mapping
### Triggering Update
- can be inefficient for the subject because it must update all the observers
- is efficient for the observers because all they need to do is update when the subject notifies it too
### Dangling references in observers
- if we remove a subject with a bunch of observers, what would replace that subject for the observers
- it is to note that most observers have more than 1 subject 

## Assignment 2 rubric
for more details see [[lecture7]] and [[lecture6]]
- The Graders should be able to see the use cases and see it relation to the diagrams by using the traceability matrix 
- https://brightspace.carleton.ca/d2l/le/content/143798/viewContent/2892929/View 
-  https://brightspace.carleton.ca/d2l/le/content/143798/viewContent/2892929/View
![alt text](/Screenshot_196.png)
#A2 