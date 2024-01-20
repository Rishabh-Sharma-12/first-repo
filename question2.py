class Student:
    def __init__(self, name, major):
        self.name = name
        self.major = major
        
    def display_info(self):
        print("Name:", self.name)
        print("Major:", self.major)

class GraduateStudent(Student):
    def __init__(self, name, major, thesis_topic):
        super().__init__(name, major)
        self.thesis_topic = thesis_topic
        
    def display_info(self):
        super().display_info()
        print("Thesis Topic:", self.thesis_topic)
# Create a Student object and call its display method
student = Student("Sarthak Jain", "Computer Science")
student.display_info()

# Create a GraduateStudent object and call its display method
grad_student = GraduateStudent("Jane", "Architecture", "infrastructure")
grad_student.display_info()
