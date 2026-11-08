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

// Function: entry_001db818
// Address: 0x1db818 - 0x1db848
void entry_001db818_0x1db818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db818_0x1db818");
#endif

    ctx->pc = 0x1db818u;

    // 0x1db818: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1db818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1db81c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1db81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1db820: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db824: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1db824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1db828: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1db828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1db82c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1db82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1db830: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1db830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1db834: 0x48182a  slt         $v1, $v0, $t0
    ctx->pc = 0x1db834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1db838: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB838u;
    {
        const bool branch_taken_0x1db838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB838u;
        // 0x1db83c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db838) {
            ctx->pc = 0x1DB848u;
            return;
        }
    }
    ctx->pc = 0x1DB840u;
    // 0x1db840: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1db840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db844: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1db844u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1db848u;
}
