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

// Function: entry_0015c33c
// Address: 0x15c33c - 0x15c350
void entry_0015c33c_0x15c33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c33c_0x15c33c");
#endif

    ctx->pc = 0x15c33cu;

    // 0x15c33c: 0x86310008  lh          $s1, 0x8($s1)
    ctx->pc = 0x15c33cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15c340: 0x2b29023  subu        $s2, $s5, $s2
    ctx->pc = 0x15c340u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x15c344: 0x251082a  slt         $at, $s2, $s1
    ctx->pc = 0x15c344u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15c348: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x15C348u;
    {
        const bool branch_taken_0x15c348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C348u;
        // 0x15c34c: 0x159880  sll         $s3, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c348) {
            ctx->pc = 0x15C398u;
            return;
        }
    }
    ctx->pc = 0x15C350u;
}
