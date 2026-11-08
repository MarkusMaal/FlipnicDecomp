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

// Function: entry_001b6780
// Address: 0x1b6780 - 0x1b67a0
void entry_001b6780_0x1b6780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6780_0x1b6780");
#endif

    switch (ctx->pc) {
        case 0x1b6788u: goto label_1b6788;
        case 0x1b6798u: goto label_1b6798;
        default: break;
    }

    ctx->pc = 0x1b6780u;

    // 0x1b6780: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6780u;
    SET_GPR_U32(ctx, 31, 0x1B6788u);
    ctx->pc = 0x1B6784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6780u;
    // 0x1b6784: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6780u, 0x1B6788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6788u;
label_1b6788:
    // 0x1b6788: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B6788u;
    {
        const bool branch_taken_0x1b6788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6788) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6790u;
    // 0x1b6790: 0xc0736c0  jal         func_1CDB00
    ctx->pc = 0x1B6790u;
    SET_GPR_U32(ctx, 31, 0x1B6798u);
    ctx->pc = 0x1B6794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6790u;
    // 0x1b6794: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB00u, 0x1B6790u, 0x1B6798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6798u;
label_1b6798:
    // 0x1b6798: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1B6798u;
    {
        const bool branch_taken_0x1b6798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6798) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B67A0u;
}
