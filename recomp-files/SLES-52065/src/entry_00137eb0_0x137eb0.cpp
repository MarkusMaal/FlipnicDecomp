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

// Function: entry_00137eb0
// Address: 0x137eb0 - 0x137ecc
void entry_00137eb0_0x137eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137eb0_0x137eb0");
#endif

    ctx->pc = 0x137eb0u;

    // 0x137eb0: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x137eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x137eb4: 0xc7382b  sltu        $a3, $a2, $a3
    ctx->pc = 0x137eb4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x137eb8: 0x14e0ffbb  bnez        $a3, . + 4 + (-0x45 << 2)
    ctx->pc = 0x137EB8u;
    {
        const bool branch_taken_0x137eb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x137eb8) {
            ctx->pc = 0x137DA8u;
            return;
        }
    }
    ctx->pc = 0x137EC0u;
    // 0x137ec0: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x137ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x137ec4: 0x14a3ffb5  bne         $a1, $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x137EC4u;
    {
        const bool branch_taken_0x137ec4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x137EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EC4u;
        // 0x137ec8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ec4) {
            ctx->pc = 0x137D9Cu;
            return;
        }
    }
    ctx->pc = 0x137ECCu;
}
