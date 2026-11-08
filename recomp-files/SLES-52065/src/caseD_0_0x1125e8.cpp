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
// Address: 0x1125e8 - 0x1125fc
void caseD_0_0x1125e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1125e8");
#endif

    ctx->pc = 0x1125e8u;

    // 0x1125e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1125e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1125ec: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1125ECu;
    {
        const bool branch_taken_0x1125ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1125F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125ECu;
        // 0x1125f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125ec) {
            ctx->pc = 0x112640u;
            return;
        }
    }
    ctx->pc = 0x1125F4u;
    // 0x1125f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1125F4u;
    {
        const bool branch_taken_0x1125f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1125F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125F4u;
        // 0x1125f8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125f4) {
            ctx->pc = 0x11262Cu;
            return;
        }
    }
    ctx->pc = 0x1125FCu;
}
