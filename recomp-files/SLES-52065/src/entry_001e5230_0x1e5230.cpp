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

// Function: entry_001e5230
// Address: 0x1e5230 - 0x1e5244
void entry_001e5230_0x1e5230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5230_0x1e5230");
#endif

    ctx->pc = 0x1e5230u;

    // 0x1e5230: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e5230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e5234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5238: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x1e5238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1e523c: 0xc079878  jal         func_1E61E0
    ctx->pc = 0x1E523Cu;
    SET_GPR_U32(ctx, 31, 0x1E5244u);
    ctx->pc = 0x1E5240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E523Cu;
    // 0x1e5240: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E61E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E61E0u, 0x1E523Cu, 0x1E5244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5244u;
}
