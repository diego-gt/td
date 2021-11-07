# Syntax for td

## config files
You can configure `td` to listen in a project directory and pickup a configuration from the root of the project.
These files should have an `.td` extension.

## Variables
You will have access to manage these variables for each task registered:
- Author `td.author`
- Title `td.task_title`
- Description (optional) `td.task_desc`
- Date added `td.date_added`
- Planned completion date `td.planned_completion`
- Project `td.project`
- Status `td.status`

You can set default values for these in the config file:

```
td.author = Diego Garza
td.task_title = TODO
td.task_desc = TODO
td.planned_completion = td.date_added + 2 days
td.status = In progress
```

# Task status
You can set the status of the tasks to these:
- Open
- In progress
- On hold
- Further research needed
- No longer required
- Completed

