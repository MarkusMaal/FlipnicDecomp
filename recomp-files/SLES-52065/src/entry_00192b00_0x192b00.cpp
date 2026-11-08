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

// Function: entry_00192b00
// Address: 0x192b00 - 0x192b18
void entry_00192b00_0x192b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192b00_0x192b00");
#endif

    ctx->pc = 0x192b00u;

    // 0x192b00: 0x85a92828  lh          $t1, 0x2828($t5)
    ctx->pc = 0x192b00u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 10280)));
    // 0x192b04: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x192b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x192b08: 0x10890006  beq         $a0, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x192B08u;
    {
        const bool branch_taken_0x192b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        if (branch_taken_0x192b08) {
            ctx->pc = 0x192B24u;
            return;
        }
    }
    ctx->pc = 0x192B10u;
    // 0x192b10: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x192b10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x192b14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x192b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x192b18u;
}
