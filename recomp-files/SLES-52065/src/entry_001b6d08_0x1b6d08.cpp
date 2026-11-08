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

// Function: entry_001b6d08
// Address: 0x1b6d08 - 0x1b6d20
void entry_001b6d08_0x1b6d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6d08_0x1b6d08");
#endif

    switch (ctx->pc) {
        case 0x1b6d10u: goto label_1b6d10;
        case 0x1b6d18u: goto label_1b6d18;
        default: break;
    }

    ctx->pc = 0x1b6d08u;

    // 0x1b6d08: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B6D08u;
    SET_GPR_U32(ctx, 31, 0x1B6D10u);
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B6D08u, 0x1B6D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D10u;
label_1b6d10:
    // 0x1b6d10: 0xc06db24  jal         func_1B6C90
    ctx->pc = 0x1B6D10u;
    SET_GPR_U32(ctx, 31, 0x1B6D18u);
    ctx->pc = 0x1B6D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D10u;
    // 0x1b6d14: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C90u, 0x1B6D10u, 0x1B6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D18u;
label_1b6d18:
    // 0x1b6d18: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6D18u;
    SET_GPR_U32(ctx, 31, 0x1B6D20u);
    ctx->pc = 0x1B6D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D18u;
    // 0x1b6d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6D18u, 0x1B6D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D20u;
}
