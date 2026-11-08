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

// Function: entry_001be700
// Address: 0x1be700 - 0x1be720
void entry_001be700_0x1be700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be700_0x1be700");
#endif

    ctx->pc = 0x1be700u;

    // 0x1be700: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1be700u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1be704: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BE704u;
    {
        const bool branch_taken_0x1be704 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE704u;
        // 0x1be708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be704) {
            ctx->pc = 0x1BE754u;
            return;
        }
    }
    ctx->pc = 0x1BE70Cu;
    // 0x1be70c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1be70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1be710: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE710u;
    {
        const bool branch_taken_0x1be710 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE710u;
        // 0x1be714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be710) {
            ctx->pc = 0x1BE720u;
            return;
        }
    }
    ctx->pc = 0x1BE718u;
    // 0x1be718: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE718u;
    SET_GPR_U32(ctx, 31, 0x1BE720u);
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE718u, 0x1BE720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE720u;
}
