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

// Function: entry_001e86c4
// Address: 0x1e86c4 - 0x1e86e4
void entry_001e86c4_0x1e86c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e86c4_0x1e86c4");
#endif

    ctx->pc = 0x1e86c4u;

label_1e86c4:
    // 0x1e86c4: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x1e86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1e86c8: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x1e86c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e86cc: 0x0  nop
    ctx->pc = 0x1e86ccu;
    // NOP
    // 0x1e86d0: 0x0  nop
    ctx->pc = 0x1e86d0u;
    // NOP
    // 0x1e86d4: 0x0  nop
    ctx->pc = 0x1e86d4u;
    // NOP
    // 0x1e86d8: 0x0  nop
    ctx->pc = 0x1e86d8u;
    // NOP
    // 0x1e86dc: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E86DCu;
    {
        const bool branch_taken_0x1e86dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e86dc) {
            ctx->pc = 0x1E86C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e86c4;
        }
    }
    ctx->pc = 0x1E86E4u;
}
