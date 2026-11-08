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

// Function: entry_0010d06c
// Address: 0x10d06c - 0x10d08c
void entry_0010d06c_0x10d06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d06c_0x10d06c");
#endif

    switch (ctx->pc) {
        case 0x10d07cu: goto label_10d07c;
        default: break;
    }

    ctx->pc = 0x10d06cu;

    // 0x10d06c: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x10D06Cu;
    {
        const bool branch_taken_0x10d06c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D06Cu;
        // 0x10d070: 0x26240260  addiu       $a0, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d06c) {
            ctx->pc = 0x10D0F8u;
            return;
        }
    }
    ctx->pc = 0x10D074u;
    // 0x10d074: 0xc042c10  jal         func_10B040
    ctx->pc = 0x10D074u;
    SET_GPR_U32(ctx, 31, 0x10D07Cu);
    ctx->pc = 0x10B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B040u, 0x10D074u, 0x10D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D07Cu;
label_10d07c:
    // 0x10d07c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x10D07Cu;
    {
        const bool branch_taken_0x10d07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D07Cu;
        // 0x10d080: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d07c) {
            ctx->pc = 0x10D0F8u;
            return;
        }
    }
    ctx->pc = 0x10D084u;
    // 0x10d084: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10D084u;
    {
        const bool branch_taken_0x10d084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D084u;
        // 0x10d088: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d084) {
            ctx->pc = 0x10D0B4u;
            return;
        }
    }
    ctx->pc = 0x10D08Cu;
}
