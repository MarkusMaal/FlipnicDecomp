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

// Function: entry_001b28d4
// Address: 0x1b28d4 - 0x1b28f8
void entry_001b28d4_0x1b28d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b28d4_0x1b28d4");
#endif

    ctx->pc = 0x1b28d4u;

    // 0x1b28d4: 0x0  nop
    ctx->pc = 0x1b28d4u;
    // NOP
    // 0x1b28d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b28d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b28dc: 0x1880fff8  blez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B28DCu;
    {
        const bool branch_taken_0x1b28dc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28DCu;
        // 0x1b28e0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b28dc) {
            ctx->pc = 0x1B28C0u;
            return;
        }
    }
    ctx->pc = 0x1B28E4u;
    // 0x1b28e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b28e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b28e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28ec: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x1b28ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1b28f0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1b28f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b28f4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1b28f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->pc = 0x1b28f8u;
}
