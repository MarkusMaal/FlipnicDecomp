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

// Function: entry_001ebb90
// Address: 0x1ebb90 - 0x1ebbac
void entry_001ebb90_0x1ebb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebb90_0x1ebb90");
#endif

    ctx->pc = 0x1ebb90u;

label_1ebb90:
    // 0x1ebb90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ebb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ebb94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ebb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ebb98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBB98u;
    {
        const bool branch_taken_0x1ebb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb98) {
            ctx->pc = 0x1EBBACu;
            return;
        }
    }
    ctx->pc = 0x1EBBA0u;
    // 0x1ebba0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ebba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebba4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EBBA4u;
    {
        const bool branch_taken_0x1ebba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebba4) {
            ctx->pc = 0x1EBB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebb90;
        }
    }
    ctx->pc = 0x1EBBACu;
}
