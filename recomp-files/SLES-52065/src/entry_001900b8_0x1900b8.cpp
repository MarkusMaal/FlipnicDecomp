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

// Function: entry_001900b8
// Address: 0x1900b8 - 0x1900dc
void entry_001900b8_0x1900b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001900b8_0x1900b8");
#endif

    ctx->pc = 0x1900b8u;

label_1900b8:
    // 0x1900b8: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x1900b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1900bc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1900bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1900c0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1900C0u;
    {
        const bool branch_taken_0x1900c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1900C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900C0u;
        // 0x1900c4: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900c0) {
            ctx->pc = 0x1900DCu;
            return;
        }
    }
    ctx->pc = 0x1900C8u;
    // 0x1900c8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1900c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1900cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1900ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1900d0: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x1900d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1900d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1900D4u;
    {
        const bool branch_taken_0x1900d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1900d4) {
            ctx->pc = 0x1900B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1900b8;
        }
    }
    ctx->pc = 0x1900DCu;
}
