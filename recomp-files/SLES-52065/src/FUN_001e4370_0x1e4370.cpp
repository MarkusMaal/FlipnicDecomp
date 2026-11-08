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

// Function: FUN_001e4370
// Address: 0x1e4370 - 0x1e4458
void FUN_001e4370_0x1e4370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e4370_0x1e4370");
#endif

    switch (ctx->pc) {
        case 0x1e4370u: goto label_1e4370;
        case 0x1e4374u: goto label_1e4374;
        case 0x1e4378u: goto label_1e4378;
        case 0x1e437cu: goto label_1e437c;
        case 0x1e4380u: goto label_1e4380;
        case 0x1e4384u: goto label_1e4384;
        case 0x1e4388u: goto label_1e4388;
        case 0x1e438cu: goto label_1e438c;
        case 0x1e4390u: goto label_1e4390;
        case 0x1e4394u: goto label_1e4394;
        case 0x1e4398u: goto label_1e4398;
        case 0x1e439cu: goto label_1e439c;
        case 0x1e43a0u: goto label_1e43a0;
        case 0x1e43a4u: goto label_1e43a4;
        case 0x1e43a8u: goto label_1e43a8;
        case 0x1e43acu: goto label_1e43ac;
        case 0x1e43b0u: goto label_1e43b0;
        case 0x1e43b4u: goto label_1e43b4;
        case 0x1e43b8u: goto label_1e43b8;
        case 0x1e43bcu: goto label_1e43bc;
        case 0x1e43c0u: goto label_1e43c0;
        case 0x1e43c4u: goto label_1e43c4;
        case 0x1e43c8u: goto label_1e43c8;
        case 0x1e43ccu: goto label_1e43cc;
        case 0x1e43d0u: goto label_1e43d0;
        case 0x1e43d4u: goto label_1e43d4;
        case 0x1e43d8u: goto label_1e43d8;
        case 0x1e43dcu: goto label_1e43dc;
        case 0x1e43e0u: goto label_1e43e0;
        case 0x1e43e4u: goto label_1e43e4;
        case 0x1e43e8u: goto label_1e43e8;
        case 0x1e43ecu: goto label_1e43ec;
        case 0x1e43f0u: goto label_1e43f0;
        case 0x1e43f4u: goto label_1e43f4;
        case 0x1e43f8u: goto label_1e43f8;
        case 0x1e43fcu: goto label_1e43fc;
        case 0x1e4400u: goto label_1e4400;
        case 0x1e4404u: goto label_1e4404;
        case 0x1e4408u: goto label_1e4408;
        case 0x1e440cu: goto label_1e440c;
        case 0x1e4410u: goto label_1e4410;
        case 0x1e4414u: goto label_1e4414;
        case 0x1e4418u: goto label_1e4418;
        case 0x1e441cu: goto label_1e441c;
        case 0x1e4420u: goto label_1e4420;
        case 0x1e4424u: goto label_1e4424;
        case 0x1e4428u: goto label_1e4428;
        case 0x1e442cu: goto label_1e442c;
        case 0x1e4430u: goto label_1e4430;
        case 0x1e4434u: goto label_1e4434;
        case 0x1e4438u: goto label_1e4438;
        case 0x1e443cu: goto label_1e443c;
        case 0x1e4440u: goto label_1e4440;
        case 0x1e4444u: goto label_1e4444;
        case 0x1e4448u: goto label_1e4448;
        case 0x1e444cu: goto label_1e444c;
        case 0x1e4450u: goto label_1e4450;
        case 0x1e4454u: goto label_1e4454;
        default: break;
    }

    ctx->pc = 0x1e4370u;

label_1e4370:
    // 0x1e4370: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e4370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e4374:
    // 0x1e4374: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e4374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e4378:
    // 0x1e4378: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1e4378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1e437c:
    // 0x1e437c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e437cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4380:
    // 0x1e4380: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e4380u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e4384:
    // 0x1e4384: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4388:
    // 0x1e4388: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e438c:
    // 0x1e438c: 0xc07951c  jal         func_1E5470
label_1e4390:
    if (ctx->pc == 0x1E4390u) {
        ctx->pc = 0x1E4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E438Cu;
        // 0x1e4390: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4394u;
        goto label_1e4394;
    }
    ctx->pc = 0x1E438Cu;
    SET_GPR_U32(ctx, 31, 0x1E4394u);
    ctx->pc = 0x1E4390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E438Cu;
    // 0x1e4390: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5470u, 0x1E438Cu, 0x1E4394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4394u;
label_1e4394:
    // 0x1e4394: 0x27c40060  addiu       $a0, $fp, 0x60
    ctx->pc = 0x1e4394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_1e4398:
    // 0x1e4398: 0xc07911c  jal         func_1E4470
label_1e439c:
    if (ctx->pc == 0x1E439Cu) {
        ctx->pc = 0x1E439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4398u;
        // 0x1e439c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E43A0u;
        goto label_1e43a0;
    }
    ctx->pc = 0x1E4398u;
    SET_GPR_U32(ctx, 31, 0x1E43A0u);
    ctx->pc = 0x1E439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4398u;
    // 0x1e439c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4470u, 0x1E4398u, 0x1E43A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43A0u;
label_1e43a0:
    // 0x1e43a0: 0x93828750  lbu         $v0, -0x78B0($gp)
    ctx->pc = 0x1e43a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936400)));
label_1e43a4:
    // 0x1e43a4: 0x27c3006c  addiu       $v1, $fp, 0x6C
    ctx->pc = 0x1e43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 108));
label_1e43a8:
    // 0x1e43a8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e43a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e43ac:
    // 0x1e43ac: 0x83c5006c  lb          $a1, 0x6C($fp)
    ctx->pc = 0x1e43acu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 108)));
label_1e43b0:
    // 0x1e43b0: 0xc0797c0  jal         func_1E5F00
label_1e43b4:
    if (ctx->pc == 0x1E43B4u) {
        ctx->pc = 0x1E43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43B0u;
        // 0x1e43b4: 0x27c40060  addiu       $a0, $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E43B8u;
        goto label_1e43b8;
    }
    ctx->pc = 0x1E43B0u;
    SET_GPR_U32(ctx, 31, 0x1E43B8u);
    ctx->pc = 0x1E43B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E43B0u;
    // 0x1e43b4: 0x27c40060  addiu       $a0, $fp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5F00u, 0x1E43B0u, 0x1E43B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43B8u;
label_1e43b8:
    // 0x1e43b8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1e43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1e43bc:
    // 0x1e43bc: 0x27d10064  addiu       $s1, $fp, 0x64
    ctx->pc = 0x1e43bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 100));
label_1e43c0:
    // 0x1e43c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e43c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e43c4:
    // 0x1e43c4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e43c8:
    if (ctx->pc == 0x1E43C8u) {
        ctx->pc = 0x1E43CCu;
        goto label_1e43cc;
    }
    ctx->pc = 0x1E43C4u;
    {
        const bool branch_taken_0x1e43c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e43c4) {
            ctx->pc = 0x1E43F0u;
            goto label_1e43f0;
        }
    }
    ctx->pc = 0x1E43CCu;
label_1e43cc:
    // 0x1e43cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e43ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e43d0:
    // 0x1e43d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e43d4:
    // 0x1e43d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e43d8:
    if (ctx->pc == 0x1E43D8u) {
        ctx->pc = 0x1E43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43D4u;
        // 0x1e43d8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E43DCu;
        goto label_1e43dc;
    }
    ctx->pc = 0x1E43D4u;
    {
        const bool branch_taken_0x1e43d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43D4u;
        // 0x1e43d8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43d4) {
            ctx->pc = 0x1E43F0u;
            goto label_1e43f0;
        }
    }
    ctx->pc = 0x1E43DCu;
label_1e43dc:
    // 0x1e43dc: 0x8fc40060  lw          $a0, 0x60($fp)
    ctx->pc = 0x1e43dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
label_1e43e0:
    // 0x1e43e0: 0xc0483d8  jal         func_120F60
label_1e43e4:
    if (ctx->pc == 0x1E43E4u) {
        ctx->pc = 0x1E43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43E0u;
        // 0x1e43e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E43E8u;
        goto label_1e43e8;
    }
    ctx->pc = 0x1E43E0u;
    SET_GPR_U32(ctx, 31, 0x1E43E8u);
    ctx->pc = 0x1E43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E43E0u;
    // 0x1e43e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x1E43E0u, 0x1E43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43E8u;
label_1e43e8:
    // 0x1e43e8: 0xc0401a4  jal         func_100690
label_1e43ec:
    if (ctx->pc == 0x1E43ECu) {
        ctx->pc = 0x1E43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43E8u;
        // 0x1e43ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E43F0u;
        goto label_1e43f0;
    }
    ctx->pc = 0x1E43E8u;
    SET_GPR_U32(ctx, 31, 0x1E43F0u);
    ctx->pc = 0x1E43ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E43E8u;
    // 0x1e43ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E43E8u, 0x1E43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43F0u;
label_1e43f0:
    // 0x1e43f0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1e43f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e43f4:
    // 0x1e43f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e43f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e43f8:
    // 0x1e43f8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e43f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e43fc:
    // 0x1e43fc: 0x320f809  jalr        $t9
label_1e4400:
    if (ctx->pc == 0x1E4400u) {
        ctx->pc = 0x1E4404u;
        goto label_1e4404;
    }
    ctx->pc = 0x1E43FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4404u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E43FCu, 0x1E4404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4404u;
label_1e4404:
    // 0x1e4404: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e4408:
    if (ctx->pc == 0x1E4408u) {
        ctx->pc = 0x1E4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4404u;
        // 0x1e4408: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E440Cu;
        goto label_1e440c;
    }
    ctx->pc = 0x1E4404u;
    {
        const bool branch_taken_0x1e4404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4404u;
        // 0x1e4408: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4404) {
            ctx->pc = 0x1E4434u;
            goto label_1e4434;
        }
    }
    ctx->pc = 0x1E440Cu;
label_1e440c:
    // 0x1e440c: 0xc07a704  jal         func_1E9C10
label_1e4410:
    if (ctx->pc == 0x1E4410u) {
        ctx->pc = 0x1E4410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E440Cu;
        // 0x1e4410: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4414u;
        goto label_1e4414;
    }
    ctx->pc = 0x1E440Cu;
    SET_GPR_U32(ctx, 31, 0x1E4414u);
    ctx->pc = 0x1E4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E440Cu;
    // 0x1e4410: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E440Cu, 0x1E4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4414u;
label_1e4414:
    // 0x1e4414: 0x0  nop
    ctx->pc = 0x1e4414u;
    // NOP
label_1e4418:
    // 0x1e4418: 0x0  nop
    ctx->pc = 0x1e4418u;
    // NOP
label_1e441c:
    // 0x1e441c: 0x0  nop
    ctx->pc = 0x1e441cu;
    // NOP
label_1e4420:
    // 0x1e4420: 0x0  nop
    ctx->pc = 0x1e4420u;
    // NOP
label_1e4424:
    // 0x1e4424: 0x0  nop
    ctx->pc = 0x1e4424u;
    // NOP
label_1e4428:
    // 0x1e4428: 0x0  nop
    ctx->pc = 0x1e4428u;
    // NOP
label_1e442c:
    // 0x1e442c: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e4430:
    if (ctx->pc == 0x1E4430u) {
        ctx->pc = 0x1E4434u;
        goto label_1e4434;
    }
    ctx->pc = 0x1E442Cu;
    {
        const bool branch_taken_0x1e442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e442c) {
            ctx->pc = 0x1E4414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4414;
        }
    }
    ctx->pc = 0x1E4434u;
label_1e4434:
    // 0x1e4434: 0x0  nop
    ctx->pc = 0x1e4434u;
    // NOP
label_1e4438:
    // 0x1e4438: 0xa2030051  sb          $v1, 0x51($s0)
    ctx->pc = 0x1e4438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 3));
label_1e443c:
    // 0x1e443c: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e443cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e4440:
    // 0x1e4440: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e4440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4444:
    // 0x1e4444: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e4444u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4448:
    // 0x1e4448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e444c:
    // 0x1e444c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e444cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4450:
    // 0x1e4450: 0x3e00008  jr          $ra
label_1e4454:
    if (ctx->pc == 0x1E4454u) {
        ctx->pc = 0x1E4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4450u;
        // 0x1e4454: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4458u;
        goto label_fallthrough_0x1e4450;
    }
    ctx->pc = 0x1E4450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4450u;
        // 0x1e4454: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e4450:
    ctx->pc = 0x1E4458u;
}
