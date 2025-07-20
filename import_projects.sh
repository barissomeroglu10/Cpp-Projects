#!/bin/bash

GITHUB_USER="barissomeroglu10"

while read repo; do
  echo "📦 Importing $repo..."

  # Add remote
  git remote add $repo git@github.com:$GITHUB_USER/$repo.git
  git fetch $repo

  # Detect default branch (main or master)
  DEFAULT_BRANCH=$(git remote show $repo | sed -n '/HEAD branch/s/.*: //p')

  echo "🔍 Using branch: $DEFAULT_BRANCH"

  # Add subtree using detected branch
  git subtree add --prefix=$repo $repo/$DEFAULT_BRANCH --squash
  git remote remove $repo

  echo "✅ Done: $repo"
  echo
done < projects.txt
