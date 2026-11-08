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

// Function: entry_001e3a70
// Address: 0x1e3a70 - 0x1e3a7c
void entry_001e3a70_0x1e3a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3a70_0x1e3a70");
#endif

    ctx->pc = 0x1e3a70u;

    // 0x1e3a70: 0x13263c  dsll32      $a0, $s3, 24
    ctx->pc = 0x1e3a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 24));
    // 0x1e3a74: 0xc0817ae  jal         func_205EB8
    ctx->pc = 0x1E3A74u;
    SET_GPR_U32(ctx, 31, 0x1E3A7Cu);
    ctx->pc = 0x1E3A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A74u;
    // 0x1e3a78: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E3A74u, 0x1E3A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A7Cu;
}
