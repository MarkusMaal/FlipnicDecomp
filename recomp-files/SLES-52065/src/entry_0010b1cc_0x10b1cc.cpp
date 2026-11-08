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

// Function: entry_0010b1cc
// Address: 0x10b1cc - 0x10b1e0
void entry_0010b1cc_0x10b1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b1cc_0x10b1cc");
#endif

    ctx->pc = 0x10b1ccu;

    // 0x10b1cc: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B1CCu;
    {
        const bool branch_taken_0x10b1cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1CCu;
        // 0x10b1d0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1cc) {
            ctx->pc = 0x10B1E0u;
            return;
        }
    }
    ctx->pc = 0x10B1D4u;
    // 0x10b1d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b1d8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x10B1D8u;
    {
        const bool branch_taken_0x10b1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1D8u;
        // 0x10b1dc: 0xac832328  sw          $v1, 0x2328($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9000), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1d8) {
            ctx->pc = 0x10B234u;
            return;
        }
    }
    ctx->pc = 0x10B1E0u;
}
