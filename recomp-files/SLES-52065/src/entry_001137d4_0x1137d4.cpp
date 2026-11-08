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

// Function: entry_001137d4
// Address: 0x1137d4 - 0x1137fc
void entry_001137d4_0x1137d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001137d4_0x1137d4");
#endif

    ctx->pc = 0x1137d4u;

    // 0x1137d4: 0x0  nop
    ctx->pc = 0x1137d4u;
    // NOP
    // 0x1137d8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1137d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1137dc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1137dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1137e0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1137E0u;
    {
        const bool branch_taken_0x1137e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1137e0) {
            ctx->pc = 0x1137A0u;
            return;
        }
    }
    ctx->pc = 0x1137E8u;
    // 0x1137e8: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1137e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1137ec: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1137ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1137f0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1137F0u;
    {
        const bool branch_taken_0x1137f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1137F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137F0u;
        // 0x1137f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137f0) {
            ctx->pc = 0x113840u;
            return;
        }
    }
    ctx->pc = 0x1137F8u;
    // 0x1137f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1137f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1137fcu;
}
