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

// Function: entry_00114820
// Address: 0x114820 - 0x11483c
void entry_00114820_0x114820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114820_0x114820");
#endif

    ctx->pc = 0x114820u;

    // 0x114820: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x114820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x114824: 0x8cc2023c  lw          $v0, 0x23C($a2)
    ctx->pc = 0x114824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 572)));
    // 0x114828: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114828u;
    {
        const bool branch_taken_0x114828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x114828) {
            ctx->pc = 0x11483Cu;
            return;
        }
    }
    ctx->pc = 0x114830u;
    // 0x114830: 0x8cc20240  lw          $v0, 0x240($a2)
    ctx->pc = 0x114830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 576)));
    // 0x114834: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114834u;
    {
        const bool branch_taken_0x114834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x114834) {
            ctx->pc = 0x114848u;
            return;
        }
    }
    ctx->pc = 0x11483Cu;
}
