let tests = [Tutorial.tests, Basics.tests];

List.iter(f => f(), tests);

print_string({js|Congratulations, you have completed all the tests 🙌|js});