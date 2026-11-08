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

// Function: entry_0013b3c8
// Address: 0x13b3c8 - 0x13b3e4
void entry_0013b3c8_0x13b3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b3c8_0x13b3c8");
#endif

    ctx->pc = 0x13b3c8u;

    // 0x13b3c8: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x13b3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b3cc: 0x25290060  addiu       $t1, $t1, 0x60
    ctx->pc = 0x13b3ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x13b3d0: 0x254a0060  addiu       $t2, $t2, 0x60
    ctx->pc = 0x13b3d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 96));
    // 0x13b3d4: 0x124282b  sltu        $a1, $t1, $a0
    ctx->pc = 0x13b3d4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13b3d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13b3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b3dc: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13B3DCu;
    {
        const bool branch_taken_0x13b3dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3DCu;
        // 0x13b3e0: 0xaea60004  sw          $a2, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3dc) {
            ctx->pc = 0x13B390u;
            return;
        }
    }
    ctx->pc = 0x13B3E4u;
}
