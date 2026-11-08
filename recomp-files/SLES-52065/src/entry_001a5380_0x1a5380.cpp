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

// Function: entry_001a5380
// Address: 0x1a5380 - 0x1a538c
void entry_001a5380_0x1a5380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5380_0x1a5380");
#endif

    ctx->pc = 0x1a5380u;

    // 0x1a5380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5384: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A5384u;
    SET_GPR_U32(ctx, 31, 0x1A538Cu);
    ctx->pc = 0x1A5388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5384u;
    // 0x1a5388: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A5384u, 0x1A538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A538Cu;
}
