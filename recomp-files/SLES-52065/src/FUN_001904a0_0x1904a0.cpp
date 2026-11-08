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

// Function: FUN_001904a0
// Address: 0x1904a0 - 0x190518
void FUN_001904a0_0x1904a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001904a0_0x1904a0");
#endif

    switch (ctx->pc) {
        case 0x1904b8u: goto label_1904b8;
        case 0x1904ccu: goto label_1904cc;
        default: break;
    }

    ctx->pc = 0x1904a0u;

    // 0x1904a0: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1904a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1904a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1904a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1904a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1904acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1904B0u;
    {
        const bool branch_taken_0x1904b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1904B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904B0u;
        // 0x1904b4: 0x246810c8  addiu       $t0, $v1, 0x10C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904b0) {
            ctx->pc = 0x1904FCu;
            goto label_1904fc;
        }
    }
    ctx->pc = 0x1904B8u;
label_1904b8:
    // 0x1904b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1904b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904bc: 0xa06016a4  sb          $zero, 0x16A4($v1)
    ctx->pc = 0x1904bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5796), (uint8_t)GPR_U32(ctx, 0));
    // 0x1904c0: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x1904c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1904c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1904C4u;
    {
        const bool branch_taken_0x1904c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1904C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904C4u;
        // 0x1904c8: 0x10a2021  addu        $a0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904c4) {
            ctx->pc = 0x1904DCu;
            goto label_1904dc;
        }
    }
    ctx->pc = 0x1904CCu;
label_1904cc:
    // 0x1904cc: 0x0  nop
    ctx->pc = 0x1904ccu;
    // NOP
    // 0x1904d0: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1904d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1904d4: 0xa0601484  sb          $zero, 0x1484($v1)
    ctx->pc = 0x1904d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5252), (uint8_t)GPR_U32(ctx, 0));
    // 0x1904d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1904d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1904dc:
    // 0x1904dc: 0x0  nop
    ctx->pc = 0x1904dcu;
    // NOP
    // 0x1904e0: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x1904e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1904e4: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1904e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1904e8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1904E8u;
    {
        const bool branch_taken_0x1904e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1904e8) {
            ctx->pc = 0x1904CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1904cc;
        }
    }
    ctx->pc = 0x1904F0u;
    // 0x1904f0: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1904f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1904f4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1904f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1904f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1904f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1904fc:
    // 0x1904fc: 0x0  nop
    ctx->pc = 0x1904fcu;
    // NOP
    // 0x190500: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x190500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x190504: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x190504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190508: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x190508u;
    {
        const bool branch_taken_0x190508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190508u;
        // 0x19050c: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190508) {
            ctx->pc = 0x1904B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1904b8;
        }
    }
    ctx->pc = 0x190510u;
    // 0x190510: 0x3e00008  jr          $ra
    ctx->pc = 0x190510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190518u;
}
