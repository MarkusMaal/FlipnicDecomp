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

// Function: entry_001e0ccc
// Address: 0x1e0ccc - 0x1e0ce8
void entry_001e0ccc_0x1e0ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0ccc_0x1e0ccc");
#endif

    ctx->pc = 0x1e0cccu;

    // 0x1e0ccc: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x1e0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1e0cd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0cd4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0CD4u;
    {
        const bool branch_taken_0x1e0cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CD4u;
        // 0x1e0cd8: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cd4) {
            ctx->pc = 0x1E0CE8u;
            return;
        }
    }
    ctx->pc = 0x1E0CDCu;
    // 0x1e0cdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CDCu;
    {
        const bool branch_taken_0x1e0cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CDCu;
        // 0x1e0ce0: 0xacc20038  sw          $v0, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cdc) {
            ctx->pc = 0x1E0CECu;
            return;
        }
    }
    ctx->pc = 0x1E0CE4u;
    // 0x1e0ce4: 0x0  nop
    ctx->pc = 0x1e0ce4u;
    // NOP
    ctx->pc = 0x1e0ce8u;
}
