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

// Function: entry_00168fe0
// Address: 0x168fe0 - 0x168fec
void entry_00168fe0_0x168fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168fe0_0x168fe0");
#endif

    ctx->pc = 0x168fe0u;

    // 0x168fe0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x168FE0u;
    {
        const bool branch_taken_0x168fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168fe0) {
            ctx->pc = 0x168FECu;
            return;
        }
    }
    ctx->pc = 0x168FE8u;
    // 0x168fe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x168fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x168fecu;
}
