# Environ

Компонента для получения значений переменных окружения.

Компонента реализована на базе шаблона <https://github.com/Infactum/addin-template>

## Подготовка

```cmd
cmake --no-warn-unused-cli -H%CD% -B%CD%\build -G "Visual Studio 16 2019" -T host=x64 -A x64
```

## Сборка

```cmd
cmake --build build --config Release --target Environ
```

## Использование

```bsl
Cреда = Новый ("AddIn.Namespace.Environ");
Cреда.Получить("PATH");
```
