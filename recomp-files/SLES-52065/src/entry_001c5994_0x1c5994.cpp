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

// Function: entry_001c5994
// Address: 0x1c5994 - 0x1c59ac
void entry_001c5994_0x1c5994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5994_0x1c5994");
#endif

    ctx->pc = 0x1c5994u;

    // 0x1c5994: 0x8e910014  lw          $s1, 0x14($s4)
    ctx->pc = 0x1c5994u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1c5998: 0x26900014  addiu       $s0, $s4, 0x14
    ctx->pc = 0x1c5998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x1c599c: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1c599cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1c59a0: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C59A0u;
    {
        const bool branch_taken_0x1c59a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59A0u;
        // 0x1c59a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59a0) {
            ctx->pc = 0x1C5A78u;
            return;
        }
    }
    ctx->pc = 0x1C59A8u;
    // 0x1c59a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c59a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c59acu;
}
