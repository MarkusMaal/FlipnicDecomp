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

// Function: entry_001e82a4
// Address: 0x1e82a4 - 0x1e82c4
void entry_001e82a4_0x1e82a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e82a4_0x1e82a4");
#endif

    ctx->pc = 0x1e82a4u;

    // 0x1e82a4: 0x0  nop
    ctx->pc = 0x1e82a4u;
    // NOP
    // 0x1e82a8: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1e82a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e82ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e82acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e82b0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e82b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e82b4: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1e82b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e82b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e82b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e82bc: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E82BCu;
    {
        const bool branch_taken_0x1e82bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82BCu;
        // 0x1e82c0: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82bc) {
            ctx->pc = 0x1E8274u;
            return;
        }
    }
    ctx->pc = 0x1E82C4u;
}
