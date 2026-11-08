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

// Function: entry_001db7a8
// Address: 0x1db7a8 - 0x1db7d8
void entry_001db7a8_0x1db7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db7a8_0x1db7a8");
#endif

    ctx->pc = 0x1db7a8u;

    // 0x1db7a8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1db7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1db7ac: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1db7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1db7b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db7b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1db7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1db7b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1db7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1db7bc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1db7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1db7c0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1db7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1db7c4: 0x14750004  bne         $v1, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB7C4u;
    {
        const bool branch_taken_0x1db7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x1DB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7C4u;
        // 0x1db7c8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7c4) {
            ctx->pc = 0x1DB7D8u;
            return;
        }
    }
    ctx->pc = 0x1DB7CCu;
    // 0x1db7cc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1db7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1db7d0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1db7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1db7d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1db7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x1db7d8u;
}
