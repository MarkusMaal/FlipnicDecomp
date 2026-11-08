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

// Function: entry_001620c0
// Address: 0x1620c0 - 0x1620cc
void entry_001620c0_0x1620c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001620c0_0x1620c0");
#endif

    ctx->pc = 0x1620c0u;

    // 0x1620c0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1620C0u;
    {
        const bool branch_taken_0x1620c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1620c0) {
            ctx->pc = 0x1620CCu;
            return;
        }
    }
    ctx->pc = 0x1620C8u;
    // 0x1620c8: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1620c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1620ccu;
}
