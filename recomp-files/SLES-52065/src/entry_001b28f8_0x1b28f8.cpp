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

// Function: entry_001b28f8
// Address: 0x1b28f8 - 0x1b291c
void entry_001b28f8_0x1b28f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b28f8_0x1b28f8");
#endif

    ctx->pc = 0x1b28f8u;

    // 0x1b28f8: 0x28a1021  addu        $v0, $s4, $t2
    ctx->pc = 0x1b28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x1b28fc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b28fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b2900: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B2900u;
    {
        const bool branch_taken_0x1b2900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2900u;
        // 0x1b2904: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2900) {
            ctx->pc = 0x1B293Cu;
            return;
        }
    }
    ctx->pc = 0x1B2908u;
    // 0x1b2908: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x1b2908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b290c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B290Cu;
    {
        const bool branch_taken_0x1b290c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b290c) {
            ctx->pc = 0x1B291Cu;
            return;
        }
    }
    ctx->pc = 0x1B2914u;
    // 0x1b2914: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2914u;
    {
        const bool branch_taken_0x1b2914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2914) {
            ctx->pc = 0x1B2938u;
            return;
        }
    }
    ctx->pc = 0x1B291Cu;
}
