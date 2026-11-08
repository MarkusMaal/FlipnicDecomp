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

// Function: entry_0010ebd0
// Address: 0x10ebd0 - 0x10ebec
void entry_0010ebd0_0x10ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ebd0_0x10ebd0");
#endif

    ctx->pc = 0x10ebd0u;

    // 0x10ebd0: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x10ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x10ebd4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x10ebd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10ebd8: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10EBD8u;
    {
        const bool branch_taken_0x10ebd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ebd8) {
            ctx->pc = 0x10EB94u;
            return;
        }
    }
    ctx->pc = 0x10EBE0u;
    // 0x10ebe0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10ebe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebe4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10EBE4u;
    {
        const bool branch_taken_0x10ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBE4u;
        // 0x10ebe8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebe4) {
            ctx->pc = 0x10EC20u;
            return;
        }
    }
    ctx->pc = 0x10EBECu;
}
