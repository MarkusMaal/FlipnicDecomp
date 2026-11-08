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

// Function: entry_001c0fe8
// Address: 0x1c0fe8 - 0x1c0ff8
void entry_001c0fe8_0x1c0fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0fe8_0x1c0fe8");
#endif

    switch (ctx->pc) {
        case 0x1c0ff4u: goto label_1c0ff4;
        default: break;
    }

    ctx->pc = 0x1c0fe8u;

    // 0x1c0fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fec: 0xc072ef4  jal         func_1CBBD0
    ctx->pc = 0x1C0FECu;
    SET_GPR_U32(ctx, 31, 0x1C0FF4u);
    ctx->pc = 0x1C0FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FECu;
    // 0x1c0ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBBD0u, 0x1C0FECu, 0x1C0FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FF4u;
label_1c0ff4:
    // 0x1c0ff4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1c0ff8u;
}
