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

// Function: entry_001e5dd8
// Address: 0x1e5dd8 - 0x1e5dfc
void entry_001e5dd8_0x1e5dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5dd8_0x1e5dd8");
#endif

    switch (ctx->pc) {
        case 0x1e5de4u: goto label_1e5de4;
        default: break;
    }

    ctx->pc = 0x1e5dd8u;

    // 0x1e5dd8: 0x8f868754  lw          $a2, -0x78AC($gp)
    ctx->pc = 0x1e5dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936404)));
    // 0x1e5ddc: 0xc04839c  jal         func_120E70
    ctx->pc = 0x1E5DDCu;
    SET_GPR_U32(ctx, 31, 0x1E5DE4u);
    ctx->pc = 0x1E5DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5DDCu;
    // 0x1e5de0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E70u, 0x1E5DDCu, 0x1E5DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DE4u;
label_1e5de4:
    // 0x1e5de4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5de8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e5de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e5dec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e5decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e5df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5df4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5df8: 0x0  nop
    ctx->pc = 0x1e5df8u;
    // NOP
    ctx->pc = 0x1e5dfcu;
}
