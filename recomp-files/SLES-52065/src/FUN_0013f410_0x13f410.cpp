#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0013f410
// Address: 0x13f410 - 0x13f608
void FUN_0013f410_0x13f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f410_0x13f410");
#endif

    switch (ctx->pc) {
        case 0x13f458u: goto label_13f458;
        case 0x13f460u: goto label_13f460;
        case 0x13f474u: goto label_13f474;
        case 0x13f484u: goto label_13f484;
        case 0x13f4d4u: goto label_13f4d4;
        case 0x13f594u: goto label_13f594;
        case 0x13f59cu: goto label_13f59c;
        case 0x13f5b4u: goto label_13f5b4;
        case 0x13f5bcu: goto label_13f5bc;
        default: break;
    }

    ctx->pc = 0x13f410u;

    // 0x13f410: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13f410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13f414: 0x3c013fff  lui         $at, 0x3FFF
    ctx->pc = 0x13f414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16383 << 16));
    // 0x13f418: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13f418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13f41c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x13f41cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x13f420: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13f424: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f428: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13f428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f42c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f430: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13f434: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x13f434u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x13f438: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F438u;
    {
        const bool branch_taken_0x13f438 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F438u;
        // 0x13f43c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f438) {
            ctx->pc = 0x13F460u;
            goto label_13f460;
        }
    }
    ctx->pc = 0x13F440u;
    // 0x13f440: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x13f440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x13f444: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13f444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13f448: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13f448u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x13f44c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13f44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13f450: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13F450u;
    SET_GPR_U32(ctx, 31, 0x13F458u);
    ctx->pc = 0x13F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F450u;
    // 0x13f454: 0x24a5f070  addiu       $a1, $a1, -0xF90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13F450u, 0x13F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F458u;
label_13f458:
    // 0x13f458: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13F458u;
    SET_GPR_U32(ctx, 31, 0x13F460u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13F458u, 0x13F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F460u;
label_13f460:
    // 0x13f460: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x13f460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13f464: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13F464u;
    {
        const bool branch_taken_0x13f464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F464u;
        // 0x13f468: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f464) {
            ctx->pc = 0x13F484u;
            goto label_13f484;
        }
    }
    ctx->pc = 0x13F46Cu;
    // 0x13f46c: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x13F46Cu;
    SET_GPR_U32(ctx, 31, 0x13F474u);
    ctx->pc = 0x13F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F46Cu;
    // 0x13f470: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x13F46Cu, 0x13F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F474u;
label_13f474:
    // 0x13f474: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x13f474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x13f478: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13f478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f47c: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x13F47Cu;
    SET_GPR_U32(ctx, 31, 0x13F484u);
    ctx->pc = 0x13F480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F47Cu;
    // 0x13f480: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x13F47Cu, 0x13F484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F484u;
label_13f484:
    // 0x13f484: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x13f484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x13f488: 0x27b0004c  addiu       $s0, $sp, 0x4C
    ctx->pc = 0x13f488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x13f48c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x13f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x13f490: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x13f490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x13f494: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x13f494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x13f498: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13f498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13f49c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x13f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13f4a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f4a4: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x13f4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x13f4a8: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x13f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x13f4ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13f4b0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x13f4b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13f4b4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x13f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x13f4b8: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F4B8u;
    {
        const bool branch_taken_0x13f4b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x13F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4B8u;
        // 0x13f4bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4b8) {
            ctx->pc = 0x13F4D4u;
            goto label_13f4d4;
        }
    }
    ctx->pc = 0x13F4C0u;
    // 0x13f4c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13f4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4c4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x13f4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13f4c8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x13f4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x13f4cc: 0xc04ffc0  jal         func_13FF00
    ctx->pc = 0x13F4CCu;
    SET_GPR_U32(ctx, 31, 0x13F4D4u);
    ctx->pc = 0x13F4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4CCu;
    // 0x13f4d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FF00u, 0x13F4CCu, 0x13F4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4D4u;
label_13f4d4:
    // 0x13f4d4: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x13f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x13f4d8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x13f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x13f4dc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x13f4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f4e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13f4e4: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x13f4e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x13f4e8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13F4E8u;
    {
        const bool branch_taken_0x13f4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f4e8) {
            ctx->pc = 0x13F520u;
            goto label_13f520;
        }
    }
    ctx->pc = 0x13F4F0u;
    // 0x13f4f0: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x13f4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13f4f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13f4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13f4f8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x13f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13f4fc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13f500: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13f500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13f504: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13f504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f508: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13f508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13f50c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13F50Cu;
    {
        const bool branch_taken_0x13f50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f50c) {
            ctx->pc = 0x13F574u;
            goto label_13f574;
        }
    }
    ctx->pc = 0x13F514u;
    // 0x13f514: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13f514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13f518: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x13F518u;
    {
        const bool branch_taken_0x13f518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F518u;
        // 0x13f51c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f518) {
            ctx->pc = 0x13F574u;
            goto label_13f574;
        }
    }
    ctx->pc = 0x13F520u;
label_13f520:
    // 0x13f520: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x13f520u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x13f524: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x13f524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13f528: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x13f528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13f52c: 0x2812  mflo        $a1
    ctx->pc = 0x13f52cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x13f530: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x13f530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13f534: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x13f534u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x13f538: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F538u;
    {
        const bool branch_taken_0x13f538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f538) {
            ctx->pc = 0x13F544u;
            goto label_13f544;
        }
    }
    ctx->pc = 0x13F540u;
    // 0x13f540: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x13f540u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_13f544:
    // 0x13f544: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x13f544u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x13f548: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x13f548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13f54c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x13f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13f550: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13f550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13f554: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13f554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f558: 0x2010  mfhi        $a0
    ctx->pc = 0x13f558u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x13f55c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13f560: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13f560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13f564: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F564u;
    {
        const bool branch_taken_0x13f564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f564) {
            ctx->pc = 0x13F574u;
            goto label_13f574;
        }
    }
    ctx->pc = 0x13F56Cu;
    // 0x13f56c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13f570: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13f570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_13f574:
    // 0x13f574: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x13f574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x13f578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13f57c: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x13f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x13f580: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13f580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f584: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13F584u;
    {
        const bool branch_taken_0x13f584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f584) {
            ctx->pc = 0x13F5CCu;
            goto label_13f5cc;
        }
    }
    ctx->pc = 0x13F58Cu;
    // 0x13f58c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13F58Cu;
    SET_GPR_U32(ctx, 31, 0x13F594u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13F58Cu, 0x13F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F594u;
label_13f594:
    // 0x13f594: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13F594u;
    {
        const bool branch_taken_0x13f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f594) {
            ctx->pc = 0x13F5CCu;
            goto label_13f5cc;
        }
    }
    ctx->pc = 0x13F59Cu;
label_13f59c:
    // 0x13f59c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x13f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13f5a0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x13f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13f5a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f5a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f5ac: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13F5ACu;
    SET_GPR_U32(ctx, 31, 0x13F5B4u);
    ctx->pc = 0x13F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F5ACu;
    // 0x13f5b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13F5ACu, 0x13F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5B4u;
label_13f5b4:
    // 0x13f5b4: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x13F5B4u;
    SET_GPR_U32(ctx, 31, 0x13F5BCu);
    ctx->pc = 0x13F5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F5B4u;
    // 0x13f5b8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x13F5B4u, 0x13F5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5BCu;
label_13f5bc:
    // 0x13f5bc: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x13f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x13f5c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f5c4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x13f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13f5c8: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x13f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_13f5cc:
    // 0x13f5cc: 0x0  nop
    ctx->pc = 0x13f5ccu;
    // NOP
    // 0x13f5d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x13f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f5d4: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x13f5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x13f5d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x13f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13f5dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13f5e0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x13f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x13f5e4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x13f5e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13f5e8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13F5E8u;
    {
        const bool branch_taken_0x13f5e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f5e8) {
            ctx->pc = 0x13F59Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f59c;
        }
    }
    ctx->pc = 0x13F5F0u;
    // 0x13f5f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13f5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f5f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f5f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f5fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f600: 0x3e00008  jr          $ra
    ctx->pc = 0x13F600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F600u;
        // 0x13f604: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F608u;
}
