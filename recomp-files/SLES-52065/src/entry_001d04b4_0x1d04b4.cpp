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

// Function: entry_001d04b4
// Address: 0x1d04b4 - 0x1d04d0
void entry_001d04b4_0x1d04b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d04b4_0x1d04b4");
#endif

    ctx->pc = 0x1d04b4u;

label_1d04b4:
    // 0x1d04b4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d04b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d04b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d04bc: 0x2882000b  slti        $v0, $a0, 0xB
    ctx->pc = 0x1d04bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d04c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d04c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d04c4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1d04c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1d04c8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D04C8u;
    {
        const bool branch_taken_0x1d04c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04C8u;
        // 0x1d04cc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04c8) {
            ctx->pc = 0x1D04B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d04b4;
        }
    }
    ctx->pc = 0x1D04D0u;
}
