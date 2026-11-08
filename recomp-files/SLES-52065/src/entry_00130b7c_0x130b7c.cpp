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

// Function: entry_00130b7c
// Address: 0x130b7c - 0x130ba4
void entry_00130b7c_0x130b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130b7c_0x130b7c");
#endif

    ctx->pc = 0x130b7cu;

    // 0x130b7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x130b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130b80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x130b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x130b84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x130b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130b88: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x130b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x130b8c: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x130b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x130b90: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x130b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x130b94: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x130b94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x130b98: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x130B98u;
    {
        const bool branch_taken_0x130b98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B98u;
        // 0x130b9c: 0x27a20068  addiu       $v0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b98) {
            ctx->pc = 0x130BA4u;
            return;
        }
    }
    ctx->pc = 0x130BA0u;
    // 0x130ba0: 0x27a2006c  addiu       $v0, $sp, 0x6C
    ctx->pc = 0x130ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->pc = 0x130ba4u;
}
