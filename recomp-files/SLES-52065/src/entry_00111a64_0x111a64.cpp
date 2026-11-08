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

// Function: entry_00111a64
// Address: 0x111a64 - 0x111a8c
void entry_00111a64_0x111a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111a64_0x111a64");
#endif

    ctx->pc = 0x111a64u;

    // 0x111a64: 0x0  nop
    ctx->pc = 0x111a64u;
    // NOP
    // 0x111a68: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x111a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x111a6c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x111a6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111a70: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x111A70u;
    {
        const bool branch_taken_0x111a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111a70) {
            ctx->pc = 0x111A30u;
            return;
        }
    }
    ctx->pc = 0x111A78u;
    // 0x111a78: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x111a78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111a7c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x111a7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x111a80: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x111A80u;
    {
        const bool branch_taken_0x111a80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A80u;
        // 0x111a84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a80) {
            ctx->pc = 0x111AD0u;
            return;
        }
    }
    ctx->pc = 0x111A88u;
    // 0x111a88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x111a88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111a8cu;
}
