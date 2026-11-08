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

// Function: entry_00144160
// Address: 0x144160 - 0x144178
void entry_00144160_0x144160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144160_0x144160");
#endif

    ctx->pc = 0x144160u;

    // 0x144160: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x144160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144164: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x144164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x144168: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x144168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x14416c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14416cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x144170: 0x1660ffe9  bnez        $s3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x144170u;
    {
        const bool branch_taken_0x144170 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x144174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144170u;
        // 0x144174: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144170) {
            ctx->pc = 0x144118u;
            return;
        }
    }
    ctx->pc = 0x144178u;
}
