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

// Function: entry_0016b44c
// Address: 0x16b44c - 0x16b45c
void entry_0016b44c_0x16b44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b44c_0x16b44c");
#endif

    ctx->pc = 0x16b44cu;

    // 0x16b44c: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x16b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x16b450: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B450u;
    {
        const bool branch_taken_0x16b450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b450) {
            ctx->pc = 0x16B45Cu;
            return;
        }
    }
    ctx->pc = 0x16B458u;
    // 0x16b458: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x16b45cu;
}
