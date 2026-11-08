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

// Function: entry_001410ac
// Address: 0x1410ac - 0x1410c4
void entry_001410ac_0x1410ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001410ac_0x1410ac");
#endif

    ctx->pc = 0x1410acu;

    // 0x1410ac: 0x0  nop
    ctx->pc = 0x1410acu;
    // NOP
    // 0x1410b0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1410b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1410b4: 0x1660ffec  bnez        $s3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1410B4u;
    {
        const bool branch_taken_0x1410b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1410b4) {
            ctx->pc = 0x141068u;
            return;
        }
    }
    ctx->pc = 0x1410BCu;
    // 0x1410bc: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1410BCu;
    {
        const bool branch_taken_0x1410bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1410bc) {
            ctx->pc = 0x1413E4u;
            return;
        }
    }
    ctx->pc = 0x1410C4u;
}
