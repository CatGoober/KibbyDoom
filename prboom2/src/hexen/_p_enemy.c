//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 1993-2008 Raven Software
// Copyright(C) 2005-2014 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//

//============================================================================
// Demon AI
//============================================================================

//
// A_DemonAttack1 (melee)
//
void A_DemonAttack1(mobj_t * actor)
{
    if (P_CheckMeleeRange(actor))
    {
        P_DamageMobj(actor->target, actor, actor, HITDICE(2));
    }
}


//
// A_DemonAttack2 (missile)
//
void A_DemonAttack2(mobj_t * actor)
{
    mobj_t *mo;
    int fireBall;

    if (actor->type == HEXEN_MT_DEMON)
    {
        fireBall = HEXEN_MT_DEMONFX1;
    }
    else
    {
        fireBall = HEXEN_MT_DEMON2FX1;
    }
    mo = P_SpawnMissile(actor, actor->target, fireBall);
    if (mo)
    {
        mo->z += 30 * FRACUNIT;
        S_StartSound(actor, hexen_sfx_demon_missile_fire);
    }
}

//
// A_DemonDeath
//

void A_DemonDeath(mobj_t * actor)
{
    mobj_t *mo;
    angle_t angle;

    mo = P_SpawnMobj(actor->x, actor->y, actor->z + 45 * FRACUNIT,
                     HEXEN_MT_DEMONCHUNK1);
    if (mo)
    {
        angle = actor->angle + ANG90;
        mo->momz = 8 * FRACUNIT;
        mo->momx = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finecosine[angle >> ANGLETOFINESHIFT]);
        mo->momy = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finesine[angle >> ANGLETOFINESHIFT]);
        mo->target = actor;
    }
    mo = P_SpawnMobj(actor->x, actor->y, actor->z + 45 * FRACUNIT,
                     HEXEN_MT_DEMONCHUNK2);
    if (mo)
    {
        angle = actor->angle - ANG90;
        mo->momz = 8 * FRACUNIT;
        mo->momx = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finecosine[angle >> ANGLETOFINESHIFT]);
        mo->momy = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finesine[angle >> ANGLETOFINESHIFT]);
        mo->target = actor;
    }
    mo = P_SpawnMobj(actor->x, actor->y, actor->z + 45 * FRACUNIT,
                     HEXEN_MT_DEMONCHUNK3);
    if (mo)
    {
        angle = actor->angle - ANG90;
        mo->momz = 8 * FRACUNIT;
        mo->momx = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finecosine[angle >> ANGLETOFINESHIFT]);
        mo->momy = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finesine[angle >> ANGLETOFINESHIFT]);
        mo->target = actor;
    }
    mo = P_SpawnMobj(actor->x, actor->y, actor->z + 45 * FRACUNIT,
                     HEXEN_MT_DEMONCHUNK4);
    if (mo)
    {
        angle = actor->angle - ANG90;
        mo->momz = 8 * FRACUNIT;
        mo->momx = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finecosine[angle >> ANGLETOFINESHIFT]);
        mo->momy = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finesine[angle >> ANGLETOFINESHIFT]);
        mo->target = actor;
    }
    mo = P_SpawnMobj(actor->x, actor->y, actor->z + 45 * FRACUNIT,
                     HEXEN_MT_DEMONCHUNK5);
    if (mo)
    {
        angle = actor->angle - ANG90;
        mo->momz = 8 * FRACUNIT;
        mo->momx = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finecosine[angle >> ANGLETOFINESHIFT]);
        mo->momy = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finesine[angle >> ANGLETOFINESHIFT]);
        mo->target = actor;
    }
}

//===========================================================================
//
// A_Demon2Death
//
//===========================================================================

void A_Demon2Death(mobj_t * actor)
{
    mobj_t *mo;
    angle_t angle;

    mo = P_SpawnMobj(actor->x, actor->y, actor->z + 45 * FRACUNIT,
                     HEXEN_MT_DEMON2CHUNK1);
    if (mo)
    {
        angle = actor->angle + ANG90;
        mo->momz = 8 * FRACUNIT;
        mo->momx = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finecosine[angle >> ANGLETOFINESHIFT]);
        mo->momy = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finesine[angle >> ANGLETOFINESHIFT]);
        mo->target = actor;
    }
    mo = P_SpawnMobj(actor->x, actor->y, actor->z + 45 * FRACUNIT,
                     HEXEN_MT_DEMON2CHUNK2);
    if (mo)
    {
        angle = actor->angle - ANG90;
        mo->momz = 8 * FRACUNIT;
        mo->momx = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finecosine[angle >> ANGLETOFINESHIFT]);
        mo->momy = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finesine[angle >> ANGLETOFINESHIFT]);
        mo->target = actor;
    }
    mo = P_SpawnMobj(actor->x, actor->y, actor->z + 45 * FRACUNIT,
                     HEXEN_MT_DEMON2CHUNK3);
    if (mo)
    {
        angle = actor->angle - ANG90;
        mo->momz = 8 * FRACUNIT;
        mo->momx = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finecosine[angle >> ANGLETOFINESHIFT]);
        mo->momy = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finesine[angle >> ANGLETOFINESHIFT]);
        mo->target = actor;
    }
    mo = P_SpawnMobj(actor->x, actor->y, actor->z + 45 * FRACUNIT,
                     HEXEN_MT_DEMON2CHUNK4);
    if (mo)
    {
        angle = actor->angle - ANG90;
        mo->momz = 8 * FRACUNIT;
        mo->momx = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finecosine[angle >> ANGLETOFINESHIFT]);
        mo->momy = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finesine[angle >> ANGLETOFINESHIFT]);
        mo->target = actor;
    }
    mo = P_SpawnMobj(actor->x, actor->y, actor->z + 45 * FRACUNIT,
                     HEXEN_MT_DEMON2CHUNK5);
    if (mo)
    {
        angle = actor->angle - ANG90;
        mo->momz = 8 * FRACUNIT;
        mo->momx = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finecosine[angle >> ANGLETOFINESHIFT]);
        mo->momy = FixedMul((P_Random(pr_hexen) << 10) + FRACUNIT,
                            finesine[angle >> ANGLETOFINESHIFT]);
        mo->target = actor;
    }
}



//
// A_SinkMobj
// Sink a mobj incrementally into the floor
//

dboolean A_SinkMobj(mobj_t * actor)
{
    if (actor->floorclip < actor->info->height)
    {
        switch (actor->type)
        {
            case HEXEN_MT_THRUSTFLOOR_DOWN:
            case HEXEN_MT_THRUSTFLOOR_UP:
                actor->floorclip += 6 * FRACUNIT;
                break;
            default:
                actor->floorclip += FRACUNIT;
                break;
        }
        return false;
    }
    return true;
}

//
// A_RaiseMobj
// Raise a mobj incrementally from the floor to
//

dboolean A_RaiseMobj(mobj_t * actor)
{
    int done = true;

    // Raise a mobj from the ground
    if (actor->floorclip > 0)
    {
        switch (actor->type)
        {
            case HEXEN_MT_WRAITHB:
                actor->floorclip -= 2 * FRACUNIT;
                break;
            case HEXEN_MT_THRUSTFLOOR_DOWN:
            case HEXEN_MT_THRUSTFLOOR_UP:
                actor->floorclip -= actor->special2.i * FRACUNIT;
                break;
            default:
                actor->floorclip -= 2 * FRACUNIT;
                break;
        }
        if (actor->floorclip <= 0)
        {
            actor->floorclip = 0;
            done = true;
        }
        else
        {
            done = false;
        }
    }
    return done;                // Reached target height
}


//============================================================================
// Wraith Variables
//
//      special1                                Internal index into floatbob
//      special2
//============================================================================

//
// A_WraithInit
//

void A_WraithInit(mobj_t * actor)
{
    actor->z += 48 << FRACBITS;
    actor->special1.i = 0;        // index into floatbob
}

void A_WraithRaiseInit(mobj_t * actor)
{
    actor->flags2 &= ~MF2_DONTDRAW;
    actor->flags2 &= ~MF2_NONSHOOTABLE;
    actor->flags |= MF_SHOOTABLE | MF_SOLID;
    actor->floorclip = actor->info->height;
}

void A_WraithRaise(mobj_t * actor)
{
    if (A_RaiseMobj(actor))
    {
        // Reached it's target height
        P_SetMobjState(actor, HEXEN_S_WRAITH_CHASE1);
    }

    P_SpawnDirt(actor, actor->radius);
}


void A_WraithMelee(mobj_t * actor)
{
    int amount;

    // Steal health from target and give to player
    if (P_CheckMeleeRange(actor) && (P_Random(pr_hexen) < 220))
    {
        amount = HITDICE(2);
        P_DamageMobj(actor->target, actor, actor, amount);
        actor->health += amount;
    }
}

void A_WraithMissile(mobj_t * actor)
{
    mobj_t *mo;

    mo = P_SpawnMissile(actor, actor->target, HEXEN_MT_WRAITHFX1);
    if (mo)
    {
        S_StartSound(actor, hexen_sfx_wraith_missile_fire);
    }
}


//
// A_WraithFX2 - spawns sparkle tail of missile
//

void A_WraithFX2(mobj_t * actor)
{
    mobj_t *mo;
    angle_t angle;
    int i;

    for (i = 0; i < 2; i++)
    {
        mo = P_SpawnMobj(actor->x, actor->y, actor->z, HEXEN_MT_WRAITHFX2);
        if (mo)
        {
            if (P_Random(pr_hexen) < 128)
            {
                angle = actor->angle + (P_Random(pr_hexen) << 22);
            }
            else
            {
                angle = actor->angle - (P_Random(pr_hexen) << 22);
            }
            mo->momz = 0;
            mo->momx = FixedMul((P_Random(pr_hexen) << 7) + FRACUNIT,
                                finecosine[angle >> ANGLETOFINESHIFT]);
            mo->momy = FixedMul((P_Random(pr_hexen) << 7) + FRACUNIT,
                                finesine[angle >> ANGLETOFINESHIFT]);
            mo->target = actor;
            mo->floorclip = 10 * FRACUNIT;
        }
    }
}


// Spawn an FX3 around the actor during attacks
void A_WraithFX3(mobj_t * actor)
{
    mobj_t *mo;
    int numdropped = P_Random(pr_hexen) % 15;
    int i;

    for (i = 0; i < numdropped; i++)
    {
        mo = P_SpawnMobj(actor->x, actor->y, actor->z, HEXEN_MT_WRAITHFX3);
        if (mo)
        {
            mo->x += (P_Random(pr_hexen) - 128) << 11;
            mo->y += (P_Random(pr_hexen) - 128) << 11;
            mo->z += (P_Random(pr_hexen) << 10);
            mo->target = actor;
        }
    }
}

// Spawn an FX4 during movement
void A_WraithFX4(mobj_t * actor)
{
    mobj_t *mo;
    int chance = P_Random(pr_hexen);
    int spawn4, spawn5;

    if (chance < 10)
    {
        spawn4 = true;
        spawn5 = false;
    }
    else if (chance < 20)
    {
        spawn4 = false;
        spawn5 = true;
    }
    else if (chance < 25)
    {
        spawn4 = true;
        spawn5 = true;
    }
    else
    {
        spawn4 = false;
        spawn5 = false;
    }

    if (spawn4)
    {
        mo = P_SpawnMobj(actor->x, actor->y, actor->z, HEXEN_MT_WRAITHFX4);
        if (mo)
        {
            mo->x += (P_Random(pr_hexen) - 128) << 12;
            mo->y += (P_Random(pr_hexen) - 128) << 12;
            mo->z += (P_Random(pr_hexen) << 10);
            mo->target = actor;
        }
    }
    if (spawn5)
    {
        mo = P_SpawnMobj(actor->x, actor->y, actor->z, HEXEN_MT_WRAITHFX5);
        if (mo)
        {
            mo->x += (P_Random(pr_hexen) - 128) << 11;
            mo->y += (P_Random(pr_hexen) - 128) << 11;
            mo->z += (P_Random(pr_hexen) << 10);
            mo->target = actor;
        }
    }
}


void A_WraithLook(mobj_t * actor)
{
//      A_WraithFX4(actor);             // too expensive
    A_Look(actor);
}


void A_WraithChase(mobj_t * actor)
{
    int weaveindex = actor->special1.i;
    actor->z += FloatBobOffsets[weaveindex];
    actor->special1.i = (weaveindex + 2) & 63;
//      if (actor->floorclip > 0)
//      {
//              P_SetMobjState(actor, HEXEN_S_WRAITH_RAISE2);
//              return;
//      }
    A_Chase(actor);
    A_WraithFX4(actor);
}



//============================================================================
// Ettin AI
//============================================================================

void A_EttinAttack(mobj_t * actor)
{
    if (P_CheckMeleeRange(actor))
    {
        P_DamageMobj(actor->target, actor, actor, HITDICE(2));
    }
}


void A_DropMace(mobj_t * actor)
{
    mobj_t *mo;

    mo = P_SpawnMobj(actor->x, actor->y,
                     actor->z + (actor->height >> 1), HEXEN_MT_ETTIN_MACE);
    if (mo)
    {
        mo->momx = (P_Random(pr_hexen) - 128) << 11;
        mo->momy = (P_Random(pr_hexen) - 128) << 11;
        mo->momz = FRACUNIT * 10 + (P_Random(pr_hexen) << 10);
        mo->target = actor;
    }
}


//============================================================================
// Fire Demon AI
//
// special1                     index into floatbob
// special2                     whether strafing or not
//============================================================================

void A_FiredSpawnRock(mobj_t * actor)
{
    mobj_t *mo;
    int x, y, z;
    int rtype = 0;

    switch (P_Random(pr_hexen) % 5)
    {
        case 0:
            rtype = HEXEN_MT_FIREDEMON_FX1;
            break;
        case 1:
            rtype = HEXEN_MT_FIREDEMON_FX2;
            break;
        case 2:
            rtype = HEXEN_MT_FIREDEMON_FX3;
            break;
        case 3:
            rtype = HEXEN_MT_FIREDEMON_FX4;
            break;
        case 4:
            rtype = HEXEN_MT_FIREDEMON_FX5;
            break;
    }

    x = actor->x + ((P_Random(pr_hexen) - 128) << 12);
    y = actor->y + ((P_Random(pr_hexen) - 128) << 12);
    z = actor->z + ((P_Random(pr_hexen)) << 11);
    mo = P_SpawnMobj(x, y, z, rtype);
    if (mo)
    {
        mo->target = actor;
        mo->momx = (P_Random(pr_hexen) - 128) << 10;
        mo->momy = (P_Random(pr_hexen) - 128) << 10;
        mo->momz = (P_Random(pr_hexen) << 10);
        mo->special1.i = 2;       // Number bounces
    }

    // Initialize fire demon
    actor->special2.i = 0;
    actor->flags &= ~MF_JUSTATTACKED;
}

void A_FiredRocks(mobj_t * actor)
{
    A_FiredSpawnRock(actor);
    A_FiredSpawnRock(actor);
    A_FiredSpawnRock(actor);
    A_FiredSpawnRock(actor);
    A_FiredSpawnRock(actor);
}

void A_FiredAttack(mobj_t * actor)
{
    mobj_t *mo;
    mo = P_SpawnMissile(actor, actor->target, HEXEN_MT_FIREDEMON_FX6);
    if (mo)
        S_StartSound(actor, hexen_sfx_fired_attack);
}

void A_SmBounce(mobj_t * actor)
{
    // give some more momentum (x,y,&z)
    actor->z = actor->floorz + FRACUNIT;
    actor->momz = (2 * FRACUNIT) + (P_Random(pr_hexen) << 10);
    actor->momx = P_Random(pr_hexen) % 3 << FRACBITS;
    actor->momy = P_Random(pr_hexen) % 3 << FRACBITS;
}


#define FIREDEMON_ATTACK_RANGE	64*8*FRACUNIT

void A_FiredChase(mobj_t * actor)
{
    int weaveindex = actor->special1.i;
    mobj_t *target = actor->target;
    angle_t ang;
    fixed_t dist;

    if (actor->reactiontime)
        actor->reactiontime--;
    if (actor->threshold)
        actor->threshold--;

    // Float up and down
    actor->z += FloatBobOffsets[weaveindex];
    actor->special1.i = (weaveindex + 2) & 63;

    // Insure it stays above certain height
    if (actor->z < actor->floorz + (64 * FRACUNIT))
    {
        actor->z += 2 * FRACUNIT;
    }

    if (!actor->target || !(actor->target->flags & MF_SHOOTABLE))
    {                           // Invalid target
        P_LookForPlayers(actor, true);
        return;
    }

    // Strafe
    if (actor->special2.i > 0)
    {
        actor->special2.i--;
    }
    else
    {
        actor->special2.i = 0;
        actor->momx = actor->momy = 0;
        dist = P_AproxDistance(actor->x - target->x, actor->y - target->y);
        if (dist < FIREDEMON_ATTACK_RANGE)
        {
            if (P_Random(pr_hexen) < 30)
            {
                ang =
                    R_PointToAngle2(actor->x, actor->y, target->x, target->y);
                if (P_Random(pr_hexen) < 128)
                    ang += ANG90;
                else
                    ang -= ANG90;
                ang >>= ANGLETOFINESHIFT;
                actor->momx = FixedMul(8 * FRACUNIT, finecosine[ang]);
                actor->momy = FixedMul(8 * FRACUNIT, finesine[ang]);
                actor->special2.i = 3;    // strafe time
            }
        }
    }

    FaceMovementDirection(actor);

    // Normal movement
    if (!actor->special2.i)
    {
        if (--actor->movecount < 0 || !P_Move(actor, false))
        {
            P_NewChaseDir(actor);
        }
    }

    // Do missile attack
    if (!(actor->flags & MF_JUSTATTACKED))
    {
        if (P_CheckMissileRange(actor) && (P_Random(pr_hexen) < 20))
        {
            P_SetMobjState(actor, actor->info->missilestate);
            actor->flags |= MF_JUSTATTACKED;
            return;
        }
    }
    else
    {
        actor->flags &= ~MF_JUSTATTACKED;
    }

    // make active sound
    if (actor->info->activesound && P_Random(pr_hexen) < 3)
    {
        S_StartSound(actor, actor->info->activesound);
    }
}

void A_FiredSplotch(mobj_t * actor)
{
    mobj_t *mo;

    mo = P_SpawnMobj(actor->x, actor->y, actor->z, HEXEN_MT_FIREDEMON_SPLOTCH1);
    if (mo)
    {
        mo->momx = (P_Random(pr_hexen) - 128) << 11;
        mo->momy = (P_Random(pr_hexen) - 128) << 11;
        mo->momz = FRACUNIT * 3 + (P_Random(pr_hexen) << 10);
    }
    mo = P_SpawnMobj(actor->x, actor->y, actor->z, HEXEN_MT_FIREDEMON_SPLOTCH2);
    if (mo)
    {
        mo->momx = (P_Random(pr_hexen) - 128) << 11;
        mo->momy = (P_Random(pr_hexen) - 128) << 11;
        mo->momz = FRACUNIT * 3 + (P_Random(pr_hexen) << 10);
    }
}


//============================================================================
//
// A_IceGuyLook
//
//============================================================================

void A_IceGuyLook(mobj_t * actor)
{
    fixed_t dist;
    fixed_t an;

    A_Look(actor);
    if (P_Random(pr_hexen) < 64)
    {
        dist = ((P_Random(pr_hexen) - 128) * actor->radius) >> 7;
        an = (actor->angle + ANG90) >> ANGLETOFINESHIFT;

        P_SpawnMobj(actor->x + FixedMul(dist, finecosine[an]),
                    actor->y + FixedMul(dist, finesine[an]),
                    actor->z + 60 * FRACUNIT,
                    HEXEN_MT_ICEGUY_WISP1 + (P_Random(pr_hexen) & 1));
    }
}

//============================================================================
//
// A_IceGuyChase
//
//============================================================================

void A_IceGuyChase(mobj_t * actor)
{
    fixed_t dist;
    fixed_t an;
    mobj_t *mo;

    A_Chase(actor);
    if (P_Random(pr_hexen) < 128)
    {
        dist = ((P_Random(pr_hexen) - 128) * actor->radius) >> 7;
        an = (actor->angle + ANG90) >> ANGLETOFINESHIFT;

        mo = P_SpawnMobj(actor->x + FixedMul(dist, finecosine[an]),
                         actor->y + FixedMul(dist, finesine[an]),
                         actor->z + 60 * FRACUNIT,
                         HEXEN_MT_ICEGUY_WISP1 + (P_Random(pr_hexen) & 1));
        if (mo)
        {
            mo->momx = actor->momx;
            mo->momy = actor->momy;
            mo->momz = actor->momz;
            mo->target = actor;
        }
    }
}

//============================================================================
//
// A_IceGuyAttack
//
//============================================================================

void A_IceGuyAttack(mobj_t * actor)
{
    fixed_t an;

    if (!actor->target)
    {
        return;
    }
    an = (actor->angle + ANG90) >> ANGLETOFINESHIFT;
    P_SpawnMissileXYZ(actor->x + FixedMul(actor->radius >> 1,
                                          finecosine[an]),
                      actor->y + FixedMul(actor->radius >> 1, finesine[an]),
                      actor->z + 40 * FRACUNIT, actor, actor->target,
                      HEXEN_MT_ICEGUY_FX);
    an = (actor->angle - ANG90) >> ANGLETOFINESHIFT;
    P_SpawnMissileXYZ(actor->x + FixedMul(actor->radius >> 1,
                                          finecosine[an]),
                      actor->y + FixedMul(actor->radius >> 1, finesine[an]),
                      actor->z + 40 * FRACUNIT, actor, actor->target,
                      HEXEN_MT_ICEGUY_FX);
    S_StartSound(actor, actor->info->attacksound);
}

//============================================================================
//
// A_IceGuyMissilePuff
//
//============================================================================

void A_IceGuyMissilePuff(mobj_t * actor)
{
    P_SpawnMobj(actor->x, actor->y, actor->z + 2 * FRACUNIT, HEXEN_MT_ICEFX_PUFF);
}

//============================================================================
//
// A_IceGuyDie
//
//============================================================================

void A_IceGuyDie(mobj_t * actor)
{
    void A_FreezeDeathChunks(mobj_t * actor);

    actor->momx = 0;
    actor->momy = 0;
    actor->momz = 0;
    actor->height <<= 2;
    A_FreezeDeathChunks(actor);
}

//============================================================================
//
// A_IceGuyMissileExplode
//
//============================================================================

void A_IceGuyMissileExplode(mobj_t * actor)
{
    mobj_t *mo;
    unsigned int i;

    for (i = 0; i < 8; i++)
    {
        mo = P_SpawnMissileAngle(actor, HEXEN_MT_ICEGUY_FX2, i * ANG45,
                                 -0.3 * FRACUNIT);
        if (mo)
        {
            mo->target = actor->target;
        }
    }
}









//============================================================================
//
//      Sorcerer stuff
//
// Sorcerer Variables
//              special1                Angle of ball 1 (all others relative to that)
//              special2                which ball to stop at in stop mode (HEXEN_MT_???)
//              args[0]                 Denfense time
//              args[1]                 Number of full rotations since stopping mode
//              args[2]                 Target orbit speed for acceleration/deceleration
//              args[3]                 Movement mode (see SORC_ macros)
//              args[4]                 Current ball orbit speed
//      Sorcerer Ball Variables
//              special1                Previous angle of ball (for woosh)
//              special2                Countdown of rapid fire (FX4)
//              args[0]                 If set, don't play the bounce sound when bouncing
//============================================================================

#define SORCBALL_INITIAL_SPEED 		7
#define SORCBALL_TERMINAL_SPEED		25
#define SORCBALL_SPEED_ROTATIONS 	5
#define SORC_DEFENSE_TIME			255
#define SORC_DEFENSE_HEIGHT			45
#define BOUNCE_TIME_UNIT			(35/2)
#define SORCFX4_RAPIDFIRE_TIME		(6*3)   // 3 seconds
#define SORCFX4_SPREAD_ANGLE		20

#define SORC_DECELERATE		0
#define SORC_ACCELERATE 	1
#define SORC_STOPPING		2
#define SORC_FIRESPELL		3
#define SORC_STOPPED		4
#define SORC_NORMAL			5
#define SORC_FIRING_SPELL	6

#define BALL1_ANGLEOFFSET	0
#define BALL2_ANGLEOFFSET	(ANGLE_MAX/3)
#define BALL3_ANGLEOFFSET	((ANGLE_MAX/3)*2)

void A_SorcBallOrbit(mobj_t * actor);
void A_SorcSpinBalls(mobj_t * actor);
void A_SpeedBalls(mobj_t * actor);
void A_SlowBalls(mobj_t * actor);
void A_StopBalls(mobj_t * actor);
void A_AccelBalls(mobj_t * actor);
void A_DecelBalls(mobj_t * actor);
void A_SorcBossAttack(mobj_t * actor);
void A_SpawnFizzle(mobj_t * actor);
void A_CastSorcererSpell(mobj_t * actor);
void A_SorcUpdateBallAngle(mobj_t * actor);
void A_BounceCheck(mobj_t * actor);
void A_SorcFX1Seek(mobj_t * actor);
void A_SorcOffense1(mobj_t * actor);
void A_SorcOffense2(mobj_t * actor);


// Spawn spinning balls above head - actor is sorcerer
void A_SorcSpinBalls(mobj_t * actor)
{
    mobj_t *mo;
    fixed_t z;

    A_SlowBalls(actor);
    actor->args[0] = 0;         // Currently no defense
    actor->args[3] = SORC_NORMAL;
    actor->args[4] = SORCBALL_INITIAL_SPEED;    // Initial orbit speed
    actor->special1.i = ANG1;
    z = actor->z - actor->floorclip + actor->info->height;

    mo = P_SpawnMobj(actor->x, actor->y, z, HEXEN_MT_SORCBALL1);
    if (mo)
    {
        mo->target = actor;
        mo->special2.i = SORCFX4_RAPIDFIRE_TIME;
    }
    mo = P_SpawnMobj(actor->x, actor->y, z, HEXEN_MT_SORCBALL2);
    if (mo)
        mo->target = actor;
    mo = P_SpawnMobj(actor->x, actor->y, z, HEXEN_MT_SORCBALL3);
    if (mo)
        mo->target = actor;
}


//
// A_SorcBallOrbit() ==========================================
//

void A_SorcBallOrbit(mobj_t * actor)
{
    int x, y;
    angle_t angle, baseangle;
    int mode = actor->target->args[3];
    mobj_t *parent = (mobj_t *) actor->target;
    int dist = parent->radius - (actor->radius << 1);
    angle_t prevangle = actor->special1.i;

    if (actor->target->health <= 0)
        P_SetMobjState(actor, actor->info->painstate);

    baseangle = (angle_t) parent->special1.i;
    switch (actor->type)
    {
        case HEXEN_MT_SORCBALL1:
            angle = baseangle + BALL1_ANGLEOFFSET;
            break;
        case HEXEN_MT_SORCBALL2:
            angle = baseangle + BALL2_ANGLEOFFSET;
            break;
        case HEXEN_MT_SORCBALL3:
            angle = baseangle + BALL3_ANGLEOFFSET;
            break;
        default:
            I_Error("corrupted sorcerer");
            return;
    }
    actor->angle = angle;
    angle >>= ANGLETOFINESHIFT;

    switch (mode)
    {
        case SORC_NORMAL:      // Balls rotating normally
            A_SorcUpdateBallAngle(actor);
            break;
        case SORC_DECELERATE:  // Balls decelerating
            A_DecelBalls(actor);
            A_SorcUpdateBallAngle(actor);
            break;
        case SORC_ACCELERATE:  // Balls accelerating
            A_AccelBalls(actor);
            A_SorcUpdateBallAngle(actor);
            break;
        case SORC_STOPPING:    // Balls stopping
            if ((parent->special2.i == actor->type) &&
                (parent->args[1] > SORCBALL_SPEED_ROTATIONS) &&
                (abs((int) angle - (int) (parent->angle >> ANGLETOFINESHIFT)) <
                 (30 << 5)))
            {
                // Can stop now
                actor->target->args[3] = SORC_FIRESPELL;
                actor->target->args[4] = 0;
                // Set angle so ball angle == sorcerer angle
                switch (actor->type)
                {
                    case HEXEN_MT_SORCBALL1:
                        parent->special1.i = (int) (parent->angle -
                                                    BALL1_ANGLEOFFSET);
                        break;
                    case HEXEN_MT_SORCBALL2:
                        parent->special1.i = (int) (parent->angle -
                                                    BALL2_ANGLEOFFSET);
                        break;
                    case HEXEN_MT_SORCBALL3:
                        parent->special1.i = (int) (parent->angle -
                                                    BALL3_ANGLEOFFSET);
                        break;
                    default:
                        break;
                }
            }
            else
            {
                A_SorcUpdateBallAngle(actor);
            }
            break;
        case SORC_FIRESPELL:   // Casting spell
            if (parent->special2.i == actor->type)
            {
                // Put sorcerer into special throw spell anim
                if (parent->health > 0)
                    P_SetMobjStateNF(parent, HEXEN_S_SORC_ATTACK1);

                if (actor->type == HEXEN_MT_SORCBALL1 && P_Random(pr_hexen) < 200)
                {
                    S_StartSound(NULL, hexen_sfx_sorcerer_spellcast);
                    actor->special2.i = SORCFX4_RAPIDFIRE_TIME;
                    actor->args[4] = 128;
                    parent->args[3] = SORC_FIRING_SPELL;
                }
                else
                {
                    A_CastSorcererSpell(actor);
                    parent->args[3] = SORC_STOPPED;
                }
            }
            break;
        case SORC_FIRING_SPELL:
            if (parent->special2.i == actor->type)
            {
                if (actor->special2.i-- <= 0)
                {
                    // Done rapid firing
                    parent->args[3] = SORC_STOPPED;
                    // Back to orbit balls
                    if (parent->health > 0)
                        P_SetMobjStateNF(parent, HEXEN_S_SORC_ATTACK4);
                }
                else
                {
                    // Do rapid fire spell
                    A_SorcOffense2(actor);
                }
            }
            break;
        case SORC_STOPPED:     // Balls stopped
        default:
            break;
    }

    if ((angle < prevangle) && (parent->args[4] == SORCBALL_TERMINAL_SPEED))
    {
        parent->args[1]++;      // Bump rotation counter
        // Completed full rotation - make woosh sound
        S_StartSound(actor, hexen_sfx_sorcerer_ballwoosh);
    }
    actor->special1.i = angle;    // Set previous angle
    x = parent->x + FixedMul(dist, finecosine[angle]);
    y = parent->y + FixedMul(dist, finesine[angle]);
    actor->x = x;
    actor->y = y;
    actor->z = parent->z - parent->floorclip + parent->info->height;
}


//
// Set balls to speed mode - actor is sorcerer
//
void A_SpeedBalls(mobj_t * actor)
{
    actor->args[3] = SORC_ACCELERATE;   // speed mode
    actor->args[2] = SORCBALL_TERMINAL_SPEED;   // target speed
}


//
// Set balls to slow mode - actor is sorcerer
//
void A_SlowBalls(mobj_t * actor)
{
    actor->args[3] = SORC_DECELERATE;   // slow mode
    actor->args[2] = SORCBALL_INITIAL_SPEED;    // target speed
}


//
// Instant stop when rotation gets to ball in special2
//              actor is sorcerer
//
void A_StopBalls(mobj_t * actor)
{
    int chance = P_Random(pr_hexen);
    actor->args[3] = SORC_STOPPING;     // stopping mode
    actor->args[1] = 0;         // Reset rotation counter

    if ((actor->args[0] <= 0) && (chance < 200))
    {
        actor->special2.i = HEXEN_MT_SORCBALL2; // Blue
    }
    else if ((actor->health < (actor->info->spawnhealth >> 1)) &&
             (chance < 200))
    {
        actor->special2.i = HEXEN_MT_SORCBALL3; // Green
    }
    else
    {
        actor->special2.i = HEXEN_MT_SORCBALL1; // Yellow
    }


}


//
// Increase ball orbit speed - actor is ball
//
void A_AccelBalls(mobj_t * actor)
{
    mobj_t *sorc = actor->target;

    if (sorc->args[4] < sorc->args[2])
    {
        sorc->args[4]++;
    }
    else
    {
        sorc->args[3] = SORC_NORMAL;
        if (sorc->args[4] >= SORCBALL_TERMINAL_SPEED)
        {
            // Reached terminal velocity - stop balls
            A_StopBalls(sorc);
        }
    }
}


// Decrease ball orbit speed - actor is ball
void A_DecelBalls(mobj_t * actor)
{
    mobj_t *sorc = actor->target;

    if (sorc->args[4] > sorc->args[2])
    {
        sorc->args[4]--;
    }
    else
    {
        sorc->args[3] = SORC_NORMAL;
    }
}


// Update angle if first ball - actor is ball
void A_SorcUpdateBallAngle(mobj_t * actor)
{
    if (actor->type == HEXEN_MT_SORCBALL1)
    {
        actor->target->special1.i += ANG1 * actor->target->args[4];
    }
}


// actor is ball
void A_CastSorcererSpell(mobj_t * actor)
{
    mobj_t *mo;
    int spell = actor->type;
    angle_t ang1, ang2;
    fixed_t z;
    mobj_t *parent = actor->target;

    S_StartSound(NULL, hexen_sfx_sorcerer_spellcast);

    // Put sorcerer into throw spell animation
    if (parent->health > 0)
        P_SetMobjStateNF(parent, HEXEN_S_SORC_ATTACK4);

    switch (spell)
    {
        case HEXEN_MT_SORCBALL1:     // Offensive
            A_SorcOffense1(actor);
            break;
        case HEXEN_MT_SORCBALL2:     // Defensive
            z = parent->z - parent->floorclip +
                SORC_DEFENSE_HEIGHT * FRACUNIT;
            mo = P_SpawnMobj(actor->x, actor->y, z, HEXEN_MT_SORCFX2);
            parent->flags2 |= MF2_REFLECTIVE | MF2_INVULNERABLE;
            parent->args[0] = SORC_DEFENSE_TIME;
            if (mo)
                mo->target = parent;
            break;
        case HEXEN_MT_SORCBALL3:     // Reinforcements
            ang1 = actor->angle - ANG45;
            ang2 = actor->angle + ANG45;
            if (actor->health < (actor->info->spawnhealth / 3))
            {                   // Spawn 2 at a time
                mo = P_SpawnMissileAngle(parent, HEXEN_MT_SORCFX3, ang1,
                                         4 * FRACUNIT);
                if (mo)
                    mo->target = parent;
                mo = P_SpawnMissileAngle(parent, HEXEN_MT_SORCFX3, ang2,
                                         4 * FRACUNIT);
                if (mo)
                    mo->target = parent;
            }
            else
            {
                if (P_Random(pr_hexen) < 128)
                    ang1 = ang2;
                mo = P_SpawnMissileAngle(parent, HEXEN_MT_SORCFX3, ang1,
                                         4 * FRACUNIT);
                if (mo)
                    mo->target = parent;
            }
            break;
        default:
            break;
    }
}

/*
void A_SpawnReinforcements(mobj_t *actor)
{
	mobj_t *parent = actor->target;
	mobj_t *mo;
	angle_t ang;

	ang = ANG1 * P_Random(pr_hexen);
	mo = P_SpawnMissileAngle(actor, HEXEN_MT_SORCFX3, ang, 5*FRACUNIT);
	if (mo) mo->target = parent;
}
*/

// actor is ball
void A_SorcOffense1(mobj_t * actor)
{
    mobj_t *mo;
    angle_t ang1, ang2;
    mobj_t *parent = (mobj_t *) actor->target;

    ang1 = actor->angle + ANG1 * 70;
    ang2 = actor->angle - ANG1 * 70;
    mo = P_SpawnMissileAngle(parent, HEXEN_MT_SORCFX1, ang1, 0);
    if (mo)
    {
        mo->target = parent;
        mo->special1.m = parent->target;
        mo->args[4] = BOUNCE_TIME_UNIT;
        mo->args[3] = 15;       // Bounce time in seconds
    }
    mo = P_SpawnMissileAngle(parent, HEXEN_MT_SORCFX1, ang2, 0);
    if (mo)
    {
        mo->target = parent;
        mo->special1.m = parent->target;
        mo->args[4] = BOUNCE_TIME_UNIT;
        mo->args[3] = 15;       // Bounce time in seconds
    }
}


// Actor is ball
void A_SorcOffense2(mobj_t * actor)
{
    angle_t ang1;
    mobj_t *mo;
    int delta, index;
    mobj_t *parent = actor->target;
    mobj_t *dest = parent->target;
    int dist;

    index = actor->args[4] << 5;
    actor->args[4] += 15;
    delta = (finesine[index]) * SORCFX4_SPREAD_ANGLE;
    delta = (delta >> FRACBITS) * ANG1;
    ang1 = actor->angle + delta;
    mo = P_SpawnMissileAngle(parent, HEXEN_MT_SORCFX4, ang1, 0);
    if (mo)
    {
        mo->special2.i = 35 * 5 / 2;      // 5 seconds
        dist = P_AproxDistance(dest->x - mo->x, dest->y - mo->y);
        dist = dist / mo->info->speed;
        if (dist < 1)
            dist = 1;
        mo->momz = (dest->z - mo->z) / dist;
    }
}


// Resume ball spinning
void A_SorcBossAttack(mobj_t * actor)
{
    actor->args[3] = SORC_ACCELERATE;
    actor->args[2] = SORCBALL_INITIAL_SPEED;
}


// spell cast magic fizzle
void A_SpawnFizzle(mobj_t * actor)
{
    fixed_t x, y, z;
    fixed_t dist = 5 * FRACUNIT;
    angle_t angle = actor->angle >> ANGLETOFINESHIFT;
    fixed_t speed = actor->info->speed;
    angle_t rangle;
    mobj_t *mo;
    int ix;

    x = actor->x + FixedMul(dist, finecosine[angle]);
    y = actor->y + FixedMul(dist, finesine[angle]);
    z = actor->z - actor->floorclip + (actor->height >> 1);
    for (ix = 0; ix < 5; ix++)
    {
        mo = P_SpawnMobj(x, y, z, HEXEN_MT_SORCSPARK1);
        if (mo)
        {
            rangle = angle + ((P_Random(pr_hexen) % 5) << 1);
            mo->momx = FixedMul(P_Random(pr_hexen) % speed, finecosine[rangle]);
            mo->momy = FixedMul(P_Random(pr_hexen) % speed, finesine[rangle]);
            mo->momz = FRACUNIT * 2;
        }
    }
}


//============================================================================
// Yellow spell - offense
//============================================================================

void A_SorcFX1Seek(mobj_t * actor)
{
    A_BounceCheck(actor);
    P_SeekerMissile(actor, &actor->special1.m, ANG1 * 2, ANG1 * 6, false);
}


//============================================================================
// Blue spell - defense
//============================================================================
//
// FX2 Variables
//              special1                current angle
//              special2
//              args[0]         0 = CW,  1 = CCW
//              args[1]
//============================================================================

// Split ball in two
void A_SorcFX2Split(mobj_t * actor)
{
    mobj_t *mo;

    mo = P_SpawnMobj(actor->x, actor->y, actor->z, HEXEN_MT_SORCFX2);
    if (mo)
    {
        mo->target = actor->target;
        mo->args[0] = 0;        // CW
        mo->special1.i = actor->angle;    // Set angle
        P_SetMobjStateNF(mo, HEXEN_S_SORCFX2_ORBIT1);
    }
    mo = P_SpawnMobj(actor->x, actor->y, actor->z, HEXEN_MT_SORCFX2);
    if (mo)
    {
        mo->target = actor->target;
        mo->args[0] = 1;        // CCW
        mo->special1.i = actor->angle;    // Set angle
        P_SetMobjStateNF(mo, HEXEN_S_SORCFX2_ORBIT1);
    }
    P_SetMobjStateNF(actor, HEXEN_S_NULL);
}


// Orbit FX2 about sorcerer
void A_SorcFX2Orbit(mobj_t * actor)
{
    angle_t angle;
    fixed_t x, y, z;
    mobj_t *parent = actor->target;
    fixed_t dist = parent->info->radius;

    if ((parent->health <= 0) ||        // Sorcerer is dead
        (!parent->args[0]))     // Time expired
    {
        P_SetMobjStateNF(actor, actor->info->deathstate);
        parent->args[0] = 0;
        parent->flags2 &= ~MF2_REFLECTIVE;
        parent->flags2 &= ~MF2_INVULNERABLE;
    }

    if (actor->args[0] && (parent->args[0]-- <= 0))     // Time expired
    {
        P_SetMobjStateNF(actor, actor->info->deathstate);
        parent->args[0] = 0;
        parent->flags2 &= ~MF2_REFLECTIVE;
    }

    // Move to new position based on angle
    if (actor->args[0])         // Counter clock-wise
    {
        actor->special1.i += ANG1 * 10;
        angle = ((angle_t) actor->special1.i) >> ANGLETOFINESHIFT;
        x = parent->x + FixedMul(dist, finecosine[angle]);
        y = parent->y + FixedMul(dist, finesine[angle]);
        z = parent->z - parent->floorclip + SORC_DEFENSE_HEIGHT * FRACUNIT;
        z += FixedMul(15 * FRACUNIT, finecosine[angle]);
        // Spawn trailer
        P_SpawnMobj(x, y, z, HEXEN_MT_SORCFX2_T1);
    }
    else                        // Clock wise
    {
        actor->special1.i -= ANG1 * 10;
        angle = ((angle_t) actor->special1.i) >> ANGLETOFINESHIFT;
        x = parent->x + FixedMul(dist, finecosine[angle]);
        y = parent->y + FixedMul(dist, finesine[angle]);
        z = parent->z - parent->floorclip + SORC_DEFENSE_HEIGHT * FRACUNIT;
        z += FixedMul(20 * FRACUNIT, finesine[angle]);
        // Spawn trailer
        P_SpawnMobj(x, y, z, HEXEN_MT_SORCFX2_T1);
    }

    actor->x = x;
    actor->y = y;
    actor->z = z;
}



//============================================================================
// Green spell - spawn bishops
//============================================================================

void A_SpawnBishop(mobj_t * actor)
{
    mobj_t *mo;
    mo = P_SpawnMobj(actor->x, actor->y, actor->z, HEXEN_MT_BISHOP);
    if (mo)
    {
        if (!P_TestMobjLocation(mo))
        {
            P_SetMobjState(mo, HEXEN_S_NULL);
        }
    }
    P_SetMobjState(actor, HEXEN_S_NULL);
}

/*
void A_SmokePuffEntry(mobj_t *actor)
{
	P_SpawnMobj(actor->x, actor->y, actor->z, HEXEN_MT_MNTRSMOKE);
}
*/

void A_SmokePuffExit(mobj_t * actor)
{
    P_SpawnMobj(actor->x, actor->y, actor->z, HEXEN_MT_MNTRSMOKEEXIT);
}

void A_SorcererBishopEntry(mobj_t * actor)
{
    P_SpawnMobj(actor->x, actor->y, actor->z, HEXEN_MT_SORCFX3_EXPLOSION);
    S_StartSound(actor, actor->info->seesound);
}


//============================================================================
// FX4 - rapid fire balls
//============================================================================

void A_SorcFX4Check(mobj_t * actor)
{
    if (actor->special2.i-- <= 0)
    {
        P_SetMobjStateNF(actor, actor->info->deathstate);
    }
}

//============================================================================
// Ball death - spawn stuff
//============================================================================

void A_SorcBallPop(mobj_t * actor)
{
    S_StartSound(NULL, hexen_sfx_sorcerer_ballpop);
    actor->flags &= ~MF_NOGRAVITY;
    actor->flags2 |= MF2_LOGRAV;
    actor->momx = ((P_Random(pr_hexen) % 10) - 5) << FRACBITS;
    actor->momy = ((P_Random(pr_hexen) % 10) - 5) << FRACBITS;
    actor->momz = (2 + (P_Random(pr_hexen) % 3)) << FRACBITS;
    actor->special2.i = 4 * FRACUNIT;     // Initial bounce factor
    actor->args[4] = BOUNCE_TIME_UNIT;  // Bounce time unit
    actor->args[3] = 5;         // Bounce time in seconds
}



void A_BounceCheck(mobj_t * actor)
{
    if (actor->args[4]-- <= 0)
    {
        if (actor->args[3]-- <= 0)
        {
            P_SetMobjState(actor, actor->info->deathstate);
            switch (actor->type)
            {
                case HEXEN_MT_SORCBALL1:
                case HEXEN_MT_SORCBALL2:
                case HEXEN_MT_SORCBALL3:
                    S_StartSound(NULL, hexen_sfx_sorcerer_bigballexplode);
                    break;
                case HEXEN_MT_SORCFX1:
                    S_StartSound(NULL, hexen_sfx_sorcerer_headscream);
                    break;
                default:
                    break;
            }
        }
        else
        {
            actor->args[4] = BOUNCE_TIME_UNIT;
        }
    }
}




//============================================================================
// Class Bosses
//============================================================================
#define CLASS_BOSS_STRAFE_RANGE	64*10*FRACUNIT

void A_FastChase(mobj_t * actor)
{
    int delta;
    fixed_t dist;
    angle_t ang;
    mobj_t *target;

    if (actor->reactiontime)
    {
        actor->reactiontime--;
    }

    // Modify target threshold
    if (actor->threshold)
    {
        actor->threshold--;
    }

    if (gameskill == sk_nightmare)
    {                           // Monsters move faster in nightmare mode
        actor->tics -= actor->tics / 2;
        if (actor->tics < 3)
        {
            actor->tics = 3;
        }
    }

//
// turn towards movement direction if not there yet
//
    if (actor->movedir < 8)
    {
        actor->angle &= (7 << 29);
        delta = actor->angle - (actor->movedir << 29);
        if (delta > 0)
        {
            actor->angle -= ANG90 / 2;
        }
        else if (delta < 0)
        {
            actor->angle += ANG90 / 2;
        }
    }

    if (!actor->target || !(actor->target->flags & MF_SHOOTABLE))
    {                           // look for a new target
        if (P_LookForPlayers(actor, true))
        {                       // got a new target
            return;
        }
        P_SetMobjState(actor, actor->info->spawnstate);
        return;
    }

//
// don't attack twice in a row
//
    if (actor->flags & MF_JUSTATTACKED)
    {
        actor->flags &= ~MF_JUSTATTACKED;
        if (gameskill != sk_nightmare)
            P_NewChaseDir(actor);
        return;
    }

    // Strafe
    if (actor->special2.i > 0)
    {
        actor->special2.i--;
    }
    else
    {
        target = actor->target;
        actor->special2.i = 0;
        actor->momx = actor->momy = 0;
        dist = P_AproxDistance(actor->x - target->x, actor->y - target->y);
        if (dist < CLASS_BOSS_STRAFE_RANGE)
        {
            if (P_Random(pr_hexen) < 100)
            {
                ang = R_PointToAngle2(actor->x, actor->y,
                                      target->x, target->y);
                if (P_Random(pr_hexen) < 128)
                    ang += ANG90;
                else
                    ang -= ANG90;
                ang >>= ANGLETOFINESHIFT;
                actor->momx = FixedMul(13 * FRACUNIT, finecosine[ang]);
                actor->momy = FixedMul(13 * FRACUNIT, finesine[ang]);
                actor->special2.i = 3;    // strafe time
            }
        }
    }

//
// check for missile attack
//
    if (actor->info->missilestate)
    {
        if (gameskill < sk_nightmare && actor->movecount)
            goto nomissile;
        if (!P_CheckMissileRange(actor))
            goto nomissile;
        P_SetMobjState(actor, actor->info->missilestate);
        actor->flags |= MF_JUSTATTACKED;
        return;
    }
  nomissile:

//
// possibly choose another target
//
    if (netgame && !actor->threshold && !P_CheckSight(actor, actor->target))
    {
        if (P_LookForPlayers(actor, true))
            return;             // got a new target
    }

//
// chase towards player
//
    if (!actor->special2.i)
    {
        if (--actor->movecount < 0 || !P_Move(actor, false))
        {
            P_NewChaseDir(actor);
        }
    }
}


void A_FighterAttack(mobj_t * actor)
{
    extern void A_FSwordAttack2(mobj_t * actor);

    if (!actor->target)
        return;
    A_FSwordAttack2(actor);
}


void A_ClericAttack(mobj_t * actor)
{
    extern void A_CHolyAttack3(mobj_t * actor);

    if (!actor->target)
        return;
    A_CHolyAttack3(actor);
}



void A_MageAttack(mobj_t * actor)
{
    extern void A_MStaffAttack2(mobj_t * actor);

    if (!actor->target)
        return;
    A_MStaffAttack2(actor);
}

void A_ClassBossHealth(mobj_t * actor)
{
    if (netgame && !deathmatch) // co-op only
    {
        if (!actor->special1.i)
        {
            actor->health *= 5;
            actor->special1.i = true;     // has been initialized
        }
    }
}


//===========================================================================
//
// A_CheckFloor - Checks if an object hit the floor
//
//===========================================================================

void A_CheckFloor(mobj_t * actor)
{
    if (actor->z <= actor->floorz)
    {
        actor->z = actor->floorz;
        actor->flags2 &= ~MF2_LOGRAV;
        P_SetMobjState(actor, actor->info->deathstate);
    }
}

//============================================================================
//
// A_FreezeDeath
//
//============================================================================

void A_FreezeDeath(mobj_t * actor)
{
    int r = P_Random(pr_hexen);
    actor->tics = 75 + r + P_Random(pr_hexen);
    actor->flags |= MF_SOLID | MF_SHOOTABLE | MF_NOBLOOD;
    actor->flags2 |= MF2_PUSHABLE | MF2_TELESTOMP | MF2_PASSMOBJ | MF2_SLIDE;
    actor->height <<= 2;
    S_StartSound(actor, hexen_sfx_freeze_death);

    if (actor->player)
    {
        actor->player->damagecount = 0;
        actor->player->poisoncount = 0;
        actor->player->bonuscount = 0;
        if (actor->player == &players[consoleplayer])
        {
            SB_PaletteFlash(false);
        }
    }
    else if (actor->flags & MF_COUNTKILL && actor->special)
    {
        // Initiate monster death actions.
        P_ExecuteLineSpecial(actor->special, actor->args, NULL, 0, actor);
    }
}

//============================================================================
//
// A_IceSetTics
//
//============================================================================

void A_IceSetTics(mobj_t * actor)
{
    int floor;

    actor->tics = 70 + (P_Random(pr_hexen) & 63);
    floor = P_GetThingFloorType(actor);
    if (floor == FLOOR_LAVA)
    {
        actor->tics >>= 2;
    }
    else if (floor == FLOOR_ICE)
    {
        actor->tics <<= 1;
    }
}

//============================================================================
//
// A_IceCheckHeadDone
//
//============================================================================

void A_IceCheckHeadDone(mobj_t * actor)
{
    if (actor->special2.i == 666)
    {
        P_SetMobjState(actor, HEXEN_S_ICECHUNK_HEAD2);
    }
}

//============================================================================
//
// A_FreezeDeathChunks
//
//============================================================================

void A_FreezeDeathChunks(mobj_t * actor)
{
    int i;
    int r1,r2,r3;
    mobj_t *mo;

    if (actor->momx || actor->momy || actor->momz)
    {
        actor->tics = 105;
        return;
    }
    S_StartSound(actor, hexen_sfx_freeze_shatter);

    for (i = 12 + (P_Random(pr_hexen) & 15); i >= 0; i--)
    {
        r1 = P_Random(pr_hexen);
        r2 = P_Random(pr_hexen);
        r3 = P_Random(pr_hexen);
        mo = P_SpawnMobj(actor->x +
                         (((r3 - 128) * actor->radius) >> 7),
                         actor->y +
                         (((r2 - 128) * actor->radius) >> 7),
                         actor->z + (r1 * actor->height / 255),
                         HEXEN_MT_ICECHUNK);
        P_SetMobjState(mo, mo->info->spawnstate + (P_Random(pr_hexen) % 3));
        mo->momz = FixedDiv(mo->z - actor->z, actor->height) << 2;
        mo->momx = P_SubRandom() << (FRACBITS - 7);
        mo->momy = P_SubRandom() << (FRACBITS - 7);
        A_IceSetTics(mo);   // set a random tic wait
    }
    for (i = 12 + (P_Random(pr_hexen) & 15); i >= 0; i--)
    {
        r1 = P_Random(pr_hexen);
        r2 = P_Random(pr_hexen);
        r3 = P_Random(pr_hexen);
        mo = P_SpawnMobj(actor->x +
                         (((r3 - 128) * actor->radius) >> 7),
                         actor->y +
                         (((r2 - 128) * actor->radius) >> 7),
                         actor->z + (r1 * actor->height / 255),
                         HEXEN_MT_ICECHUNK);
        P_SetMobjState(mo, mo->info->spawnstate + (P_Random(pr_hexen) % 3));
        mo->momz = FixedDiv(mo->z - actor->z, actor->height) << 2;
        mo->momx = P_SubRandom() << (FRACBITS - 7);
        mo->momy = P_SubRandom() << (FRACBITS - 7);
        A_IceSetTics(mo);   // set a random tic wait
    }
    if (actor->player)
    {                           // attach the player's view to a chunk of ice
        mo = P_SpawnMobj(actor->x, actor->y, actor->z + VIEWHEIGHT,
                         HEXEN_MT_ICECHUNK);
        P_SetMobjState(mo, HEXEN_S_ICECHUNK_HEAD);
        mo->momz = FixedDiv(mo->z - actor->z, actor->height) << 2;
        mo->momx = P_SubRandom() << (FRACBITS - 7);
        mo->momy = P_SubRandom() << (FRACBITS - 7);
        mo->flags2 |= MF2_ICEDAMAGE;    // used to force blue palette
        mo->flags2 &= ~MF2_FOOTCLIP;
        mo->player = actor->player;
        actor->player = NULL;
        mo->health = actor->health;
        mo->angle = actor->angle;
        mo->player->mo = mo;
        mo->player->lookdir = 0;
    }
    P_RemoveMobjFromTIDList(actor);
    P_SetMobjState(actor, HEXEN_S_FREETARGMOBJ);
    actor->flags2 |= MF2_DONTDRAW;
}

//===========================================================================
// Korax Variables
//      special1        last teleport destination
//      special2        set if "below half" script not yet run
//
// Korax Scripts (reserved)
//      249             Tell scripts that we are below half health
//      250-254 Control scripts
//      255             Death script
//
// Korax TIDs (reserved)
//      245             Reserved for Korax himself
//  248         Initial teleport destination
//      249             Teleport destination
//      250-254 For use in respective control scripts
//      255             For use in death script (spawn spots)
//===========================================================================
#define KORAX_SPIRIT_LIFETIME	(5*(35/5))      // 5 seconds
#define KORAX_COMMAND_HEIGHT	(120*FRACUNIT)
#define KORAX_COMMAND_OFFSET	(27*FRACUNIT)

void KoraxFire1(mobj_t * actor, int type);
void KoraxFire2(mobj_t * actor, int type);
void KoraxFire3(mobj_t * actor, int type);
void KoraxFire4(mobj_t * actor, int type);
void KoraxFire5(mobj_t * actor, int type);
void KoraxFire6(mobj_t * actor, int type);
void KSpiritInit(mobj_t * spirit, mobj_t * korax);

#define KORAX_TID					(245)
#define KORAX_FIRST_TELEPORT_TID	(248)
#define KORAX_TELEPORT_TID			(249)

void A_KoraxChase(mobj_t * actor)
{
    mobj_t *spot;
    int lastfound;
    byte args[3] = {0, 0, 0};

    if ((!actor->special2.i) &&
        (actor->health <= (actor->info->spawnhealth / 2)))
    {
        lastfound = 0;
        spot = P_FindMobjFromTID(KORAX_FIRST_TELEPORT_TID, &lastfound);
        if (spot)
        {
            P_Teleport(actor, spot->x, spot->y, spot->angle, true);
        }

        CheckACSPresent(249);
        P_StartACS(249, 0, args, actor, NULL, 0);
        actor->special2.i = 1;    // Don't run again

        return;
    }

    if (!actor->target)
        return;
    if (P_Random(pr_hexen) < 30)
    {
        P_SetMobjState(actor, actor->info->missilestate);
    }
    else if (P_Random(pr_hexen) < 30)
    {
        S_StartSound(NULL, hexen_sfx_korax_active);
    }

    // Teleport away
    if (actor->health < (actor->info->spawnhealth >> 1))
    {
        if (P_Random(pr_hexen) < 10)
        {
            lastfound = actor->special1.i;
            spot = P_FindMobjFromTID(KORAX_TELEPORT_TID, &lastfound);
            actor->special1.i = lastfound;
            if (spot)
            {
                P_Teleport(actor, spot->x, spot->y, spot->angle, true);
            }
        }
    }
}

void A_KoraxStep(mobj_t * actor)
{
    A_Chase(actor);
}

void A_KoraxStep2(mobj_t * actor)
{
    S_StartSound(NULL, hexen_sfx_korax_step);
    A_Chase(actor);
}

void A_KoraxBonePop(mobj_t * actor)
{
    mobj_t *mo;
    byte args[5];

    args[0] = args[1] = args[2] = args[3] = args[4] = 0;

    // Spawn 6 spirits equalangularly
    mo = P_SpawnMissileAngle(actor, HEXEN_MT_KORAX_SPIRIT1, ANG60 * 0,
                             5 * FRACUNIT);
    if (mo)
        KSpiritInit(mo, actor);
    mo = P_SpawnMissileAngle(actor, HEXEN_MT_KORAX_SPIRIT2, ANG60 * 1,
                             5 * FRACUNIT);
    if (mo)
        KSpiritInit(mo, actor);
    mo = P_SpawnMissileAngle(actor, HEXEN_MT_KORAX_SPIRIT3, ANG60 * 2,
                             5 * FRACUNIT);
    if (mo)
        KSpiritInit(mo, actor);
    mo = P_SpawnMissileAngle(actor, HEXEN_MT_KORAX_SPIRIT4, ANG60 * 3,
                             5 * FRACUNIT);
    if (mo)
        KSpiritInit(mo, actor);
    mo = P_SpawnMissileAngle(actor, HEXEN_MT_KORAX_SPIRIT5, ANG60 * 4,
                             5 * FRACUNIT);
    if (mo)
        KSpiritInit(mo, actor);
    mo = P_SpawnMissileAngle(actor, HEXEN_MT_KORAX_SPIRIT6, ANG60 * 5,
                             5 * FRACUNIT);
    if (mo)
        KSpiritInit(mo, actor);

    CheckACSPresent(255);
    P_StartACS(255, 0, args, actor, NULL, 0);   // Death script
}

void KSpiritInit(mobj_t * spirit, mobj_t * korax)
{
    int i;
    mobj_t *tail, *next;

    spirit->health = KORAX_SPIRIT_LIFETIME;

    spirit->special1.m = korax;     // Swarm around korax
    spirit->special2.i = 32 + (P_Random(pr_hexen) & 7);   // Float bob index
    spirit->args[0] = 10;       // initial turn value
    spirit->args[1] = 0;        // initial look angle

    // Spawn a tail for spirit
    tail = P_SpawnMobj(spirit->x, spirit->y, spirit->z, HEXEN_MT_HOLY_TAIL);
    tail->special2.m = spirit;      // parent
    for (i = 1; i < 3; i++)
    {
        next = P_SpawnMobj(spirit->x, spirit->y, spirit->z, HEXEN_MT_HOLY_TAIL);
        P_SetMobjState(next, next->info->spawnstate + 1);
        tail->special1.m = next;
        tail = next;
    }
    tail->special1.m = NULL;         // last tail bit
}

void A_KoraxDecide(mobj_t * actor)
{
    if (P_Random(pr_hexen) < 220)
    {
        P_SetMobjState(actor, HEXEN_S_KORAX_MISSILE1);
    }
    else
    {
        P_SetMobjState(actor, HEXEN_S_KORAX_COMMAND1);
    }
}

void A_KoraxMissile(mobj_t * actor)
{
    int type = P_Random(pr_hexen) % 6;
    int sound = 0;

    S_StartSound(actor, hexen_sfx_korax_attack);

    switch (type)
    {
        case 0:
            type = HEXEN_MT_WRAITHFX1;
            sound = hexen_sfx_wraith_missile_fire;
            break;
        case 1:
            type = HEXEN_MT_DEMONFX1;
            sound = hexen_sfx_demon_missile_fire;
            break;
        case 2:
            type = HEXEN_MT_DEMON2FX1;
            sound = hexen_sfx_demon_missile_fire;
            break;
        case 3:
            type = HEXEN_MT_FIREDEMON_FX6;
            sound = hexen_sfx_fired_attack;
            break;
        case 4:
            type = HEXEN_MT_CENTAUR_FX;
            sound = hexen_sfx_centaurleader_attack;
            break;
        case 5:
            type = HEXEN_MT_SERPENTFX;
            sound = hexen_sfx_centaurleader_attack;
            break;
    }

    // Fire all 6 missiles at once
    S_StartSound(NULL, sound);
    KoraxFire1(actor, type);
    KoraxFire2(actor, type);
    KoraxFire3(actor, type);
    KoraxFire4(actor, type);
    KoraxFire5(actor, type);
    KoraxFire6(actor, type);
}


// Call action code scripts (250-254)
void A_KoraxCommand(mobj_t * actor)
{
    byte args[5];
    fixed_t x, y, z;
    angle_t ang;
    int numcommands;

    S_StartSound(actor, hexen_sfx_korax_command);

    // Shoot stream of lightning to ceiling
    ang = (actor->angle - ANG90) >> ANGLETOFINESHIFT;
    x = actor->x + FixedMul(KORAX_COMMAND_OFFSET, finecosine[ang]);
    y = actor->y + FixedMul(KORAX_COMMAND_OFFSET, finesine[ang]);
    z = actor->z + KORAX_COMMAND_HEIGHT;
    P_SpawnMobj(x, y, z, HEXEN_MT_KORAX_BOLT);

    args[0] = args[1] = args[2] = args[3] = args[4] = 0;

    if (actor->health <= (actor->info->spawnhealth >> 1))
    {
        numcommands = 5;
    }
    else
    {
        numcommands = 4;
    }

    switch (P_Random(pr_hexen) % numcommands)
    {
        case 0:
            CheckACSPresent(250);
            P_StartACS(250, 0, args, actor, NULL, 0);
            break;
        case 1:
            CheckACSPresent(251);
            P_StartACS(251, 0, args, actor, NULL, 0);
            break;
        case 2:
            CheckACSPresent(252);
            P_StartACS(252, 0, args, actor, NULL, 0);
            break;
        case 3:
            CheckACSPresent(253);
            P_StartACS(253, 0, args, actor, NULL, 0);
            break;
        case 4:
            CheckACSPresent(254);
            P_StartACS(254, 0, args, actor, NULL, 0);
            break;
    }
}


#define KORAX_DELTAANGLE			(85*ANG1)
#define KORAX_ARM_EXTENSION_SHORT	(40*FRACUNIT)
#define KORAX_ARM_EXTENSION_LONG	(55*FRACUNIT)

#define KORAX_ARM1_HEIGHT			(108*FRACUNIT)
#define KORAX_ARM2_HEIGHT			(82*FRACUNIT)
#define KORAX_ARM3_HEIGHT			(54*FRACUNIT)
#define KORAX_ARM4_HEIGHT			(104*FRACUNIT)
#define KORAX_ARM5_HEIGHT			(86*FRACUNIT)
#define KORAX_ARM6_HEIGHT			(53*FRACUNIT)


// Arm projectiles
//              arm positions numbered:
//                      1       top left
//                      2       middle left
//                      3       lower left
//                      4       top right
//                      5       middle right
//                      6       lower right


// Arm 1 projectile
void KoraxFire1(mobj_t * actor, int type)
{
    angle_t ang;
    fixed_t x, y, z;

    ang = (actor->angle - KORAX_DELTAANGLE) >> ANGLETOFINESHIFT;
    x = actor->x + FixedMul(KORAX_ARM_EXTENSION_SHORT, finecosine[ang]);
    y = actor->y + FixedMul(KORAX_ARM_EXTENSION_SHORT, finesine[ang]);
    z = actor->z - actor->floorclip + KORAX_ARM1_HEIGHT;
    P_SpawnKoraxMissile(x, y, z, actor, actor->target, type);
}


// Arm 2 projectile
void KoraxFire2(mobj_t * actor, int type)
{
    angle_t ang;
    fixed_t x, y, z;

    ang = (actor->angle - KORAX_DELTAANGLE) >> ANGLETOFINESHIFT;
    x = actor->x + FixedMul(KORAX_ARM_EXTENSION_LONG, finecosine[ang]);
    y = actor->y + FixedMul(KORAX_ARM_EXTENSION_LONG, finesine[ang]);
    z = actor->z - actor->floorclip + KORAX_ARM2_HEIGHT;
    P_SpawnKoraxMissile(x, y, z, actor, actor->target, type);
}

// Arm 3 projectile
void KoraxFire3(mobj_t * actor, int type)
{
    angle_t ang;
    fixed_t x, y, z;

    ang = (actor->angle - KORAX_DELTAANGLE) >> ANGLETOFINESHIFT;
    x = actor->x + FixedMul(KORAX_ARM_EXTENSION_LONG, finecosine[ang]);
    y = actor->y + FixedMul(KORAX_ARM_EXTENSION_LONG, finesine[ang]);
    z = actor->z - actor->floorclip + KORAX_ARM3_HEIGHT;
    P_SpawnKoraxMissile(x, y, z, actor, actor->target, type);
}

// Arm 4 projectile
void KoraxFire4(mobj_t * actor, int type)
{
    angle_t ang;
    fixed_t x, y, z;

    ang = (actor->angle + KORAX_DELTAANGLE) >> ANGLETOFINESHIFT;
    x = actor->x + FixedMul(KORAX_ARM_EXTENSION_SHORT, finecosine[ang]);
    y = actor->y + FixedMul(KORAX_ARM_EXTENSION_SHORT, finesine[ang]);
    z = actor->z - actor->floorclip + KORAX_ARM4_HEIGHT;
    P_SpawnKoraxMissile(x, y, z, actor, actor->target, type);
}

// Arm 5 projectile
void KoraxFire5(mobj_t * actor, int type)
{
    angle_t ang;
    fixed_t x, y, z;

    ang = (actor->angle + KORAX_DELTAANGLE) >> ANGLETOFINESHIFT;
    x = actor->x + FixedMul(KORAX_ARM_EXTENSION_LONG, finecosine[ang]);
    y = actor->y + FixedMul(KORAX_ARM_EXTENSION_LONG, finesine[ang]);
    z = actor->z - actor->floorclip + KORAX_ARM5_HEIGHT;
    P_SpawnKoraxMissile(x, y, z, actor, actor->target, type);
}

// Arm 6 projectile
void KoraxFire6(mobj_t * actor, int type)
{
    angle_t ang;
    fixed_t x, y, z;

    ang = (actor->angle + KORAX_DELTAANGLE) >> ANGLETOFINESHIFT;
    x = actor->x + FixedMul(KORAX_ARM_EXTENSION_LONG, finecosine[ang]);
    y = actor->y + FixedMul(KORAX_ARM_EXTENSION_LONG, finesine[ang]);
    z = actor->z - actor->floorclip + KORAX_ARM6_HEIGHT;
    P_SpawnKoraxMissile(x, y, z, actor, actor->target, type);
}


void A_KSpiritWeave(mobj_t * actor)
{
    fixed_t newX, newY;
    int weaveXY, weaveZ;
    int angle;

    weaveXY = actor->special2.i >> 16;
    weaveZ = actor->special2.i & 0xFFFF;
    angle = (actor->angle + ANG90) >> ANGLETOFINESHIFT;
    newX = actor->x - FixedMul(finecosine[angle],
                               FloatBobOffsets[weaveXY] << 2);
    newY = actor->y - FixedMul(finesine[angle],
                               FloatBobOffsets[weaveXY] << 2);
    weaveXY = (weaveXY + (P_Random(pr_hexen) % 5)) & 63;
    newX += FixedMul(finecosine[angle], FloatBobOffsets[weaveXY] << 2);
    newY += FixedMul(finesine[angle], FloatBobOffsets[weaveXY] << 2);
    P_TryMove(actor, newX, newY, false);
    actor->z -= FloatBobOffsets[weaveZ] << 1;
    weaveZ = (weaveZ + (P_Random(pr_hexen) % 5)) & 63;
    actor->z += FloatBobOffsets[weaveZ] << 1;
    actor->special2.i = weaveZ + (weaveXY << 16);
}

void A_KSpiritSeeker(mobj_t * actor, angle_t thresh, angle_t turnMax)
{
    int dir;
    int dist;
    angle_t delta;
    angle_t angle;
    mobj_t *target;
    fixed_t newZ;
    fixed_t deltaZ;

    target = actor->special1.m;
    if (target == NULL)
    {
        return;
    }
    dir = P_FaceMobj(actor, target, &delta);
    if (delta > thresh)
    {
        delta >>= 1;
        if (delta > turnMax)
        {
            delta = turnMax;
        }
    }
    if (dir)
    {                           // Turn clockwise
        actor->angle += delta;
    }
    else
    {                           // Turn counter clockwise
        actor->angle -= delta;
    }
    angle = actor->angle >> ANGLETOFINESHIFT;
    actor->momx = FixedMul(actor->info->speed, finecosine[angle]);
    actor->momy = FixedMul(actor->info->speed, finesine[angle]);

    if (!(leveltime & 15)
        || actor->z > target->z + (target->info->height)
        || actor->z + actor->height < target->z)
    {
        newZ = target->z + ((P_Random(pr_hexen) * target->info->height) >> 8);
        deltaZ = newZ - actor->z;
        if (abs(deltaZ) > 15 * FRACUNIT)
        {
            if (deltaZ > 0)
            {
                deltaZ = 15 * FRACUNIT;
            }
            else
            {
                deltaZ = -15 * FRACUNIT;
            }
        }
        dist = P_AproxDistance(target->x - actor->x, target->y - actor->y);
        dist = dist / actor->info->speed;
        if (dist < 1)
        {
            dist = 1;
        }
        actor->momz = deltaZ / dist;
    }
    return;
}


void A_KSpiritRoam(mobj_t * actor)
{
    if (actor->health-- <= 0)
    {
        S_StartSound(actor, hexen_sfx_spirit_die);
        P_SetMobjState(actor, HEXEN_S_KSPIRIT_DEATH1);
    }
    else
    {
        if (actor->special1.m)
        {
            A_KSpiritSeeker(actor, actor->args[0] * ANG1,
                            actor->args[0] * ANG1 * 2);
        }
        A_KSpiritWeave(actor);
        if (P_Random(pr_hexen) < 50)
        {
            S_StartSound(NULL, hexen_sfx_spirit_active);
        }
    }
}

void A_KBolt(mobj_t * actor)
{
    // Countdown lifetime
    if (actor->special1.i-- <= 0)
    {
        P_SetMobjState(actor, HEXEN_S_NULL);
    }
}


#define KORAX_BOLT_HEIGHT		48*FRACUNIT
#define KORAX_BOLT_LIFETIME		3

void A_KBoltRaise(mobj_t * actor)
{
    mobj_t *mo;
    fixed_t z;

    // Spawn a child upward
    z = actor->z + KORAX_BOLT_HEIGHT;

    if ((z + KORAX_BOLT_HEIGHT) < actor->ceilingz)
    {
        mo = P_SpawnMobj(actor->x, actor->y, z, HEXEN_MT_KORAX_BOLT);
        if (mo)
        {
            mo->special1.i = KORAX_BOLT_LIFETIME;
        }
    }
    else
    {
        // Maybe cap it off here
    }
}
