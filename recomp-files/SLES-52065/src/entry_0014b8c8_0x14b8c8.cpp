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

// Function: entry_0014b8c8
// Address: 0x14b8c8 - 0x14b8d8
void entry_0014b8c8_0x14b8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b8c8_0x14b8c8");
#endif

    ctx->pc = 0x14b8c8u;

    // 0x14b8c8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14b8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14b8cc: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B8CCu;
    {
        const bool branch_taken_0x14b8cc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x14b8cc) {
            ctx->pc = 0x14B8D8u;
            return;
        }
    }
    ctx->pc = 0x14B8D4u;
    // 0x14b8d4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x14b8d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14b8d8u;
}
