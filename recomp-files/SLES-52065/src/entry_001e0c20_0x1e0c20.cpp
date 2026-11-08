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

// Function: entry_001e0c20
// Address: 0x1e0c20 - 0x1e0c48
void entry_001e0c20_0x1e0c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0c20_0x1e0c20");
#endif

    ctx->pc = 0x1e0c20u;

label_1e0c20:
    // 0x1e0c20: 0x24c6002c  addiu       $a2, $a2, 0x2C
    ctx->pc = 0x1e0c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
    // 0x1e0c24: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e0c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e0c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e0c2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0C2Cu;
    {
        const bool branch_taken_0x1e0c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C2Cu;
        // 0x1e0c30: 0x28a40008  slti        $a0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c2c) {
            ctx->pc = 0x1E0C48u;
            return;
        }
    }
    ctx->pc = 0x1E0C34u;
    // 0x1e0c34: 0x0  nop
    ctx->pc = 0x1e0c34u;
    // NOP
    // 0x1e0c38: 0x0  nop
    ctx->pc = 0x1e0c38u;
    // NOP
    // 0x1e0c3c: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E0C3Cu;
    {
        const bool branch_taken_0x1e0c3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c3c) {
            ctx->pc = 0x1E0C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0C3Cu;
            // 0x1e0c40: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0c20;
        }
    }
    ctx->pc = 0x1E0C44u;
    // 0x1e0c44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1e0c48u;
}
