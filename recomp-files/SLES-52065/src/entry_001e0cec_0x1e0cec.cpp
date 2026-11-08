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

// Function: entry_001e0cec
// Address: 0x1e0cec - 0x1e0d08
void entry_001e0cec_0x1e0cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0cec_0x1e0cec");
#endif

    ctx->pc = 0x1e0cecu;

    // 0x1e0cec: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x1e0cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1e0cf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0cf4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0CF4u;
    {
        const bool branch_taken_0x1e0cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CF4u;
        // 0x1e0cf8: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cf4) {
            ctx->pc = 0x1E0D08u;
            return;
        }
    }
    ctx->pc = 0x1E0CFCu;
    // 0x1e0cfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CFCu;
    {
        const bool branch_taken_0x1e0cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CFCu;
        // 0x1e0d00: 0xacc2003c  sw          $v0, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cfc) {
            ctx->pc = 0x1E0D0Cu;
            return;
        }
    }
    ctx->pc = 0x1E0D04u;
    // 0x1e0d04: 0x0  nop
    ctx->pc = 0x1e0d04u;
    // NOP
    ctx->pc = 0x1e0d08u;
}
