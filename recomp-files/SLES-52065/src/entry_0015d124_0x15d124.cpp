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

// Function: entry_0015d124
// Address: 0x15d124 - 0x15d148
void entry_0015d124_0x15d124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d124_0x15d124");
#endif

    switch (ctx->pc) {
        case 0x15d144u: goto label_15d144;
        default: break;
    }

    ctx->pc = 0x15d124u;

    // 0x15d124: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15d124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15d128: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15d128u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15d12c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d130: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15d134: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15d134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15d138: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15d138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15d13c: 0xc055ed4  jal         func_157B50
    ctx->pc = 0x15D13Cu;
    SET_GPR_U32(ctx, 31, 0x15D144u);
    ctx->pc = 0x15D140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D13Cu;
    // 0x15d140: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157B50u, 0x15D13Cu, 0x15D144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D144u;
label_15d144:
    // 0x15d144: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x15d148u;
}
