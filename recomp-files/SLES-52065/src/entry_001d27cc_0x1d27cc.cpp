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

// Function: entry_001d27cc
// Address: 0x1d27cc - 0x1d27ec
void entry_001d27cc_0x1d27cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d27cc_0x1d27cc");
#endif

    ctx->pc = 0x1d27ccu;

    // 0x1d27cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d27ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d27d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27d4: 0x8c2302d8  lw          $v1, 0x2D8($at)
    ctx->pc = 0x1d27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3702D8u));
    // 0x1d27d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D27D8u;
    {
        const bool branch_taken_0x1d27d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27D8u;
        // 0x1d27dc: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27d8) {
            ctx->pc = 0x1D27ECu;
            return;
        }
    }
    ctx->pc = 0x1D27E0u;
    // 0x1d27e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d27e4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1D27E4u;
    {
        const bool branch_taken_0x1d27e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27E4u;
        // 0x1d27e8: 0x2442ff10  addiu       $v0, $v0, -0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27e4) {
            ctx->pc = 0x1D28D8u;
            return;
        }
    }
    ctx->pc = 0x1D27ECu;
}
