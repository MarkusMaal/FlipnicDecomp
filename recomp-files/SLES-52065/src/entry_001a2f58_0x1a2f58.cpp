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

// Function: entry_001a2f58
// Address: 0x1a2f58 - 0x1a2f64
void entry_001a2f58_0x1a2f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2f58_0x1a2f58");
#endif

    ctx->pc = 0x1a2f58u;

    // 0x1a2f58: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x1a2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1a2f5c: 0xc05e8e8  jal         func_17A3A0
    ctx->pc = 0x1A2F5Cu;
    SET_GPR_U32(ctx, 31, 0x1A2F64u);
    ctx->pc = 0x1A2F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F5Cu;
    // 0x1a2f60: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A3A0u, 0x1A2F5Cu, 0x1A2F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F64u;
}
