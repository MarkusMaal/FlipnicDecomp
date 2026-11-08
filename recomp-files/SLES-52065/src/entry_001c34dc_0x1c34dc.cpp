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

// Function: entry_001c34dc
// Address: 0x1c34dc - 0x1c34f0
void entry_001c34dc_0x1c34dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c34dc_0x1c34dc");
#endif

    switch (ctx->pc) {
        case 0x1c34e4u: goto label_1c34e4;
        default: break;
    }

    ctx->pc = 0x1c34dcu;

    // 0x1c34dc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C34DCu;
    SET_GPR_U32(ctx, 31, 0x1C34E4u);
    ctx->pc = 0x1C34E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34DCu;
    // 0x1c34e0: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C34DCu, 0x1C34E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34E4u;
label_1c34e4:
    // 0x1c34e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c34e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34e8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C34E8u;
    SET_GPR_U32(ctx, 31, 0x1C34F0u);
    ctx->pc = 0x1C34ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34E8u;
    // 0x1c34ec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C34E8u, 0x1C34F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34F0u;
}
