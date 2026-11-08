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

// Function: entry_0013b2e4
// Address: 0x13b2e4 - 0x13b304
void entry_0013b2e4_0x13b2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b2e4_0x13b2e4");
#endif

    ctx->pc = 0x13b2e4u;

    // 0x13b2e4: 0x0  nop
    ctx->pc = 0x13b2e4u;
    // NOP
    // 0x13b2e8: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x13b2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b2ec: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13b2ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13b2f0: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x13b2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x13b2f4: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x13b2f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x13b2f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13b2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b2fc: 0x1420ffeb  bnez        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13B2FCu;
    {
        const bool branch_taken_0x13b2fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2FCu;
        // 0x13b300: 0xaea60004  sw          $a2, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2fc) {
            ctx->pc = 0x13B2ACu;
            return;
        }
    }
    ctx->pc = 0x13B304u;
}
