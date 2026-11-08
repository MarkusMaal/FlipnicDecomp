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

// Function: entry_001f4a78
// Address: 0x1f4a78 - 0x1f4a98
void entry_001f4a78_0x1f4a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4a78_0x1f4a78");
#endif

    ctx->pc = 0x1f4a78u;

label_1f4a78:
    // 0x1f4a78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f4a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f4a7c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f4a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f4a80: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1f4a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f4a84: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1f4a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f4a88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f4a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1f4a8c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1f4a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1f4a90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F4A90u;
    {
        const bool branch_taken_0x1f4a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4a90) {
            ctx->pc = 0x1F4A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4a78;
        }
    }
    ctx->pc = 0x1F4A98u;
}
