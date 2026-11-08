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

// Function: entry_001189d0
// Address: 0x1189d0 - 0x1189e8
void entry_001189d0_0x1189d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001189d0_0x1189d0");
#endif

    ctx->pc = 0x1189d0u;

    // 0x1189d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1189d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1189d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1189d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1189d8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1189D8u;
    {
        const bool branch_taken_0x1189d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1189DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189D8u;
        // 0x1189dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189d8) {
            ctx->pc = 0x1189ECu;
            return;
        }
    }
    ctx->pc = 0x1189E0u;
    // 0x1189e0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1189E0u;
    SET_GPR_U32(ctx, 31, 0x1189E8u);
    ctx->pc = 0x1189E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1189E0u;
    // 0x1189e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1189E0u, 0x1189E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1189E8u;
}
