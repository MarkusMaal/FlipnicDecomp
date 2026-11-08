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

// Function: entry_0018cd4c
// Address: 0x18cd4c - 0x18cd64
void entry_0018cd4c_0x18cd4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cd4c_0x18cd4c");
#endif

    ctx->pc = 0x18cd4cu;

    // 0x18cd4c: 0x8e03046c  lw          $v1, 0x46C($s0)
    ctx->pc = 0x18cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x18cd50: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CD50u;
    {
        const bool branch_taken_0x18cd50 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x18cd50) {
            ctx->pc = 0x18CD64u;
            return;
        }
    }
    ctx->pc = 0x18CD58u;
    // 0x18cd58: 0x8e020468  lw          $v0, 0x468($s0)
    ctx->pc = 0x18cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x18cd5c: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18CD5Cu;
    {
        const bool branch_taken_0x18cd5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18cd5c) {
            ctx->pc = 0x18CDB0u;
            return;
        }
    }
    ctx->pc = 0x18CD64u;
}
