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

// Function: entry_001907a0
// Address: 0x1907a0 - 0x1907b8
void entry_001907a0_0x1907a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001907a0_0x1907a0");
#endif

    ctx->pc = 0x1907a0u;

    // 0x1907a0: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1907a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1907a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1907a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1907a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1907acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1907B0u;
    {
        const bool branch_taken_0x1907b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1907B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907B0u;
        // 0x1907b4: 0x246610c8  addiu       $a2, $v1, 0x10C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907b0) {
            ctx->pc = 0x1907FCu;
            return;
        }
    }
    ctx->pc = 0x1907B8u;
}
