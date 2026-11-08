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

// Function: entry_001e93f8
// Address: 0x1e93f8 - 0x1e940c
void entry_001e93f8_0x1e93f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e93f8_0x1e93f8");
#endif

    ctx->pc = 0x1e93f8u;

    // 0x1e93f8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e93f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e93fc: 0x1103ffdc  beq         $t0, $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1E93FCu;
    {
        const bool branch_taken_0x1e93fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e93fc) {
            ctx->pc = 0x1E9370u;
            return;
        }
    }
    ctx->pc = 0x1E9404u;
    // 0x1e9404: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9404u;
    {
        const bool branch_taken_0x1e9404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9404) {
            ctx->pc = 0x1E9424u;
            return;
        }
    }
    ctx->pc = 0x1E940Cu;
}
