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

// Function: entry_001d1f88
// Address: 0x1d1f88 - 0x1d1fa0
void entry_001d1f88_0x1d1f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1f88_0x1d1f88");
#endif

    ctx->pc = 0x1d1f88u;

    // 0x1d1f88: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d1f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d1f8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d1f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1f90: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1F90u;
    {
        const bool branch_taken_0x1d1f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1f90) {
            ctx->pc = 0x1D1FA0u;
            return;
        }
    }
    ctx->pc = 0x1D1F98u;
    // 0x1d1f98: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D1F98u;
    {
        const bool branch_taken_0x1d1f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F98u;
        // 0x1d1f9c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f98) {
            ctx->pc = 0x1D1FA0u;
            return;
        }
    }
    ctx->pc = 0x1D1FA0u;
}
