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

// Function: entry_001a733c
// Address: 0x1a733c - 0x1a7350
void entry_001a733c_0x1a733c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a733c_0x1a733c");
#endif

    ctx->pc = 0x1a733cu;

    // 0x1a733c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1a733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a7340: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7340u;
    {
        const bool branch_taken_0x1a7340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7340u;
        // 0x1a7344: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7340) {
            ctx->pc = 0x1A7350u;
            return;
        }
    }
    ctx->pc = 0x1A7348u;
    // 0x1a7348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7348u;
    {
        const bool branch_taken_0x1a7348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7348u;
        // 0x1a734c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7348) {
            ctx->pc = 0x1A7354u;
            return;
        }
    }
    ctx->pc = 0x1A7350u;
}
