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

// Function: entry_00151b84
// Address: 0x151b84 - 0x151b9c
void entry_00151b84_0x151b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151b84_0x151b84");
#endif

    ctx->pc = 0x151b84u;

    // 0x151b84: 0x0  nop
    ctx->pc = 0x151b84u;
    // NOP
    // 0x151b88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x151b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151b8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151B8Cu;
    {
        const bool branch_taken_0x151b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151b8c) {
            ctx->pc = 0x151B9Cu;
            return;
        }
    }
    ctx->pc = 0x151B94u;
    // 0x151b94: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x151b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x151b98: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x151b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x151b9cu;
}
