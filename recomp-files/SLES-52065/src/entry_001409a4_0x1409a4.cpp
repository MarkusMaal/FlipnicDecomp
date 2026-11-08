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

// Function: entry_001409a4
// Address: 0x1409a4 - 0x1409dc
void entry_001409a4_0x1409a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001409a4_0x1409a4");
#endif

    ctx->pc = 0x1409a4u;

    // 0x1409a4: 0x8cab0008  lw          $t3, 0x8($a1)
    ctx->pc = 0x1409a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1409a8: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x1409a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1409ac: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1409acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1409b0: 0x1696021  addu        $t4, $t3, $t1
    ctx->pc = 0x1409b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1409b4: 0x188082b  sltu        $at, $t4, $t0
    ctx->pc = 0x1409b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1409b8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1409B8u;
    {
        const bool branch_taken_0x1409b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1409b8) {
            ctx->pc = 0x1409DCu;
            return;
        }
    }
    ctx->pc = 0x1409C0u;
    // 0x1409c0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1409c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1409c4: 0xc3880  sll         $a3, $t4, 2
    ctx->pc = 0x1409c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1409c8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1409c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1409cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1409ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1409d0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1409d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1409d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1409D4u;
    {
        const bool branch_taken_0x1409d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1409D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409D4u;
        // 0x1409d8: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1409d4) {
            ctx->pc = 0x1409F8u;
            return;
        }
    }
    ctx->pc = 0x1409DCu;
}
