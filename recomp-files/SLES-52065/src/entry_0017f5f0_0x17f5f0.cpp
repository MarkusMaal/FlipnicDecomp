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

// Function: entry_0017f5f0
// Address: 0x17f5f0 - 0x17f610
void entry_0017f5f0_0x17f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f5f0_0x17f5f0");
#endif

    ctx->pc = 0x17f5f0u;

    // 0x17f5f0: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x17f5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17f5f4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x17F5F4u;
    {
        const bool branch_taken_0x17f5f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5F4u;
        // 0x17f5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f5f4) {
            ctx->pc = 0x17F644u;
            return;
        }
    }
    ctx->pc = 0x17F5FCu;
    // 0x17f5fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x17f5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17f600: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F600u;
    {
        const bool branch_taken_0x17f600 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F600u;
        // 0x17f604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f600) {
            ctx->pc = 0x17F610u;
            return;
        }
    }
    ctx->pc = 0x17F608u;
    // 0x17f608: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F608u;
    SET_GPR_U32(ctx, 31, 0x17F610u);
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17F608u, 0x17F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F610u;
}
