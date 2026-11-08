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

// Function: entry_0014e9d0
// Address: 0x14e9d0 - 0x14e9ec
void entry_0014e9d0_0x14e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e9d0_0x14e9d0");
#endif

    ctx->pc = 0x14e9d0u;

label_14e9d0:
    // 0x14e9d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14e9d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x14e9d8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x14e9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x14e9dc: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x14e9dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14e9e0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14e9e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14E9E4u;
    {
        const bool branch_taken_0x14e9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e9e4) {
            ctx->pc = 0x14E9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e9d0;
        }
    }
    ctx->pc = 0x14E9ECu;
}
