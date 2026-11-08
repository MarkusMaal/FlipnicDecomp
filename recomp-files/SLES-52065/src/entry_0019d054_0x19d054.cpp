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

// Function: entry_0019d054
// Address: 0x19d054 - 0x19d068
void entry_0019d054_0x19d054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d054_0x19d054");
#endif

    ctx->pc = 0x19d054u;

    // 0x19d054: 0x0  nop
    ctx->pc = 0x19d054u;
    // NOP
    // 0x19d058: 0x8e850670  lw          $a1, 0x670($s4)
    ctx->pc = 0x19d058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x19d05c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19d05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d060: 0xc064cac  jal         func_1932B0
    ctx->pc = 0x19D060u;
    SET_GPR_U32(ctx, 31, 0x19D068u);
    ctx->pc = 0x19D064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D060u;
    // 0x19d064: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19D060u, 0x19D068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D068u;
}
