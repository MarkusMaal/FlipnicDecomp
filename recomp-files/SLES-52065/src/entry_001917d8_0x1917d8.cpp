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

// Function: entry_001917d8
// Address: 0x1917d8 - 0x1917fc
void entry_001917d8_0x1917d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001917d8_0x1917d8");
#endif

    ctx->pc = 0x1917d8u;

    // 0x1917d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1917d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1917dc: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1917dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1917e0: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x1917e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
    // 0x1917e4: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x1917e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
    // 0x1917e8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1917e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1917ec: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1917ECu;
    {
        const bool branch_taken_0x1917ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1917F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917ECu;
        // 0x1917f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917ec) {
            ctx->pc = 0x1917FCu;
            return;
        }
    }
    ctx->pc = 0x1917F4u;
    // 0x1917f4: 0x100002cb  b           . + 4 + (0x2CB << 2)
    ctx->pc = 0x1917F4u;
    {
        const bool branch_taken_0x1917f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917F4u;
        // 0x1917f8: 0xac6204d0  sw          $v0, 0x4D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917f4) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1917FCu;
}
