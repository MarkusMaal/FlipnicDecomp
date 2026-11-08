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

// Function: caseD_0
// Address: 0x110338 - 0x11034c
void caseD_0_0x110338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x110338");
#endif

    ctx->pc = 0x110338u;

    // 0x110338: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x110338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11033c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11033Cu;
    {
        const bool branch_taken_0x11033c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11033Cu;
        // 0x110340: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11033c) {
            ctx->pc = 0x110390u;
            return;
        }
    }
    ctx->pc = 0x110344u;
    // 0x110344: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x110344u;
    {
        const bool branch_taken_0x110344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110344u;
        // 0x110348: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110344) {
            ctx->pc = 0x11037Cu;
            return;
        }
    }
    ctx->pc = 0x11034Cu;
}
