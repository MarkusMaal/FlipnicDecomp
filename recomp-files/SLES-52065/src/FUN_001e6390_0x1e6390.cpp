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

// Function: FUN_001e6390
// Address: 0x1e6390 - 0x1e651c
void FUN_001e6390_0x1e6390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6390_0x1e6390");
#endif

    switch (ctx->pc) {
        case 0x1e6390u: goto label_1e6390;
        case 0x1e6394u: goto label_1e6394;
        case 0x1e6398u: goto label_1e6398;
        case 0x1e639cu: goto label_1e639c;
        case 0x1e63a0u: goto label_1e63a0;
        case 0x1e63a4u: goto label_1e63a4;
        case 0x1e63a8u: goto label_1e63a8;
        case 0x1e63acu: goto label_1e63ac;
        case 0x1e63b0u: goto label_1e63b0;
        case 0x1e63b4u: goto label_1e63b4;
        case 0x1e63b8u: goto label_1e63b8;
        case 0x1e63bcu: goto label_1e63bc;
        case 0x1e63c0u: goto label_1e63c0;
        case 0x1e63c4u: goto label_1e63c4;
        case 0x1e63c8u: goto label_1e63c8;
        case 0x1e63ccu: goto label_1e63cc;
        case 0x1e63d0u: goto label_1e63d0;
        case 0x1e63d4u: goto label_1e63d4;
        case 0x1e63d8u: goto label_1e63d8;
        case 0x1e63dcu: goto label_1e63dc;
        case 0x1e63e0u: goto label_1e63e0;
        case 0x1e63e4u: goto label_1e63e4;
        case 0x1e63e8u: goto label_1e63e8;
        case 0x1e63ecu: goto label_1e63ec;
        case 0x1e63f0u: goto label_1e63f0;
        case 0x1e63f4u: goto label_1e63f4;
        case 0x1e63f8u: goto label_1e63f8;
        case 0x1e63fcu: goto label_1e63fc;
        case 0x1e6400u: goto label_1e6400;
        case 0x1e6404u: goto label_1e6404;
        case 0x1e6408u: goto label_1e6408;
        case 0x1e640cu: goto label_1e640c;
        case 0x1e6410u: goto label_1e6410;
        case 0x1e6414u: goto label_1e6414;
        case 0x1e6418u: goto label_1e6418;
        case 0x1e641cu: goto label_1e641c;
        case 0x1e6420u: goto label_1e6420;
        case 0x1e6424u: goto label_1e6424;
        case 0x1e6428u: goto label_1e6428;
        case 0x1e642cu: goto label_1e642c;
        case 0x1e6430u: goto label_1e6430;
        case 0x1e6434u: goto label_1e6434;
        case 0x1e6438u: goto label_1e6438;
        case 0x1e643cu: goto label_1e643c;
        case 0x1e6440u: goto label_1e6440;
        case 0x1e6444u: goto label_1e6444;
        case 0x1e6448u: goto label_1e6448;
        case 0x1e644cu: goto label_1e644c;
        case 0x1e6450u: goto label_1e6450;
        case 0x1e6454u: goto label_1e6454;
        case 0x1e6458u: goto label_1e6458;
        case 0x1e645cu: goto label_1e645c;
        case 0x1e6460u: goto label_1e6460;
        case 0x1e6464u: goto label_1e6464;
        case 0x1e6468u: goto label_1e6468;
        case 0x1e646cu: goto label_1e646c;
        case 0x1e6470u: goto label_1e6470;
        case 0x1e6474u: goto label_1e6474;
        case 0x1e6478u: goto label_1e6478;
        case 0x1e647cu: goto label_1e647c;
        case 0x1e6480u: goto label_1e6480;
        case 0x1e6484u: goto label_1e6484;
        case 0x1e6488u: goto label_1e6488;
        case 0x1e648cu: goto label_1e648c;
        case 0x1e6490u: goto label_1e6490;
        case 0x1e6494u: goto label_1e6494;
        case 0x1e6498u: goto label_1e6498;
        case 0x1e649cu: goto label_1e649c;
        case 0x1e64a0u: goto label_1e64a0;
        case 0x1e64a4u: goto label_1e64a4;
        case 0x1e64a8u: goto label_1e64a8;
        case 0x1e64acu: goto label_1e64ac;
        case 0x1e64b0u: goto label_1e64b0;
        case 0x1e64b4u: goto label_1e64b4;
        case 0x1e64b8u: goto label_1e64b8;
        case 0x1e64bcu: goto label_1e64bc;
        case 0x1e64c0u: goto label_1e64c0;
        case 0x1e64c4u: goto label_1e64c4;
        case 0x1e64c8u: goto label_1e64c8;
        case 0x1e64ccu: goto label_1e64cc;
        case 0x1e64d0u: goto label_1e64d0;
        case 0x1e64d4u: goto label_1e64d4;
        case 0x1e64d8u: goto label_1e64d8;
        case 0x1e64dcu: goto label_1e64dc;
        case 0x1e64e0u: goto label_1e64e0;
        case 0x1e64e4u: goto label_1e64e4;
        case 0x1e64e8u: goto label_1e64e8;
        case 0x1e64ecu: goto label_1e64ec;
        case 0x1e64f0u: goto label_1e64f0;
        case 0x1e64f4u: goto label_1e64f4;
        case 0x1e64f8u: goto label_1e64f8;
        case 0x1e64fcu: goto label_1e64fc;
        case 0x1e6500u: goto label_1e6500;
        case 0x1e6504u: goto label_1e6504;
        case 0x1e6508u: goto label_1e6508;
        case 0x1e650cu: goto label_1e650c;
        case 0x1e6510u: goto label_1e6510;
        case 0x1e6514u: goto label_1e6514;
        case 0x1e6518u: goto label_1e6518;
        default: break;
    }

    ctx->pc = 0x1e6390u;

label_1e6390:
    // 0x1e6390: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e6390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e6394:
    // 0x1e6394: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e6394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e6398:
    // 0x1e6398: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e6398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e639c:
    // 0x1e639c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e63a0:
    // 0x1e63a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e63a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e63a4:
    // 0x1e63a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e63a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e63a8:
    // 0x1e63a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e63a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e63ac:
    // 0x1e63ac: 0x2e41000d  sltiu       $at, $s2, 0xD
    ctx->pc = 0x1e63acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_1e63b0:
    // 0x1e63b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e63b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e63b4:
    // 0x1e63b4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e63b8:
    if (ctx->pc == 0x1E63B8u) {
        ctx->pc = 0x1E63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63B4u;
        // 0x1e63b8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E63BCu;
        goto label_1e63bc;
    }
    ctx->pc = 0x1E63B4u;
    {
        const bool branch_taken_0x1e63b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63B4u;
        // 0x1e63b8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63b4) {
            ctx->pc = 0x1E63C4u;
            goto label_1e63c4;
        }
    }
    ctx->pc = 0x1E63BCu;
label_1e63bc:
    // 0x1e63bc: 0x10000050  b           . + 4 + (0x50 << 2)
label_1e63c0:
    if (ctx->pc == 0x1E63C0u) {
        ctx->pc = 0x1E63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63BCu;
        // 0x1e63c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E63C4u;
        goto label_1e63c4;
    }
    ctx->pc = 0x1E63BCu;
    {
        const bool branch_taken_0x1e63bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63BCu;
        // 0x1e63c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63bc) {
            ctx->pc = 0x1E6500u;
            goto label_1e6500;
        }
    }
    ctx->pc = 0x1E63C4u;
label_1e63c4:
    // 0x1e63c4: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1e63c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1e63c8:
    // 0x1e63c8: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_1e63cc:
    if (ctx->pc == 0x1E63CCu) {
        ctx->pc = 0x1E63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63C8u;
        // 0x1e63cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E63D0u;
        goto label_1e63d0;
    }
    ctx->pc = 0x1E63C8u;
    {
        const bool branch_taken_0x1e63c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63C8u;
        // 0x1e63cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63c8) {
            ctx->pc = 0x1E643Cu;
            goto label_1e643c;
        }
    }
    ctx->pc = 0x1E63D0u;
label_1e63d0:
    // 0x1e63d0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1e63d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1e63d4:
    // 0x1e63d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e63d8:
    // 0x1e63d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e63dc:
    // 0x1e63dc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_1e63e0:
    if (ctx->pc == 0x1E63E0u) {
        ctx->pc = 0x1E63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63DCu;
        // 0x1e63e0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E63E4u;
        goto label_1e63e4;
    }
    ctx->pc = 0x1E63DCu;
    {
        const bool branch_taken_0x1e63dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63DCu;
        // 0x1e63e0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63dc) {
            ctx->pc = 0x1E63F4u;
            goto label_1e63f4;
        }
    }
    ctx->pc = 0x1E63E4u;
label_1e63e4:
    // 0x1e63e4: 0xc080490  jal         func_201240
label_1e63e8:
    if (ctx->pc == 0x1E63E8u) {
        ctx->pc = 0x1E63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63E4u;
        // 0x1e63e8: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E63ECu;
        goto label_1e63ec;
    }
    ctx->pc = 0x1E63E4u;
    SET_GPR_U32(ctx, 31, 0x1E63ECu);
    ctx->pc = 0x1E63E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E63E4u;
    // 0x1e63e8: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201240u, 0x1E63E4u, 0x1E63ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E63ECu;
label_1e63ec:
    // 0x1e63ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e63f0:
    if (ctx->pc == 0x1E63F0u) {
        ctx->pc = 0x1E63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63ECu;
        // 0x1e63f0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E63F4u;
        goto label_1e63f4;
    }
    ctx->pc = 0x1E63ECu;
    {
        const bool branch_taken_0x1e63ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63ECu;
        // 0x1e63f0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63ec) {
            ctx->pc = 0x1E6410u;
            goto label_1e6410;
        }
    }
    ctx->pc = 0x1E63F4u;
label_1e63f4:
    // 0x1e63f4: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1e63f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1e63f8:
    // 0x1e63f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e63fc:
    // 0x1e63fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e6400:
    // 0x1e6400: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e6400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e6404:
    // 0x1e6404: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e6404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e6408:
    // 0x1e6408: 0x0  nop
    ctx->pc = 0x1e6408u;
    // NOP
label_1e640c:
    // 0x1e640c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e640cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e6410:
    // 0x1e6410: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e6414:
    if (ctx->pc == 0x1E6414u) {
        ctx->pc = 0x1E6418u;
        goto label_1e6418;
    }
    ctx->pc = 0x1E6410u;
    {
        const bool branch_taken_0x1e6410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e6410) {
            ctx->pc = 0x1E6420u;
            goto label_1e6420;
        }
    }
    ctx->pc = 0x1E6418u;
label_1e6418:
    // 0x1e6418: 0x10000039  b           . + 4 + (0x39 << 2)
label_1e641c:
    if (ctx->pc == 0x1E641Cu) {
        ctx->pc = 0x1E641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6418u;
        // 0x1e641c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6420u;
        goto label_1e6420;
    }
    ctx->pc = 0x1E6418u;
    {
        const bool branch_taken_0x1e6418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6418u;
        // 0x1e641c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6418) {
            ctx->pc = 0x1E6500u;
            goto label_1e6500;
        }
    }
    ctx->pc = 0x1E6420u;
label_1e6420:
    // 0x1e6420: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x1e6420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1e6424:
    // 0x1e6424: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e6424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1e6428:
    // 0x1e6428: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e6428u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e642c:
    // 0x1e642c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e642cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e6430:
    // 0x1e6430: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1e6430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1e6434:
    // 0x1e6434: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1e6438:
    if (ctx->pc == 0x1E6438u) {
        ctx->pc = 0x1E643Cu;
        goto label_1e643c;
    }
    ctx->pc = 0x1E6434u;
    {
        const bool branch_taken_0x1e6434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6434) {
            ctx->pc = 0x1E63D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e63d0;
        }
    }
    ctx->pc = 0x1E643Cu;
label_1e643c:
    // 0x1e643c: 0x0  nop
    ctx->pc = 0x1e643cu;
    // NOP
label_1e6440:
    // 0x1e6440: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x1e6440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1e6444:
    // 0x1e6444: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1e6444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1e6448:
    // 0x1e6448: 0x26650028  addiu       $a1, $s3, 0x28
    ctx->pc = 0x1e6448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_1e644c:
    // 0x1e644c: 0xd23821  addu        $a3, $a2, $s2
    ctx->pc = 0x1e644cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1e6450:
    // 0x1e6450: 0x27a80064  addiu       $t0, $sp, 0x64
    ctx->pc = 0x1e6450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1e6454:
    // 0x1e6454: 0x27a9006e  addiu       $t1, $sp, 0x6E
    ctx->pc = 0x1e6454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 110));
label_1e6458:
    // 0x1e6458: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x1e6458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e645c:
    // 0x1e645c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e645cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6460:
    // 0x1e6460: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e6460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e6464:
    // 0x1e6464: 0x320f809  jalr        $t9
label_1e6468:
    if (ctx->pc == 0x1E6468u) {
        ctx->pc = 0x1E6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6464u;
        // 0x1e6468: 0x27ab0068  addiu       $t3, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E646Cu;
        goto label_1e646c;
    }
    ctx->pc = 0x1E6464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E646Cu);
        ctx->pc = 0x1E6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6464u;
        // 0x1e6468: 0x27ab0068  addiu       $t3, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6464u, 0x1E646Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E646Cu;
label_1e646c:
    // 0x1e646c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e646cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e6470:
    // 0x1e6470: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1e6474:
    if (ctx->pc == 0x1E6474u) {
        ctx->pc = 0x1E6478u;
        goto label_1e6478;
    }
    ctx->pc = 0x1E6470u;
    {
        const bool branch_taken_0x1e6470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6470) {
            ctx->pc = 0x1E64B4u;
            goto label_1e64b4;
        }
    }
    ctx->pc = 0x1E6478u;
label_1e6478:
    // 0x1e6478: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e6478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e647c:
    // 0x1e647c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1e6480:
    if (ctx->pc == 0x1E6480u) {
        ctx->pc = 0x1E6480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E647Cu;
        // 0x1e6480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6484u;
        goto label_1e6484;
    }
    ctx->pc = 0x1E647Cu;
    {
        const bool branch_taken_0x1e647c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E647Cu;
        // 0x1e6480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e647c) {
            ctx->pc = 0x1E64ACu;
            goto label_1e64ac;
        }
    }
    ctx->pc = 0x1E6484u;
label_1e6484:
    // 0x1e6484: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1e6488:
    if (ctx->pc == 0x1E6488u) {
        ctx->pc = 0x1E648Cu;
        goto label_1e648c;
    }
    ctx->pc = 0x1E6484u;
    {
        const bool branch_taken_0x1e6484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6484) {
            ctx->pc = 0x1E64A0u;
            goto label_1e64a0;
        }
    }
    ctx->pc = 0x1E648Cu;
label_1e648c:
    // 0x1e648c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6490:
    // 0x1e6490: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e6494:
    if (ctx->pc == 0x1E6494u) {
        ctx->pc = 0x1E6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6490u;
        // 0x1e6494: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6498u;
        goto label_1e6498;
    }
    ctx->pc = 0x1E6490u;
    {
        const bool branch_taken_0x1e6490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6490u;
        // 0x1e6494: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6490) {
            ctx->pc = 0x1E64A4u;
            goto label_1e64a4;
        }
    }
    ctx->pc = 0x1E6498u;
label_1e6498:
    // 0x1e6498: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e649c:
    if (ctx->pc == 0x1E649Cu) {
        ctx->pc = 0x1E64A0u;
        goto label_1e64a0;
    }
    ctx->pc = 0x1E6498u;
    {
        const bool branch_taken_0x1e6498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6498) {
            ctx->pc = 0x1E64B4u;
            goto label_1e64b4;
        }
    }
    ctx->pc = 0x1E64A0u;
label_1e64a0:
    // 0x1e64a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e64a4:
    // 0x1e64a4: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e64a8:
    if (ctx->pc == 0x1E64A8u) {
        ctx->pc = 0x1E64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64A4u;
        // 0x1e64a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64ACu;
        goto label_1e64ac;
    }
    ctx->pc = 0x1E64A4u;
    {
        const bool branch_taken_0x1e64a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64A4u;
        // 0x1e64a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64a4) {
            ctx->pc = 0x1E6504u;
            goto label_1e6504;
        }
    }
    ctx->pc = 0x1E64ACu;
label_1e64ac:
    // 0x1e64ac: 0x97a20058  lhu         $v0, 0x58($sp)
    ctx->pc = 0x1e64acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
label_1e64b0:
    // 0x1e64b0: 0xa7a2006e  sh          $v0, 0x6E($sp)
    ctx->pc = 0x1e64b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 110), (uint16_t)GPR_U32(ctx, 2));
label_1e64b4:
    // 0x1e64b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_1e64b8:
    if (ctx->pc == 0x1E64B8u) {
        ctx->pc = 0x1E64BCu;
        goto label_1e64bc;
    }
    ctx->pc = 0x1E64B4u;
    {
        const bool branch_taken_0x1e64b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e64b4) {
            ctx->pc = 0x1E64F8u;
            goto label_1e64f8;
        }
    }
    ctx->pc = 0x1E64BCu;
label_1e64bc:
    // 0x1e64bc: 0x1a40000e  blez        $s2, . + 4 + (0xE << 2)
label_1e64c0:
    if (ctx->pc == 0x1E64C0u) {
        ctx->pc = 0x1E64C4u;
        goto label_1e64c4;
    }
    ctx->pc = 0x1E64BCu;
    {
        const bool branch_taken_0x1e64bc = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1e64bc) {
            ctx->pc = 0x1E64F8u;
            goto label_1e64f8;
        }
    }
    ctx->pc = 0x1E64C4u;
label_1e64c4:
    // 0x1e64c4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e64c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1e64c8:
    // 0x1e64c8: 0x27a20058  addiu       $v0, $sp, 0x58
    ctx->pc = 0x1e64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1e64cc:
    // 0x1e64cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e64d0:
    // 0x1e64d0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1e64d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e64d4:
    // 0x1e64d4: 0xc080dea  jal         func_2037A8
label_1e64d8:
    if (ctx->pc == 0x1E64D8u) {
        ctx->pc = 0x1E64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64D4u;
        // 0x1e64d8: 0x8e650024  lw          $a1, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64DCu;
        goto label_1e64dc;
    }
    ctx->pc = 0x1E64D4u;
    SET_GPR_U32(ctx, 31, 0x1E64DCu);
    ctx->pc = 0x1E64D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E64D4u;
    // 0x1e64d8: 0x8e650024  lw          $a1, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E64D4u, 0x1E64DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E64DCu;
label_1e64dc:
    // 0x1e64dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e64dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e64e0:
    // 0x1e64e0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e64e4:
    if (ctx->pc == 0x1E64E4u) {
        ctx->pc = 0x1E64E8u;
        goto label_1e64e8;
    }
    ctx->pc = 0x1E64E0u;
    {
        const bool branch_taken_0x1e64e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e64e0) {
            ctx->pc = 0x1E64F0u;
            goto label_1e64f0;
        }
    }
    ctx->pc = 0x1E64E8u;
label_1e64e8:
    // 0x1e64e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e64ec:
    if (ctx->pc == 0x1E64ECu) {
        ctx->pc = 0x1E64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64E8u;
        // 0x1e64ec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64F0u;
        goto label_1e64f0;
    }
    ctx->pc = 0x1E64E8u;
    {
        const bool branch_taken_0x1e64e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64E8u;
        // 0x1e64ec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64e8) {
            ctx->pc = 0x1E6500u;
            goto label_1e6500;
        }
    }
    ctx->pc = 0x1E64F0u;
label_1e64f0:
    // 0x1e64f0: 0x1e40fff4  bgtz        $s2, . + 4 + (-0xC << 2)
label_1e64f4:
    if (ctx->pc == 0x1E64F4u) {
        ctx->pc = 0x1E64F8u;
        goto label_1e64f8;
    }
    ctx->pc = 0x1E64F0u;
    {
        const bool branch_taken_0x1e64f0 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1e64f0) {
            ctx->pc = 0x1E64C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e64c4;
        }
    }
    ctx->pc = 0x1E64F8u;
label_1e64f8:
    // 0x1e64f8: 0x97a2006e  lhu         $v0, 0x6E($sp)
    ctx->pc = 0x1e64f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 110)));
label_1e64fc:
    // 0x1e64fc: 0x0  nop
    ctx->pc = 0x1e64fcu;
    // NOP
label_1e6500:
    // 0x1e6500: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e6500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e6504:
    // 0x1e6504: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e6504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6508:
    // 0x1e6508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e6508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e650c:
    // 0x1e650c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e650cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6510:
    // 0x1e6510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6514:
    // 0x1e6514: 0x3e00008  jr          $ra
label_1e6518:
    if (ctx->pc == 0x1E6518u) {
        ctx->pc = 0x1E6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6514u;
        // 0x1e6518: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E651Cu;
        goto label_fallthrough_0x1e6514;
    }
    ctx->pc = 0x1E6514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6514u;
        // 0x1e6518: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e6514:
    ctx->pc = 0x1E651Cu;
}
