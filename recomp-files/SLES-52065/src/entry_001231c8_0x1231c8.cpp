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

// Function: entry_001231c8
// Address: 0x1231c8 - 0x1231e0
void entry_001231c8_0x1231c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001231c8_0x1231c8");
#endif

    ctx->pc = 0x1231c8u;

    // 0x1231c8: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1231C8u;
    {
        const bool branch_taken_0x1231c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1231c8) {
            ctx->pc = 0x1231E0u;
            return;
        }
    }
    ctx->pc = 0x1231D0u;
    // 0x1231d0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1231d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1231d4: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1231D4u;
    {
        const bool branch_taken_0x1231d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1231d4) {
            ctx->pc = 0x1231E0u;
            return;
        }
    }
    ctx->pc = 0x1231DCu;
    // 0x1231dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1231dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1231e0u;
}
