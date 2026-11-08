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

// Function: entry_001c865c
// Address: 0x1c865c - 0x1c8688
void entry_001c865c_0x1c865c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c865c_0x1c865c");
#endif

    ctx->pc = 0x1c865cu;

    // 0x1c865c: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x1c865cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1c8660: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c8660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8664: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C8664u;
    {
        const bool branch_taken_0x1c8664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c8664) {
            ctx->pc = 0x1C86BCu;
            return;
        }
    }
    ctx->pc = 0x1C866Cu;
    // 0x1c866c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c866cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8670: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C8670u;
    {
        const bool branch_taken_0x1c8670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c8670) {
            ctx->pc = 0x1C86B0u;
            return;
        }
    }
    ctx->pc = 0x1C8678u;
    // 0x1c8678: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8678u;
    {
        const bool branch_taken_0x1c8678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8678) {
            ctx->pc = 0x1C8688u;
            return;
        }
    }
    ctx->pc = 0x1C8680u;
    // 0x1c8680: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C8680u;
    {
        const bool branch_taken_0x1c8680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8680) {
            ctx->pc = 0x1C86C0u;
            return;
        }
    }
    ctx->pc = 0x1C8688u;
}
