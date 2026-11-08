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

// Function: entry_001e7a0c
// Address: 0x1e7a0c - 0x1e7a20
void entry_001e7a0c_0x1e7a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7a0c_0x1e7a0c");
#endif

    ctx->pc = 0x1e7a0cu;

    // 0x1e7a0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e7a0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e7a10: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7A10u;
    {
        const bool branch_taken_0x1e7a10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A10u;
        // 0x1e7a14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a10) {
            ctx->pc = 0x1E7A24u;
            return;
        }
    }
    ctx->pc = 0x1E7A18u;
    // 0x1e7a18: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E7A18u;
    SET_GPR_U32(ctx, 31, 0x1E7A20u);
    ctx->pc = 0x1E7A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A18u;
    // 0x1e7a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E7A18u, 0x1E7A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7A20u;
}
