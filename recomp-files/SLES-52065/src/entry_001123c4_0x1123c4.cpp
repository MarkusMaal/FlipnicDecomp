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

// Function: entry_001123c4
// Address: 0x1123c4 - 0x1123e8
void entry_001123c4_0x1123c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001123c4_0x1123c4");
#endif

    ctx->pc = 0x1123c4u;

    // 0x1123c4: 0x0  nop
    ctx->pc = 0x1123c4u;
    // NOP
    // 0x1123c8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1123c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1123cc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1123ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1123d0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1123D0u;
    {
        const bool branch_taken_0x1123d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1123d0) {
            ctx->pc = 0x112390u;
            return;
        }
    }
    ctx->pc = 0x1123D8u;
    // 0x1123d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1123d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1123dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1123dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1123e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1123E0u;
    {
        const bool branch_taken_0x1123e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123E0u;
        // 0x1123e4: 0x2404ffdf  addiu       $a0, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123e0) {
            ctx->pc = 0x112418u;
            return;
        }
    }
    ctx->pc = 0x1123E8u;
}
