[![Build Status](https://travis-ci.org/bihealth/ansible-role-irods-server.svg?branch=master)](https://travis-ci.org/bihealth/ansible-role-irods-server)

# iRODS Server

Setup of an iRODS catalogue or resource server.

## Requirements

A PostgreSQL server (not setup with this role).

## Role Variables

See `defaults/main.yml` for all role variables and their documentation.

## Dependencies

- `bihealth.ssl_certs`
- `bihealth.postgres_client`
- `pieterlexis.json_file`

## Example Playbook

```yaml
- hosts: servers
  vars:
    # bihealth.ssl_certs ------------------------------------------------------
    ssl_certs_certs:
      - name: irods.example.com
    # bihealth.postgres_client ------------------------------------------------
    postgres_client_host: postgres.example.com
    postgres_client_db: irods-example
    postgres_client_user: irods-example
    postgres_client_password: irods-example
    # bihealth.irods_server ---------------------------------------------------
    irods_zone_name: exampleZone
    irods_password_salt: password_salt
    irods_negotiation_key: 12345678901234567890123456789012  # 32 bytes
    irods_zone_key: zone_key
    irods_control_plane_key: 12345678901234567890123456789012  # 32 bytes
    irods_rods_password: rods_password
  roles:
    - role: ansible-role-irods-server
```

## Open Issues

- Fedora disabled for now, issues with test build and `geerlingguy.postgres` which is used in the tests.
- Debian disabled for now, `libssl1` is missing.

## License

MIT

## Author Information

- Manuel Holtgrewe

Created with love at [Core Unit Bioinformatics (CUBI), Berlin Institute of Health (BIH)](https://www.cubi.bihealth.org).
