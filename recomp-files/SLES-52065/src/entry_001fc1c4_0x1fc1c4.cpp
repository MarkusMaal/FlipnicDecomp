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

// Function: entry_001fc1c4
// Address: 0x1fc1c4 - 0x1fc1e0
void entry_001fc1c4_0x1fc1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc1c4_0x1fc1c4");
#endif

    ctx->pc = 0x1fc1c4u;

    // 0x1fc1c4: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x1fc1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1fc1c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC1C8u;
    {
        const bool branch_taken_0x1fc1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc1c8) {
            ctx->pc = 0x1FC1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC1C8u;
            // 0x1fc1cc: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC1E0u;
            return;
        }
    }
    ctx->pc = 0x1FC1D0u;
    // 0x1fc1d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1fc1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fc1d4: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FC1D4u;
    {
        const bool branch_taken_0x1fc1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc1d4) {
            ctx->pc = 0x1FC1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC1D4u;
            // 0x1fc1d8: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC1C0u;
            return;
        }
    }
    ctx->pc = 0x1FC1DCu;
    // 0x1fc1dc: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x1fc1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
    ctx->pc = 0x1fc1e0u;
}
