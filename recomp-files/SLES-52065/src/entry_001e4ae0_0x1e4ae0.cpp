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

// Function: entry_001e4ae0
// Address: 0x1e4ae0 - 0x1e4ae8
void entry_001e4ae0_0x1e4ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4ae0_0x1e4ae0");
#endif

    ctx->pc = 0x1e4ae0u;

    // 0x1e4ae0: 0xc0817ae  jal         func_205EB8
    ctx->pc = 0x1E4AE0u;
    SET_GPR_U32(ctx, 31, 0x1E4AE8u);
    ctx->pc = 0x1E4AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AE0u;
    // 0x1e4ae4: 0x3264ffff  andi        $a0, $s3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E4AE0u, 0x1E4AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4AE8u;
}
