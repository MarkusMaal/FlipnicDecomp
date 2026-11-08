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

// Function: entry_0018faf0
// Address: 0x18faf0 - 0x18fb04
void entry_0018faf0_0x18faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018faf0_0x18faf0");
#endif

    ctx->pc = 0x18faf0u;

    // 0x18faf0: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x18faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x18faf4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18faf8: 0x8c440280  lw          $a0, 0x280($v0)
    ctx->pc = 0x18faf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x18fafc: 0xc07a564  jal         func_1E9590
    ctx->pc = 0x18FAFCu;
    SET_GPR_U32(ctx, 31, 0x18FB04u);
    ctx->pc = 0x18FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FAFCu;
    // 0x18fb00: 0x24590274  addiu       $t9, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9590u, 0x18FAFCu, 0x18FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB04u;
}
