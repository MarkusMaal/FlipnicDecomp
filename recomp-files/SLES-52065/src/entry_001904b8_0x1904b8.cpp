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

// Function: entry_001904b8
// Address: 0x1904b8 - 0x1904cc
void entry_001904b8_0x1904b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001904b8_0x1904b8");
#endif

    ctx->pc = 0x1904b8u;

    // 0x1904b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1904b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904bc: 0xa06016a4  sb          $zero, 0x16A4($v1)
    ctx->pc = 0x1904bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5796), (uint8_t)GPR_U32(ctx, 0));
    // 0x1904c0: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x1904c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1904c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1904C4u;
    {
        const bool branch_taken_0x1904c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1904C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904C4u;
        // 0x1904c8: 0x10a2021  addu        $a0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904c4) {
            ctx->pc = 0x1904DCu;
            return;
        }
    }
    ctx->pc = 0x1904CCu;
}
