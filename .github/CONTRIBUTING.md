# Contributing to Hello Worlds

Thank you for considering contributing to our Hello Worlds project! We appreciate your interest and effort in helping us create "hello, world" programs in various programming languages.

## How to Contribute

1. **Fork the Repository**: Start by forking the repository to your GitHub account.
2. **Clone the Repository**: Clone your forked repository to your local machine.
    ```sh
    git clone https://github.com/your-username/hello-worlds.git
    cd hello-worlds
    ```
3. **Create a New Branch**: Create a new branch for your contribution.
    ```sh
    git checkout -b new-language-branch
    ```
4. **Add Your Implementation**: Add your "hello, world" implementation in the appropriate directory or create a new directory if the language is not yet represented. Follow the guidelines below:
    - The script should print `hello, world` (lowercase, no punctuation, in the style of the first hello world implementation in the B programming language).
    - Command line implementations only, unless explicitly impossible due to language constraints.
    - Avoid using third-party libraries or packages unless absolutely necessary. Use standard libraries whenever possible.
    - Include an appropriate `Makefile` to build the source (where applicable).
    - Update the `.github/workflows/test.yml` file to include your new language in the list of languages to test, making sure to add any applicable dependencies. Ensure that your implementation passes the tests.
5. **Commit Your Changes**: Commit your changes with a meaningful commit message.
    ```sh
    git add .
    git commit -m "Add hello world in [language]"
    ```
6. **Push to Your Fork**: Push your changes to your forked repository.
    ```sh
    git push origin new-language-branch
    ```
7. **Submit a Pull Request**: Go to the original repository on GitHub and submit a pull request from your forked repository.

## Guidelines

- Ensure your code follows the project's coding style and guidelines.
- Test your implementation to make sure it works as expected.
- If you see something that can be improved upon, please let us know or submit a pull request with the changes yourself.
- Be respectful and considerate in your communications and contributions.

### A Note on AI-Created Submissions

While we welcome contributions generated with the assistance of AI tools, we ask that you:

- Review and understand the code before submitting it.
- Ensure that the code adheres to our guidelines and coding standards.
- Test the code thoroughly to confirm it works as expected.
- Clearly indicate in your pull request that the submission was created with the help of AI.

## Resources

Before you get started, you might find the following resources helpful:

- [Rosetta Code](http://rosettacode.org/)
- [Esolangs](https://esolangs.org/)
- [Stack Overflow](http://stackoverflow.com/)

## Code of Conduct

By participating in this project, you agree to abide by our [Code of Conduct](CODE_OF_CONDUCT.md).

Thank you for your contributions!

Happy coding!