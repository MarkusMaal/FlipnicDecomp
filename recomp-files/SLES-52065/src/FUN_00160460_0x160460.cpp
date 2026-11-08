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

// Function: FUN_00160460
// Address: 0x160460 - 0x1604e0
void FUN_00160460_0x160460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00160460_0x160460");
#endif

    switch (ctx->pc) {
        case 0x160474u: goto label_160474;
        case 0x1604a4u: goto label_1604a4;
        default: break;
    }

    ctx->pc = 0x160460u;

    // 0x160460: 0x8c882c20  lw          $t0, 0x2C20($a0)
    ctx->pc = 0x160460u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11296)));
    // 0x160464: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x160464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x160468: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x160468u;
    {
        const bool branch_taken_0x160468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160468u;
        // 0x16046c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160468) {
            ctx->pc = 0x1604D8u;
            goto label_1604d8;
        }
    }
    ctx->pc = 0x160470u;
    // 0x160470: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x160470u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160474:
    // 0x160474: 0x8c832c1c  lw          $v1, 0x2C1C($a0)
    ctx->pc = 0x160474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x160478: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x160478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x16047c: 0x8467000a  lh          $a3, 0xA($v1)
    ctx->pc = 0x16047cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x160480: 0x8c660030  lw          $a2, 0x30($v1)
    ctx->pc = 0x160480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x160484: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x160484u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x160488: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x160488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16048c: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x16048cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x160490: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x160490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160494: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x160494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x160498: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x160498u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16049c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x16049Cu;
    {
        const bool branch_taken_0x16049c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16049Cu;
        // 0x1604a0: 0x75080  sll         $t2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16049c) {
            ctx->pc = 0x1604C8u;
            goto label_1604c8;
        }
    }
    ctx->pc = 0x1604A4u;
label_1604a4:
    // 0x1604a4: 0x0  nop
    ctx->pc = 0x1604a4u;
    // NOP
    // 0x1604a8: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x1604a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1604ac: 0x8c662cd8  lw          $a2, 0x2CD8($v1)
    ctx->pc = 0x1604acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1604b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1604b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1604b4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1604b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1604b8: 0xa4c001fa  sh          $zero, 0x1FA($a2)
    ctx->pc = 0x1604b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 506), (uint16_t)GPR_U32(ctx, 0));
    // 0x1604bc: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x1604bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1604c0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1604C0u;
    {
        const bool branch_taken_0x1604c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1604C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604C0u;
        // 0x1604c4: 0xacc001fc  sw          $zero, 0x1FC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 508), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604c0) {
            ctx->pc = 0x1604A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1604a4;
        }
    }
    ctx->pc = 0x1604C8u;
label_1604c8:
    // 0x1604c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1604c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1604cc: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x1604ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1604d0: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1604D0u;
    {
        const bool branch_taken_0x1604d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1604D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604D0u;
        // 0x1604d4: 0x256b0050  addiu       $t3, $t3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604d0) {
            ctx->pc = 0x160474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160474;
        }
    }
    ctx->pc = 0x1604D8u;
label_1604d8:
    // 0x1604d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1604D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1604D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1604E0u;
}
