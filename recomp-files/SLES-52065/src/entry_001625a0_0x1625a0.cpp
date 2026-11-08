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

// Function: entry_001625a0
// Address: 0x1625a0 - 0x1625b0
void entry_001625a0_0x1625a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001625a0_0x1625a0");
#endif

    ctx->pc = 0x1625a0u;

    // 0x1625a0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1625a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1625a4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1625A4u;
    {
        const bool branch_taken_0x1625a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1625a4) {
            ctx->pc = 0x1625B0u;
            return;
        }
    }
    ctx->pc = 0x1625ACu;
    // 0x1625ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1625acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1625b0u;
}
