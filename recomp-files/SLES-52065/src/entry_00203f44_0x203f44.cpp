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

// Function: entry_00203f44
// Address: 0x203f44 - 0x203f84
void entry_00203f44_0x203f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203f44_0x203f44");
#endif

    switch (ctx->pc) {
        case 0x203f6cu: goto label_203f6c;
        default: break;
    }

    ctx->pc = 0x203f44u;

    // 0x203f44: 0x37de0100  ori         $fp, $fp, 0x100
    ctx->pc = 0x203f44u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)256);
    // 0x203f48: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x203f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x203f4c: 0xdfa50200  ld          $a1, 0x200($sp)
    ctx->pc = 0x203f4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x203f50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x203f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203f54: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x203f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203f58: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x203f58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x203f5c: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x203f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x203f60: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x203f60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203f64: 0xc0813f0  jal         func_204FC0
    ctx->pc = 0x203F64u;
    SET_GPR_U32(ctx, 31, 0x203F6Cu);
    ctx->pc = 0x203F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F64u;
    // 0x203f68: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204FC0u, 0x203F64u, 0x203F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F6Cu;
label_203f6c:
    // 0x203f6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x203f6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203f70: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x203f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x203f74: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203F74u;
    {
        const bool branch_taken_0x203f74 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x203F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F74u;
        // 0x203f78: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f74) {
            ctx->pc = 0x203F84u;
            return;
        }
    }
    ctx->pc = 0x203F7Cu;
    // 0x203f7c: 0x16e2000c  bne         $s7, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x203F7Cu;
    {
        const bool branch_taken_0x203f7c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x203F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F7Cu;
        // 0x203f80: 0x8fa501dc  lw          $a1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f7c) {
            ctx->pc = 0x203FB0u;
            return;
        }
    }
    ctx->pc = 0x203F84u;
}
