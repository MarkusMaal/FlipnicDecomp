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

// Function: entry_001f47c0
// Address: 0x1f47c0 - 0x1f47e0
void entry_001f47c0_0x1f47c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f47c0_0x1f47c0");
#endif

    ctx->pc = 0x1f47c0u;

label_1f47c0:
    // 0x1f47c0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1f47c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f47c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f47c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f47c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f47c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f47cc: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1f47ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f47d0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f47d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f47d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f47d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f47d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F47D8u;
    {
        const bool branch_taken_0x1f47d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f47d8) {
            ctx->pc = 0x1F47C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f47c0;
        }
    }
    ctx->pc = 0x1F47E0u;
}
