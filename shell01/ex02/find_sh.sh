find . -type f -name "*.sh" | grep -o '[^/]*$' | rev | cut -c4- | rev
