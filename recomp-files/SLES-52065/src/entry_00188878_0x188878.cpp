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

// Function: entry_00188878
// Address: 0x188878 - 0x18888c
void entry_00188878_0x188878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188878_0x188878");
#endif

    ctx->pc = 0x188878u;

    // 0x188878: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x188878u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18887c: 0x5000003  bltz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18887Cu;
    {
        const bool branch_taken_0x18887c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x188880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18887Cu;
        // 0x188880: 0x2901000a  slti        $at, $t0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18887c) {
            ctx->pc = 0x18888Cu;
            return;
        }
    }
    ctx->pc = 0x188884u;
    // 0x188884: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x188884u;
    {
        const bool branch_taken_0x188884 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x188884) {
            ctx->pc = 0x188898u;
            return;
        }
    }
    ctx->pc = 0x18888Cu;
}
