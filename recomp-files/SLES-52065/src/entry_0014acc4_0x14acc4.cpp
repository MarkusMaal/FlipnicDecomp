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

// Function: entry_0014acc4
// Address: 0x14acc4 - 0x14acf0
void entry_0014acc4_0x14acc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014acc4_0x14acc4");
#endif

    ctx->pc = 0x14acc4u;

    // 0x14acc4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x14acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14acc8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x14acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14accc: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x14acccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x14acd0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14acd4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14acd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14acd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14acdc: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x14acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14ace0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14ACE0u;
    {
        const bool branch_taken_0x14ace0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACE0u;
        // 0x14ace4: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ace0) {
            ctx->pc = 0x14ACF0u;
            return;
        }
    }
    ctx->pc = 0x14ACE8u;
    // 0x14ace8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x14ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x14acec: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x14acecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x14acf0u;
}
