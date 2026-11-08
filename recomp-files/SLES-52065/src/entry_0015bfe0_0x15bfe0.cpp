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

// Function: entry_0015bfe0
// Address: 0x15bfe0 - 0x15bff8
void entry_0015bfe0_0x15bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bfe0_0x15bfe0");
#endif

    ctx->pc = 0x15bfe0u;

    // 0x15bfe0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x15bfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x15bfe4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15bfe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15bfe8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BFE8u;
    {
        const bool branch_taken_0x15bfe8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFE8u;
        // 0x15bfec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfe8) {
            ctx->pc = 0x15BFFCu;
            return;
        }
    }
    ctx->pc = 0x15BFF0u;
    // 0x15bff0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x15BFF0u;
    SET_GPR_U32(ctx, 31, 0x15BFF8u);
    ctx->pc = 0x15BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BFF0u;
    // 0x15bff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x15BFF0u, 0x15BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BFF8u;
}
