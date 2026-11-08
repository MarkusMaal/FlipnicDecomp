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

// Function: entry_001c9090
// Address: 0x1c9090 - 0x1c90b0
void entry_001c9090_0x1c9090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9090_0x1c9090");
#endif

    switch (ctx->pc) {
        case 0x1c9098u: goto label_1c9098;
        default: break;
    }

    ctx->pc = 0x1c9090u;

    // 0x1c9090: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1C9090u;
    SET_GPR_U32(ctx, 31, 0x1C9098u);
    ctx->pc = 0x1C9094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9090u;
    // 0x1c9094: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1C9090u, 0x1C9098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9098u;
label_1c9098:
    // 0x1c9098: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c9098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c909c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c90a0: 0x24422400  addiu       $v0, $v0, 0x2400
    ctx->pc = 0x1c90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
    // 0x1c90a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c90a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c90ac: 0x0  nop
    ctx->pc = 0x1c90acu;
    // NOP
    ctx->pc = 0x1c90b0u;
}
