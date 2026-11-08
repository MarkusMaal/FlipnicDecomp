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

// Function: entry_00205dc8
// Address: 0x205dc8 - 0x205df0
void entry_00205dc8_0x205dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205dc8_0x205dc8");
#endif

    ctx->pc = 0x205dc8u;

    // 0x205dc8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x205dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x205dcc: 0x1102000e  beq         $t0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x205DCCu;
    {
        const bool branch_taken_0x205dcc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x205DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DCCu;
        // 0x205dd0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205dcc) {
            ctx->pc = 0x205E08u;
            return;
        }
    }
    ctx->pc = 0x205DD4u;
    // 0x205dd4: 0x2902002e  slti        $v0, $t0, 0x2E
    ctx->pc = 0x205dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x205dd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205DD8u;
    {
        const bool branch_taken_0x205dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DD8u;
        // 0x205ddc: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205dd8) {
            ctx->pc = 0x205DF0u;
            return;
        }
    }
    ctx->pc = 0x205DE0u;
    // 0x205de0: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205DE0u;
    {
        const bool branch_taken_0x205de0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DE0u;
        // 0x205de4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205de0) {
            ctx->pc = 0x205E00u;
            return;
        }
    }
    ctx->pc = 0x205DE8u;
    // 0x205de8: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x205DE8u;
    {
        const bool branch_taken_0x205de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DE8u;
        // 0x205dec: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205de8) {
            ctx->pc = 0x205DBCu;
            return;
        }
    }
    ctx->pc = 0x205DF0u;
}
