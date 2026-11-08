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

// Function: entry_0018b84c
// Address: 0x18b84c - 0x18b870
void entry_0018b84c_0x18b84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b84c_0x18b84c");
#endif

    switch (ctx->pc) {
        case 0x18b868u: goto label_18b868;
        default: break;
    }

    ctx->pc = 0x18b84cu;

    // 0x18b84c: 0x0  nop
    ctx->pc = 0x18b84cu;
    // NOP
    // 0x18b850: 0x8e222718  lw          $v0, 0x2718($s1)
    ctx->pc = 0x18b850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10008)));
    // 0x18b854: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18b854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18b858: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18B858u;
    {
        const bool branch_taken_0x18b858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B858u;
        // 0x18b85c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b858) {
            ctx->pc = 0x18B82Cu;
            return;
        }
    }
    ctx->pc = 0x18B860u;
    // 0x18b860: 0xc057424  jal         func_15D090
    ctx->pc = 0x18B860u;
    SET_GPR_U32(ctx, 31, 0x18B868u);
    ctx->pc = 0x18B864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B860u;
    // 0x18b864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D090u, 0x18B860u, 0x18B868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B868u;
label_18b868:
    // 0x18b868: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x18b868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x18b86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x18b870u;
}
