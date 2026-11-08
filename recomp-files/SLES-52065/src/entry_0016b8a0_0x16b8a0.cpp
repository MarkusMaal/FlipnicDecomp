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

// Function: entry_0016b8a0
// Address: 0x16b8a0 - 0x16b8b8
void entry_0016b8a0_0x16b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b8a0_0x16b8a0");
#endif

    ctx->pc = 0x16b8a0u;

    // 0x16b8a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x16b8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x16b8a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16b8a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16b8a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B8A8u;
    {
        const bool branch_taken_0x16b8a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8A8u;
        // 0x16b8ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b8a8) {
            ctx->pc = 0x16B8BCu;
            return;
        }
    }
    ctx->pc = 0x16B8B0u;
    // 0x16b8b0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x16B8B0u;
    SET_GPR_U32(ctx, 31, 0x16B8B8u);
    ctx->pc = 0x16B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B8B0u;
    // 0x16b8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x16B8B0u, 0x16B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B8B8u;
}
