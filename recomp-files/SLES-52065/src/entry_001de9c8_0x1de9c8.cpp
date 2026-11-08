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

// Function: entry_001de9c8
// Address: 0x1de9c8 - 0x1de9e0
void entry_001de9c8_0x1de9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de9c8_0x1de9c8");
#endif

    ctx->pc = 0x1de9c8u;

    // 0x1de9c8: 0x41082  srl         $v0, $a0, 2
    ctx->pc = 0x1de9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x1de9cc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1de9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1de9d0: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1de9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1de9d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1de9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1de9d8: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE9D8u;
    {
        const bool branch_taken_0x1de9d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de9d8) {
            ctx->pc = 0x1DE9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE9D8u;
            // 0x1de9dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9E0u;
            return;
        }
    }
    ctx->pc = 0x1DE9E0u;
}
