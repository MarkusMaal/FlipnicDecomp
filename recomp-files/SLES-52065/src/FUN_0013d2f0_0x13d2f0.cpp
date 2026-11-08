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

// Function: FUN_0013d2f0
// Address: 0x13d2f0 - 0x13d414
void FUN_0013d2f0_0x13d2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d2f0_0x13d2f0");
#endif

    switch (ctx->pc) {
        case 0x13d2f0u: goto label_13d2f0;
        case 0x13d2f4u: goto label_13d2f4;
        case 0x13d2f8u: goto label_13d2f8;
        case 0x13d2fcu: goto label_13d2fc;
        case 0x13d300u: goto label_13d300;
        case 0x13d304u: goto label_13d304;
        case 0x13d308u: goto label_13d308;
        case 0x13d30cu: goto label_13d30c;
        case 0x13d310u: goto label_13d310;
        case 0x13d314u: goto label_13d314;
        case 0x13d318u: goto label_13d318;
        case 0x13d31cu: goto label_13d31c;
        case 0x13d320u: goto label_13d320;
        case 0x13d324u: goto label_13d324;
        case 0x13d328u: goto label_13d328;
        case 0x13d32cu: goto label_13d32c;
        case 0x13d330u: goto label_13d330;
        case 0x13d334u: goto label_13d334;
        case 0x13d338u: goto label_13d338;
        case 0x13d33cu: goto label_13d33c;
        case 0x13d340u: goto label_13d340;
        case 0x13d344u: goto label_13d344;
        case 0x13d348u: goto label_13d348;
        case 0x13d34cu: goto label_13d34c;
        case 0x13d350u: goto label_13d350;
        case 0x13d354u: goto label_13d354;
        case 0x13d358u: goto label_13d358;
        case 0x13d35cu: goto label_13d35c;
        case 0x13d360u: goto label_13d360;
        case 0x13d364u: goto label_13d364;
        case 0x13d368u: goto label_13d368;
        case 0x13d36cu: goto label_13d36c;
        case 0x13d370u: goto label_13d370;
        case 0x13d374u: goto label_13d374;
        case 0x13d378u: goto label_13d378;
        case 0x13d37cu: goto label_13d37c;
        case 0x13d380u: goto label_13d380;
        case 0x13d384u: goto label_13d384;
        case 0x13d388u: goto label_13d388;
        case 0x13d38cu: goto label_13d38c;
        case 0x13d390u: goto label_13d390;
        case 0x13d394u: goto label_13d394;
        case 0x13d398u: goto label_13d398;
        case 0x13d39cu: goto label_13d39c;
        case 0x13d3a0u: goto label_13d3a0;
        case 0x13d3a4u: goto label_13d3a4;
        case 0x13d3a8u: goto label_13d3a8;
        case 0x13d3acu: goto label_13d3ac;
        case 0x13d3b0u: goto label_13d3b0;
        case 0x13d3b4u: goto label_13d3b4;
        case 0x13d3b8u: goto label_13d3b8;
        case 0x13d3bcu: goto label_13d3bc;
        case 0x13d3c0u: goto label_13d3c0;
        case 0x13d3c4u: goto label_13d3c4;
        case 0x13d3c8u: goto label_13d3c8;
        case 0x13d3ccu: goto label_13d3cc;
        case 0x13d3d0u: goto label_13d3d0;
        case 0x13d3d4u: goto label_13d3d4;
        case 0x13d3d8u: goto label_13d3d8;
        case 0x13d3dcu: goto label_13d3dc;
        case 0x13d3e0u: goto label_13d3e0;
        case 0x13d3e4u: goto label_13d3e4;
        case 0x13d3e8u: goto label_13d3e8;
        case 0x13d3ecu: goto label_13d3ec;
        case 0x13d3f0u: goto label_13d3f0;
        case 0x13d3f4u: goto label_13d3f4;
        case 0x13d3f8u: goto label_13d3f8;
        case 0x13d3fcu: goto label_13d3fc;
        case 0x13d400u: goto label_13d400;
        case 0x13d404u: goto label_13d404;
        case 0x13d408u: goto label_13d408;
        case 0x13d40cu: goto label_13d40c;
        case 0x13d410u: goto label_13d410;
        default: break;
    }

    ctx->pc = 0x13d2f0u;

label_13d2f0:
    // 0x13d2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13d2f4:
    // 0x13d2f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13d2f8:
    // 0x13d2f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13d2fc:
    // 0x13d2fc: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x13d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
label_13d300:
    // 0x13d300: 0x8c87016c  lw          $a3, 0x16C($a0)
    ctx->pc = 0x13d300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
label_13d304:
    // 0x13d304: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x13d304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_13d308:
    // 0x13d308: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x13d308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_13d30c:
    // 0x13d30c: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
label_13d310:
    if (ctx->pc == 0x13D310u) {
        ctx->pc = 0x13D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D30Cu;
        // 0x13d310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D314u;
        goto label_13d314;
    }
    ctx->pc = 0x13D30Cu;
    {
        const bool branch_taken_0x13d30c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D30Cu;
        // 0x13d310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d30c) {
            ctx->pc = 0x13D404u;
            goto label_13d404;
        }
    }
    ctx->pc = 0x13D314u;
label_13d314:
    // 0x13d314: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13d314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13d318:
    // 0x13d318: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_13d31c:
    if (ctx->pc == 0x13D31Cu) {
        ctx->pc = 0x13D320u;
        goto label_13d320;
    }
    ctx->pc = 0x13D318u;
    {
        const bool branch_taken_0x13d318 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x13d318) {
            ctx->pc = 0x13D328u;
            goto label_13d328;
        }
    }
    ctx->pc = 0x13D320u;
label_13d320:
    // 0x13d320: 0x10000038  b           . + 4 + (0x38 << 2)
label_13d324:
    if (ctx->pc == 0x13D324u) {
        ctx->pc = 0x13D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D320u;
        // 0x13d324: 0xae03017c  sw          $v1, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D328u;
        goto label_13d328;
    }
    ctx->pc = 0x13D320u;
    {
        const bool branch_taken_0x13d320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D320u;
        // 0x13d324: 0xae03017c  sw          $v1, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d320) {
            ctx->pc = 0x13D404u;
            goto label_13d404;
        }
    }
    ctx->pc = 0x13D328u;
label_13d328:
    // 0x13d328: 0x8e08017c  lw          $t0, 0x17C($s0)
    ctx->pc = 0x13d328u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_13d32c:
    // 0x13d32c: 0x11030023  beq         $t0, $v1, . + 4 + (0x23 << 2)
label_13d330:
    if (ctx->pc == 0x13D330u) {
        ctx->pc = 0x13D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D32Cu;
        // 0x13d330: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D334u;
        goto label_13d334;
    }
    ctx->pc = 0x13D32Cu;
    {
        const bool branch_taken_0x13d32c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x13D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D32Cu;
        // 0x13d330: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d32c) {
            ctx->pc = 0x13D3BCu;
            goto label_13d3bc;
        }
    }
    ctx->pc = 0x13D334u;
label_13d334:
    // 0x13d334: 0x10c40021  beq         $a2, $a0, . + 4 + (0x21 << 2)
label_13d338:
    if (ctx->pc == 0x13D338u) {
        ctx->pc = 0x13D33Cu;
        goto label_13d33c;
    }
    ctx->pc = 0x13D334u;
    {
        const bool branch_taken_0x13d334 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13d334) {
            ctx->pc = 0x13D3BCu;
            goto label_13d3bc;
        }
    }
    ctx->pc = 0x13D33Cu;
label_13d33c:
    // 0x13d33c: 0x8e060178  lw          $a2, 0x178($s0)
    ctx->pc = 0x13d33cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_13d340:
    // 0x13d340: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
label_13d344:
    if (ctx->pc == 0x13D344u) {
        ctx->pc = 0x13D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D340u;
        // 0x13d344: 0x107082a  slt         $at, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D348u;
        goto label_13d348;
    }
    ctx->pc = 0x13D340u;
    {
        const bool branch_taken_0x13d340 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D340u;
        // 0x13d344: 0x107082a  slt         $at, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d340) {
            ctx->pc = 0x13D3BCu;
            goto label_13d3bc;
        }
    }
    ctx->pc = 0x13D348u;
label_13d348:
    // 0x13d348: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_13d34c:
    if (ctx->pc == 0x13D34Cu) {
        ctx->pc = 0x13D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D348u;
        // 0x13d34c: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D350u;
        goto label_13d350;
    }
    ctx->pc = 0x13D348u;
    {
        const bool branch_taken_0x13d348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D348u;
        // 0x13d34c: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d348) {
            ctx->pc = 0x13D3BCu;
            goto label_13d3bc;
        }
    }
    ctx->pc = 0x13D350u;
label_13d350:
    // 0x13d350: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x13d350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_13d354:
    // 0x13d354: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x13d354u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_13d358:
    // 0x13d358: 0x1064002a  beq         $v1, $a0, . + 4 + (0x2A << 2)
label_13d35c:
    if (ctx->pc == 0x13D35Cu) {
        ctx->pc = 0x13D360u;
        goto label_13d360;
    }
    ctx->pc = 0x13D358u;
    {
        const bool branch_taken_0x13d358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13d358) {
            ctx->pc = 0x13D404u;
            goto label_13d404;
        }
    }
    ctx->pc = 0x13D360u;
label_13d360:
    // 0x13d360: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13d364:
    // 0x13d364: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_13d368:
    if (ctx->pc == 0x13D368u) {
        ctx->pc = 0x13D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D364u;
        // 0x13d368: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D36Cu;
        goto label_13d36c;
    }
    ctx->pc = 0x13D364u;
    {
        const bool branch_taken_0x13d364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D364u;
        // 0x13d368: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d364) {
            ctx->pc = 0x13D380u;
            goto label_13d380;
        }
    }
    ctx->pc = 0x13D36Cu;
label_13d36c:
    // 0x13d36c: 0x2604019c  addiu       $a0, $s0, 0x19C
    ctx->pc = 0x13d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 412));
label_13d370:
    // 0x13d370: 0xc04fd04  jal         func_13F410
label_13d374:
    if (ctx->pc == 0x13D374u) {
        ctx->pc = 0x13D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D370u;
        // 0x13d374: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D378u;
        goto label_13d378;
    }
    ctx->pc = 0x13D370u;
    SET_GPR_U32(ctx, 31, 0x13D378u);
    ctx->pc = 0x13D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D370u;
    // 0x13d374: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F410u, 0x13D370u, 0x13D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D378u;
label_13d378:
    // 0x13d378: 0x10000023  b           . + 4 + (0x23 << 2)
label_13d37c:
    if (ctx->pc == 0x13D37Cu) {
        ctx->pc = 0x13D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D378u;
        // 0x13d37c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D380u;
        goto label_13d380;
    }
    ctx->pc = 0x13D378u;
    {
        const bool branch_taken_0x13d378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D378u;
        // 0x13d37c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d378) {
            ctx->pc = 0x13D408u;
            goto label_13d408;
        }
    }
    ctx->pc = 0x13D380u;
label_13d380:
    // 0x13d380: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_13d384:
    if (ctx->pc == 0x13D384u) {
        ctx->pc = 0x13D388u;
        goto label_13d388;
    }
    ctx->pc = 0x13D380u;
    {
        const bool branch_taken_0x13d380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d380) {
            ctx->pc = 0x13D3BCu;
            goto label_13d3bc;
        }
    }
    ctx->pc = 0x13D388u;
label_13d388:
    // 0x13d388: 0x10000003  b           . + 4 + (0x3 << 2)
label_13d38c:
    if (ctx->pc == 0x13D38Cu) {
        ctx->pc = 0x13D390u;
        goto label_13d390;
    }
    ctx->pc = 0x13D388u;
    {
        const bool branch_taken_0x13d388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d388) {
            ctx->pc = 0x13D398u;
            goto label_13d398;
        }
    }
    ctx->pc = 0x13D390u;
label_13d390:
    // 0x13d390: 0xc04fccc  jal         func_13F330
label_13d394:
    if (ctx->pc == 0x13D394u) {
        ctx->pc = 0x13D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D390u;
        // 0x13d394: 0x2604019c  addiu       $a0, $s0, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 412));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D398u;
        goto label_13d398;
    }
    ctx->pc = 0x13D390u;
    SET_GPR_U32(ctx, 31, 0x13D398u);
    ctx->pc = 0x13D394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D390u;
    // 0x13d394: 0x2604019c  addiu       $a0, $s0, 0x19C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x13D390u, 0x13D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D398u;
label_13d398:
    // 0x13d398: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x13d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_13d39c:
    // 0x13d39c: 0x0  nop
    ctx->pc = 0x13d39cu;
    // NOP
label_13d3a0:
    // 0x13d3a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_13d3a4:
    if (ctx->pc == 0x13D3A4u) {
        ctx->pc = 0x13D3A8u;
        goto label_13d3a8;
    }
    ctx->pc = 0x13D3A0u;
    {
        const bool branch_taken_0x13d3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d3a0) {
            ctx->pc = 0x13D390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d390;
        }
    }
    ctx->pc = 0x13D3A8u;
label_13d3a8:
    // 0x13d3a8: 0x2604019c  addiu       $a0, $s0, 0x19C
    ctx->pc = 0x13d3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 412));
label_13d3ac:
    // 0x13d3ac: 0xc04fd04  jal         func_13F410
label_13d3b0:
    if (ctx->pc == 0x13D3B0u) {
        ctx->pc = 0x13D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3ACu;
        // 0x13d3b0: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D3B4u;
        goto label_13d3b4;
    }
    ctx->pc = 0x13D3ACu;
    SET_GPR_U32(ctx, 31, 0x13D3B4u);
    ctx->pc = 0x13D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3ACu;
    // 0x13d3b0: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F410u, 0x13D3ACu, 0x13D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3B4u;
label_13d3b4:
    // 0x13d3b4: 0x10000013  b           . + 4 + (0x13 << 2)
label_13d3b8:
    if (ctx->pc == 0x13D3B8u) {
        ctx->pc = 0x13D3BCu;
        goto label_13d3bc;
    }
    ctx->pc = 0x13D3B4u;
    {
        const bool branch_taken_0x13d3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d3b4) {
            ctx->pc = 0x13D404u;
            goto label_13d404;
        }
    }
    ctx->pc = 0x13D3BCu;
label_13d3bc:
    // 0x13d3bc: 0xc05fe4c  jal         func_17F930
label_13d3c0:
    if (ctx->pc == 0x13D3C0u) {
        ctx->pc = 0x13D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3BCu;
        // 0x13d3c0: 0xae05017c  sw          $a1, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D3C4u;
        goto label_13d3c4;
    }
    ctx->pc = 0x13D3BCu;
    SET_GPR_U32(ctx, 31, 0x13D3C4u);
    ctx->pc = 0x13D3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3BCu;
    // 0x13d3c0: 0xae05017c  sw          $a1, 0x17C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x13D3BCu, 0x13D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3C4u;
label_13d3c4:
    // 0x13d3c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13d3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d3c8:
    // 0x13d3c8: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x13d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_13d3cc:
    // 0x13d3cc: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_13d3d0:
    // 0x13d3d0: 0xc05fec0  jal         func_17FB00
label_13d3d4:
    if (ctx->pc == 0x13D3D4u) {
        ctx->pc = 0x13D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3D0u;
        // 0x13d3d4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D3D8u;
        goto label_13d3d8;
    }
    ctx->pc = 0x13D3D0u;
    SET_GPR_U32(ctx, 31, 0x13D3D8u);
    ctx->pc = 0x13D3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3D0u;
    // 0x13d3d4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x13D3D0u, 0x13D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3D8u;
label_13d3d8:
    // 0x13d3d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x13d3d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13d3dc:
    // 0x13d3dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d3e0:
    // 0x13d3e0: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x13d3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_13d3e4:
    // 0x13d3e4: 0x320f809  jalr        $t9
label_13d3e8:
    if (ctx->pc == 0x13D3E8u) {
        ctx->pc = 0x13D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3E4u;
        // 0x13d3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D3ECu;
        goto label_13d3ec;
    }
    ctx->pc = 0x13D3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D3ECu);
        ctx->pc = 0x13D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3E4u;
        // 0x13d3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D3E4u, 0x13D3ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D3ECu;
label_13d3ec:
    // 0x13d3ec: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x13d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_13d3f0:
    // 0x13d3f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13d3f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13d3f4:
    // 0x13d3f4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x13d3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_13d3f8:
    // 0x13d3f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13d3fc:
    // 0x13d3fc: 0xc05ff20  jal         func_17FC80
label_13d400:
    if (ctx->pc == 0x13D400u) {
        ctx->pc = 0x13D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3FCu;
        // 0x13d400: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D404u;
        goto label_13d404;
    }
    ctx->pc = 0x13D3FCu;
    SET_GPR_U32(ctx, 31, 0x13D404u);
    ctx->pc = 0x13D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3FCu;
    // 0x13d400: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FC80u, 0x13D3FCu, 0x13D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D404u;
label_13d404:
    // 0x13d404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13d404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13d408:
    // 0x13d408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13d40c:
    // 0x13d40c: 0x3e00008  jr          $ra
label_13d410:
    if (ctx->pc == 0x13D410u) {
        ctx->pc = 0x13D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D40Cu;
        // 0x13d410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D414u;
        goto label_fallthrough_0x13d40c;
    }
    ctx->pc = 0x13D40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D40Cu;
        // 0x13d410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13d40c:
    ctx->pc = 0x13D414u;
}
