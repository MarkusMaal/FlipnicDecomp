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

// Function: entry_001e4150
// Address: 0x1e4150 - 0x1e4164
void entry_001e4150_0x1e4150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4150_0x1e4150");
#endif

    ctx->pc = 0x1e4150u;

    // 0x1e4150: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e4150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e4154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4158: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x1e4158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1e415c: 0xc079670  jal         func_1E59C0
    ctx->pc = 0x1E415Cu;
    SET_GPR_U32(ctx, 31, 0x1E4164u);
    ctx->pc = 0x1E4160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E415Cu;
    // 0x1e4160: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E59C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E59C0u, 0x1E415Cu, 0x1E4164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4164u;
}
