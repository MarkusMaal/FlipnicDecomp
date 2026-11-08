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

// Function: entry_0014d6c0
// Address: 0x14d6c0 - 0x14d6ec
void entry_0014d6c0_0x14d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d6c0_0x14d6c0");
#endif

    ctx->pc = 0x14d6c0u;

    // 0x14d6c0: 0xafd10000  sw          $s1, 0x0($fp)
    ctx->pc = 0x14d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
    // 0x14d6c4: 0xafb000a0  sw          $s0, 0xA0($sp)
    ctx->pc = 0x14d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 16));
    // 0x14d6c8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d6cc: 0x8eb10008  lw          $s1, 0x8($s5)
    ctx->pc = 0x14d6ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14d6d0: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x14d6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14d6d4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x14d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14d6d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d6dc: 0x234082b  sltu        $at, $s1, $s4
    ctx->pc = 0x14d6dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14d6e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d6e4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14D6E4u;
    {
        const bool branch_taken_0x14d6e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6E4u;
        // 0x14d6e8: 0x222b821  addu        $s7, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6e4) {
            ctx->pc = 0x14D71Cu;
            return;
        }
    }
    ctx->pc = 0x14D6ECu;
}
