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

// Function: entry_001b438c
// Address: 0x1b438c - 0x1b43b4
void entry_001b438c_0x1b438c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b438c_0x1b438c");
#endif

    ctx->pc = 0x1b438cu;

    // 0x1b438c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b4390: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4390u;
    {
        const bool branch_taken_0x1b4390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b4390) {
            ctx->pc = 0x1B43B4u;
            return;
        }
    }
    ctx->pc = 0x1B4398u;
    // 0x1b4398: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b4398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b439c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b439cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1b43a0: 0x8f828718  lw          $v0, -0x78E8($gp)
    ctx->pc = 0x1b43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x1b43a4: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B43A4u;
    {
        const bool branch_taken_0x1b43a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b43a4) {
            ctx->pc = 0x1B43BCu;
            return;
        }
    }
    ctx->pc = 0x1B43ACu;
    // 0x1b43ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B43ACu;
    {
        const bool branch_taken_0x1b43ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43ACu;
        // 0x1b43b0: 0xaf838718  sw          $v1, -0x78E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43ac) {
            ctx->pc = 0x1B43BCu;
            return;
        }
    }
    ctx->pc = 0x1B43B4u;
}
