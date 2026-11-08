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

// Function: entry_001e6c30
// Address: 0x1e6c30 - 0x1e6c5c
void entry_001e6c30_0x1e6c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6c30_0x1e6c30");
#endif

    ctx->pc = 0x1e6c30u;

    // 0x1e6c30: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x1e6c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1e6c34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6c38: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1e6c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e6c3c: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x1e6c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x1e6c40: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1e6c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1e6c44: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1e6c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1e6c48: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e6c4c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e6c4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e6c50: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E6C50u;
    {
        const bool branch_taken_0x1e6c50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C50u;
        // 0x1e6c54: 0x27a20008  addiu       $v0, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c50) {
            ctx->pc = 0x1E6C5Cu;
            return;
        }
    }
    ctx->pc = 0x1E6C58u;
    // 0x1e6c58: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x1e6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x1e6c5cu;
}
