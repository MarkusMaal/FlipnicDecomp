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

// Function: entry_00209570
// Address: 0x209570 - 0x209588
void entry_00209570_0x209570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209570_0x209570");
#endif

    switch (ctx->pc) {
        case 0x209580u: goto label_209580;
        default: break;
    }

    ctx->pc = 0x209570u;

    // 0x209570: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209570u;
    {
        const bool branch_taken_0x209570 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x209570) {
            ctx->pc = 0x209588u;
            return;
        }
    }
    ctx->pc = 0x209578u;
    // 0x209578: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x209578u;
    SET_GPR_U32(ctx, 31, 0x209580u);
    ctx->pc = 0x20957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209578u;
    // 0x20957c: 0x26645c00  addiu       $a0, $s3, 0x5C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 23552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x209578u, 0x209580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209580u;
label_209580:
    // 0x209580: 0xc082716  jal         func_209C58
    ctx->pc = 0x209580u;
    SET_GPR_U32(ctx, 31, 0x209588u);
    ctx->pc = 0x209584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209580u;
    // 0x209584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C58u, 0x209580u, 0x209588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209588u;
}
