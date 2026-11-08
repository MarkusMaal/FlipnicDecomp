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

// Function: entry_001385dc
// Address: 0x1385dc - 0x1385f8
void entry_001385dc_0x1385dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001385dc_0x1385dc");
#endif

    ctx->pc = 0x1385dcu;

    // 0x1385dc: 0x8e360058  lw          $s6, 0x58($s1)
    ctx->pc = 0x1385dcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1385e0: 0x8e32005c  lw          $s2, 0x5C($s1)
    ctx->pc = 0x1385e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1385e4: 0x256082b  sltu        $at, $s2, $s6
    ctx->pc = 0x1385e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1385e8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x1385E8u;
    {
        const bool branch_taken_0x1385e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385E8u;
        // 0x1385ec: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385e8) {
            ctx->pc = 0x138668u;
            return;
        }
    }
    ctx->pc = 0x1385F0u;
    // 0x1385f0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1385f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1385f4: 0x3a940  sll         $s5, $v1, 5
    ctx->pc = 0x1385f4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    ctx->pc = 0x1385f8u;
}
