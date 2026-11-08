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

// Function: entry_001dc1a0
// Address: 0x1dc1a0 - 0x1dc1d0
void entry_001dc1a0_0x1dc1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc1a0_0x1dc1a0");
#endif

    ctx->pc = 0x1dc1a0u;

    // 0x1dc1a0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dc1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dc1a4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dc1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dc1a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc1ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dc1b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dc1b4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1dc1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1dc1b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1dc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc1bc: 0x46182b  sltu        $v1, $v0, $a2
    ctx->pc = 0x1dc1bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1dc1c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC1C0u;
    {
        const bool branch_taken_0x1dc1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1C0u;
        // 0x1dc1c4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1c0) {
            ctx->pc = 0x1DC1D0u;
            return;
        }
    }
    ctx->pc = 0x1DC1C8u;
    // 0x1dc1c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dc1c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1cc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1dc1ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1dc1d0u;
}
