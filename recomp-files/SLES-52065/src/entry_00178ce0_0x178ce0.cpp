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

// Function: entry_00178ce0
// Address: 0x178ce0 - 0x178cf0
void entry_00178ce0_0x178ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178ce0_0x178ce0");
#endif

    ctx->pc = 0x178ce0u;

    // 0x178ce0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x178ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x178ce4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x178ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x178ce8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x178CE8u;
    SET_GPR_U32(ctx, 31, 0x178CF0u);
    ctx->pc = 0x178CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178CE8u;
    // 0x178cec: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x178CE8u, 0x178CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178CF0u;
}
