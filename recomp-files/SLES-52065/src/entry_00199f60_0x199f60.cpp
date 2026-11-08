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

// Function: entry_00199f60
// Address: 0x199f60 - 0x199f6c
void entry_00199f60_0x199f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199f60_0x199f60");
#endif

    ctx->pc = 0x199f60u;

    // 0x199f60: 0xae030340  sw          $v1, 0x340($s0)
    ctx->pc = 0x199f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 3));
    // 0x199f64: 0xc06682c  jal         func_19A0B0
    ctx->pc = 0x199F64u;
    SET_GPR_U32(ctx, 31, 0x199F6Cu);
    ctx->pc = 0x199F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F64u;
    // 0x199f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A0B0u, 0x199F64u, 0x199F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F6Cu;
}
