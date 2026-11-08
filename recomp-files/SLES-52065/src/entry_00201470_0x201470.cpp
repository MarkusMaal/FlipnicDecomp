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

// Function: entry_00201470
// Address: 0x201470 - 0x201480
void entry_00201470_0x201470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201470_0x201470");
#endif

    ctx->pc = 0x201470u;

    // 0x201470: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x201470u;
    {
        const bool branch_taken_0x201470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201470u;
        // 0x201474: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201470) {
            ctx->pc = 0x2014BCu;
            return;
        }
    }
    ctx->pc = 0x201478u;
    // 0x201478: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x201478u;
    {
        const bool branch_taken_0x201478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201478u;
        // 0x20147c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201478) {
            ctx->pc = 0x2014B0u;
            return;
        }
    }
    ctx->pc = 0x201480u;
}
