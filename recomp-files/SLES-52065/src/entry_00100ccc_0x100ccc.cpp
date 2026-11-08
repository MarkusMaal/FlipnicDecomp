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

// Function: entry_00100ccc
// Address: 0x100ccc - 0x100ce4
void entry_00100ccc_0x100ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100ccc_0x100ccc");
#endif

    ctx->pc = 0x100cccu;

    // 0x100ccc: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x100CCCu;
    {
        const bool branch_taken_0x100ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ccc) {
            ctx->pc = 0x100D80u;
            return;
        }
    }
    ctx->pc = 0x100CD4u;
    // 0x100cd4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100CD4u;
    {
        const bool branch_taken_0x100cd4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x100CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CD4u;
        // 0x100cd8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cd4) {
            ctx->pc = 0x100CE4u;
            return;
        }
    }
    ctx->pc = 0x100CDCu;
    // 0x100cdc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x100CDCu;
    {
        const bool branch_taken_0x100cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CDCu;
        // 0x100ce0: 0x846401e8  lh          $a0, 0x1E8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cdc) {
            ctx->pc = 0x100D08u;
            return;
        }
    }
    ctx->pc = 0x100CE4u;
}
