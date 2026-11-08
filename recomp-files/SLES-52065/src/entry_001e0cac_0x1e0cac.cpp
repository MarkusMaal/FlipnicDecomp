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

// Function: entry_001e0cac
// Address: 0x1e0cac - 0x1e0cc8
void entry_001e0cac_0x1e0cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0cac_0x1e0cac");
#endif

    ctx->pc = 0x1e0cacu;

    // 0x1e0cac: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x1e0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1e0cb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0cb4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0CB4u;
    {
        const bool branch_taken_0x1e0cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CB4u;
        // 0x1e0cb8: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cb4) {
            ctx->pc = 0x1E0CC8u;
            return;
        }
    }
    ctx->pc = 0x1E0CBCu;
    // 0x1e0cbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CBCu;
    {
        const bool branch_taken_0x1e0cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CBCu;
        // 0x1e0cc0: 0xacc20034  sw          $v0, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cbc) {
            ctx->pc = 0x1E0CCCu;
            return;
        }
    }
    ctx->pc = 0x1E0CC4u;
    // 0x1e0cc4: 0x0  nop
    ctx->pc = 0x1e0cc4u;
    // NOP
    ctx->pc = 0x1e0cc8u;
}
