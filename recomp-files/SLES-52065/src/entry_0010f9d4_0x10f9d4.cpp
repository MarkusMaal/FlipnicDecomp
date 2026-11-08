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

// Function: entry_0010f9d4
// Address: 0x10f9d4 - 0x10f9f0
void entry_0010f9d4_0x10f9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f9d4_0x10f9d4");
#endif

    ctx->pc = 0x10f9d4u;

    // 0x10f9d4: 0x0  nop
    ctx->pc = 0x10f9d4u;
    // NOP
    // 0x10f9d8: 0x8e510038  lw          $s1, 0x38($s2)
    ctx->pc = 0x10f9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x10f9dc: 0x151182a  slt         $v1, $t2, $s1
    ctx->pc = 0x10f9dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x10f9e0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x10F9E0u;
    {
        const bool branch_taken_0x10f9e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9E0u;
        // 0x10f9e4: 0x118040  sll         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f9e0) {
            ctx->pc = 0x10F9A8u;
            return;
        }
    }
    ctx->pc = 0x10F9E8u;
    // 0x10f9e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10F9E8u;
    {
        const bool branch_taken_0x10f9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f9e8) {
            ctx->pc = 0x10FA24u;
            return;
        }
    }
    ctx->pc = 0x10F9F0u;
}
