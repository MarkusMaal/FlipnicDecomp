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

// Function: entry_001e5fa0
// Address: 0x1e5fa0 - 0x1e5fc4
void entry_001e5fa0_0x1e5fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5fa0_0x1e5fa0");
#endif

    switch (ctx->pc) {
        case 0x1e5facu: goto label_1e5fac;
        default: break;
    }

    ctx->pc = 0x1e5fa0u;

    // 0x1e5fa0: 0x8f868788  lw          $a2, -0x7878($gp)
    ctx->pc = 0x1e5fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
    // 0x1e5fa4: 0xc04839c  jal         func_120E70
    ctx->pc = 0x1E5FA4u;
    SET_GPR_U32(ctx, 31, 0x1E5FACu);
    ctx->pc = 0x1E5FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5FA4u;
    // 0x1e5fa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E70u, 0x1E5FA4u, 0x1E5FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FACu;
label_1e5fac:
    // 0x1e5fac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e5facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5fb0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e5fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e5fb4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e5fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5fbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5fc0: 0x0  nop
    ctx->pc = 0x1e5fc0u;
    // NOP
    ctx->pc = 0x1e5fc4u;
}
