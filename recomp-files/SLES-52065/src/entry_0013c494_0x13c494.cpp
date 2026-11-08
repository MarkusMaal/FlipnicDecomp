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

// Function: entry_0013c494
// Address: 0x13c494 - 0x13c4a8
void entry_0013c494_0x13c494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c494_0x13c494");
#endif

    ctx->pc = 0x13c494u;

    // 0x13c494: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c494u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c498: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C498u;
    {
        const bool branch_taken_0x13c498 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C498u;
        // 0x13c49c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c498) {
            ctx->pc = 0x13C4ACu;
            return;
        }
    }
    ctx->pc = 0x13C4A0u;
    // 0x13c4a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13C4A0u;
    SET_GPR_U32(ctx, 31, 0x13C4A8u);
    ctx->pc = 0x13C4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4A0u;
    // 0x13c4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13C4A0u, 0x13C4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4A8u;
}
