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

// Function: entry_0017933c
// Address: 0x17933c - 0x17934c
void entry_0017933c_0x17933c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017933c_0x17933c");
#endif

    ctx->pc = 0x17933cu;

    // 0x17933c: 0x0  nop
    ctx->pc = 0x17933cu;
    // NOP
    // 0x179340: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x179340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x179344: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x179344u;
    SET_GPR_U32(ctx, 31, 0x17934Cu);
    ctx->pc = 0x179348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179344u;
    // 0x179348: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x179344u, 0x17934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17934Cu;
}
