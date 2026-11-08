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

// Function: entry_0019645c
// Address: 0x19645c - 0x196488
void entry_0019645c_0x19645c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019645c_0x19645c");
#endif

    ctx->pc = 0x19645cu;

    // 0x19645c: 0x8e660664  lw          $a2, 0x664($s3)
    ctx->pc = 0x19645cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x196460: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x196460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x196464: 0x10640020  beq         $v1, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x196464u;
    {
        const bool branch_taken_0x196464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x196464) {
            ctx->pc = 0x1964E8u;
            return;
        }
    }
    ctx->pc = 0x19646Cu;
    // 0x19646c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19646cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196470: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x196470u;
    {
        const bool branch_taken_0x196470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x196470) {
            ctx->pc = 0x196488u;
            return;
        }
    }
    ctx->pc = 0x196478u;
    // 0x196478: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x196478u;
    {
        const bool branch_taken_0x196478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196478) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x196480u;
    // 0x196480: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x196480u;
    {
        const bool branch_taken_0x196480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196480) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x196488u;
}
