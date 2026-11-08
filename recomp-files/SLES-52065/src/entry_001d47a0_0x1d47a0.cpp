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

// Function: entry_001d47a0
// Address: 0x1d47a0 - 0x1d47c0
void entry_001d47a0_0x1d47a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d47a0_0x1d47a0");
#endif

    ctx->pc = 0x1d47a0u;

    // 0x1d47a0: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x1d47a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x1d47a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D47A4u;
    {
        const bool branch_taken_0x1d47a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47A4u;
        // 0x1d47a8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47a4) {
            ctx->pc = 0x1D47C0u;
            return;
        }
    }
    ctx->pc = 0x1D47ACu;
    // 0x1d47ac: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D47ACu;
    {
        const bool branch_taken_0x1d47ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d47ac) {
            ctx->pc = 0x1D47B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D47ACu;
            // 0x1d47b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D47C8u;
            return;
        }
    }
    ctx->pc = 0x1D47B4u;
    // 0x1d47b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D47B4u;
    {
        const bool branch_taken_0x1d47b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d47b4) {
            ctx->pc = 0x1D47C8u;
            return;
        }
    }
    ctx->pc = 0x1D47BCu;
    // 0x1d47bc: 0x0  nop
    ctx->pc = 0x1d47bcu;
    // NOP
    ctx->pc = 0x1d47c0u;
}
