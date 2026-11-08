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

// Function: entry_001c3410
// Address: 0x1c3410 - 0x1c342c
void entry_001c3410_0x1c3410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3410_0x1c3410");
#endif

    switch (ctx->pc) {
        case 0x1c3418u: goto label_1c3418;
        case 0x1c3424u: goto label_1c3424;
        default: break;
    }

    ctx->pc = 0x1c3410u;

    // 0x1c3410: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3410u;
    SET_GPR_U32(ctx, 31, 0x1C3418u);
    ctx->pc = 0x1C3414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3410u;
    // 0x1c3414: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3410u, 0x1C3418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3418u;
label_1c3418:
    // 0x1c3418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c341c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C341Cu;
    SET_GPR_U32(ctx, 31, 0x1C3424u);
    ctx->pc = 0x1C3420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C341Cu;
    // 0x1c3420: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C341Cu, 0x1C3424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3424u;
label_1c3424:
    // 0x1c3424: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C3424u;
    {
        const bool branch_taken_0x1c3424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3424) {
            ctx->pc = 0x1C34F0u;
            return;
        }
    }
    ctx->pc = 0x1C342Cu;
}
