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

// Function: entry_00122da0
// Address: 0x122da0 - 0x122db8
void entry_00122da0_0x122da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122da0_0x122da0");
#endif

    ctx->pc = 0x122da0u;

    // 0x122da0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x122da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x122da4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x122da4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x122da8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x122DA8u;
    {
        const bool branch_taken_0x122da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DA8u;
        // 0x122dac: 0x24a40003  addiu       $a0, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122da8) {
            ctx->pc = 0x122DB8u;
            return;
        }
    }
    ctx->pc = 0x122DB0u;
    // 0x122db0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x122db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122db4: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x122db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    ctx->pc = 0x122db8u;
}
