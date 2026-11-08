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

// Function: entry_0019d6b8
// Address: 0x19d6b8 - 0x19d6d0
void entry_0019d6b8_0x19d6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d6b8_0x19d6b8");
#endif

    ctx->pc = 0x19d6b8u;

    // 0x19d6b8: 0x8ea40670  lw          $a0, 0x670($s5)
    ctx->pc = 0x19d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19d6bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19d6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d6c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19d6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19d6c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19D6C8u;
    {
        const bool branch_taken_0x19d6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6C8u;
        // 0x19d6cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d6c8) {
            ctx->pc = 0x19D6F0u;
            return;
        }
    }
    ctx->pc = 0x19D6D0u;
}
