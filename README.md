# secureType

Write stdin as keyboard events after a specified delay. Good for secure password typing, as an alternative to a clipboard.

Example usage:
```bash
pass show repos/github | secureType 2
```

# Dependencies

libxdo-dev (for xdo.h)

Run

```bash
sudo apt-get install libxdo-dev
```
