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

// Function: entry_00185690
// Address: 0x185690 - 0x1856ac
void entry_00185690_0x185690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185690_0x185690");
#endif

    ctx->pc = 0x185690u;

    // 0x185690: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x185690u;
    {
        const bool branch_taken_0x185690 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x185694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185690u;
        // 0x185694: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185690) {
            ctx->pc = 0x1856ACu;
            return;
        }
    }
    ctx->pc = 0x185698u;
    // 0x185698: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x185698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18569c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x18569cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1856a0: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1856a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1856a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1856A4u;
    {
        const bool branch_taken_0x1856a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1856A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856A4u;
        // 0x1856a8: 0xb12823  subu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856a4) {
            ctx->pc = 0x1856B0u;
            return;
        }
    }
    ctx->pc = 0x1856ACu;
}
