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

// Function: entry_00127c48
// Address: 0x127c48 - 0x127c64
void entry_00127c48_0x127c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127c48_0x127c48");
#endif

    ctx->pc = 0x127c48u;

    // 0x127c48: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x127c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x127c4c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x127c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x127c50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x127c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127c54: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x127C54u;
    {
        const bool branch_taken_0x127c54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x127c54) {
            ctx->pc = 0x127C74u;
            return;
        }
    }
    ctx->pc = 0x127C5Cu;
    // 0x127c5c: 0x24e70028  addiu       $a3, $a3, 0x28
    ctx->pc = 0x127c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x127c60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x127c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x127c64u;
}
