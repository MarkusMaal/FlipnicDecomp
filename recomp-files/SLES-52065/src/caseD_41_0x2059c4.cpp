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

// Function: caseD_41
// Address: 0x2059c4 - 0x2059dc
void caseD_41_0x2059c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_41_0x2059c4");
#endif

    ctx->pc = 0x2059c4u;

    // 0x2059c4: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x2059c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2059c8: 0x2862000b  slti        $v0, $v1, 0xB
    ctx->pc = 0x2059c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2059cc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2059CCu;
    {
        const bool branch_taken_0x2059cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2059D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059CCu;
        // 0x2059d0: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059cc) {
            ctx->pc = 0x205A54u;
            return;
        }
    }
    ctx->pc = 0x2059D4u;
    // 0x2059d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2059D4u;
    {
        const bool branch_taken_0x2059d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2059D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059D4u;
        // 0x2059d8: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059d4) {
            ctx->pc = 0x205A10u;
            return;
        }
    }
    ctx->pc = 0x2059DCu;
}
