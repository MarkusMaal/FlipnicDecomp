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

// Function: entry_00192088
// Address: 0x192088 - 0x1920a4
void entry_00192088_0x192088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192088_0x192088");
#endif

    ctx->pc = 0x192088u;

    // 0x192088: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x192088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19208c: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x19208cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x192090: 0x8c842c10  lw          $a0, 0x2C10($a0)
    ctx->pc = 0x192090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11280)));
    // 0x192094: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192094u;
    {
        const bool branch_taken_0x192094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x192098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192094u;
        // 0x192098: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192094) {
            ctx->pc = 0x1920A4u;
            return;
        }
    }
    ctx->pc = 0x19209Cu;
    // 0x19209c: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x19209Cu;
    {
        const bool branch_taken_0x19209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19209Cu;
        // 0x1920a0: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19209c) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1920A4u;
}
