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

// Function: entry_001d97b0
// Address: 0x1d97b0 - 0x1d97c8
void entry_001d97b0_0x1d97b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d97b0_0x1d97b0");
#endif

    ctx->pc = 0x1d97b0u;

    // 0x1d97b0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D97B0u;
    {
        const bool branch_taken_0x1d97b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97B0u;
        // 0x1d97b4: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97b0) {
            ctx->pc = 0x1D9830u;
            return;
        }
    }
    ctx->pc = 0x1D97B8u;
    // 0x1d97b8: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D97B8u;
    {
        const bool branch_taken_0x1d97b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97B8u;
        // 0x1d97bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97b8) {
            ctx->pc = 0x1D9860u;
            return;
        }
    }
    ctx->pc = 0x1D97C0u;
    // 0x1d97c0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1D97C0u;
    {
        const bool branch_taken_0x1d97c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97C0u;
        // 0x1d97c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97c0) {
            ctx->pc = 0x1D9888u;
            return;
        }
    }
    ctx->pc = 0x1D97C8u;
}
