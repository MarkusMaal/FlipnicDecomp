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

// Function: entry_001b242c
// Address: 0x1b242c - 0x1b2450
void entry_001b242c_0x1b242c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b242c_0x1b242c");
#endif

    ctx->pc = 0x1b242cu;

    // 0x1b242c: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1b242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1b2430: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x1b2430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1b2434: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b2434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2438: 0x2643ffa0  addiu       $v1, $s2, -0x60
    ctx->pc = 0x1b2438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
    // 0x1b243c: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1b243cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b2440: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2440u;
    {
        const bool branch_taken_0x1b2440 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2440u;
        // 0x1b2444: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2440) {
            ctx->pc = 0x1B2450u;
            return;
        }
    }
    ctx->pc = 0x1B2448u;
    // 0x1b2448: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b244c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1b244cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1b2450u;
}
