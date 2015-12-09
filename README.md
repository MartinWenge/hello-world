# hello-world
learning and testing repo

This repo is used to test effective branching and working tactics. The first try is the implementation of the following branching model:
http://nvie.com/posts/a-successful-git-branching-model/

When applying a new branching model create an other series of branches.

## Branching model
1. all changes are done in branche develop
2. when making a fast bugfix use a branch named hotfix-... and push this directly to master, adding a x.x.+1 to the version number
3. when adding a completely new peace of code or functionality create a feature-... branch cloning the developement branch
4. before pushing develop to master create a release-... branch to test and fix the changes before merging with master

So we have 5 types of branches: master (1x), develop(1x), hotfix-... , feature-..., release-...
