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

// Function: entry_00150cf0
// Address: 0x150cf0 - 0x150cfc
void entry_00150cf0_0x150cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150cf0_0x150cf0");
#endif

    ctx->pc = 0x150cf0u;

    // 0x150cf0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150cf4: 0xc05434c  jal         func_150D30
    ctx->pc = 0x150CF4u;
    SET_GPR_U32(ctx, 31, 0x150CFCu);
    ctx->pc = 0x150CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CF4u;
    // 0x150cf8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150D30u, 0x150CF4u, 0x150CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CFCu;
}
