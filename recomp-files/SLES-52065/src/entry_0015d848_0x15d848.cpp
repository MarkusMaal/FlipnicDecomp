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

// Function: entry_0015d848
// Address: 0x15d848 - 0x15d864
void entry_0015d848_0x15d848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d848_0x15d848");
#endif

    switch (ctx->pc) {
        case 0x15d854u: goto label_15d854;
        default: break;
    }

    ctx->pc = 0x15d848u;

label_15d848:
    // 0x15d848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d84c: 0xc057620  jal         func_15D880
    ctx->pc = 0x15D84Cu;
    SET_GPR_U32(ctx, 31, 0x15D854u);
    ctx->pc = 0x15D850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D84Cu;
    // 0x15d850: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D880u, 0x15D84Cu, 0x15D854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D854u;
label_15d854:
    // 0x15d854: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15d858: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x15d858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15d85c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15D85Cu;
    {
        const bool branch_taken_0x15d85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d85c) {
            ctx->pc = 0x15D848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d848;
        }
    }
    ctx->pc = 0x15D864u;
}
