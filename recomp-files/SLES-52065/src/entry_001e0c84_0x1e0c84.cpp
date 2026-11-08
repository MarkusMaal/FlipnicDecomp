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

// Function: entry_001e0c84
// Address: 0x1e0c84 - 0x1e0ca8
void entry_001e0c84_0x1e0c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0c84_0x1e0c84");
#endif

    ctx->pc = 0x1e0c84u;

    // 0x1e0c84: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e0c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e0c88: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1e0c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1e0c8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0c90: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x1e0c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e0c94: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0C94u;
    {
        const bool branch_taken_0x1e0c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C94u;
        // 0x1e0c98: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c94) {
            ctx->pc = 0x1E0CA8u;
            return;
        }
    }
    ctx->pc = 0x1E0C9Cu;
    // 0x1e0c9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0C9Cu;
    {
        const bool branch_taken_0x1e0c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C9Cu;
        // 0x1e0ca0: 0xacc20030  sw          $v0, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c9c) {
            ctx->pc = 0x1E0CACu;
            return;
        }
    }
    ctx->pc = 0x1E0CA4u;
    // 0x1e0ca4: 0x0  nop
    ctx->pc = 0x1e0ca4u;
    // NOP
    ctx->pc = 0x1e0ca8u;
}
