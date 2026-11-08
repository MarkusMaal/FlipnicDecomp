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

// Function: entry_00112b04
// Address: 0x112b04 - 0x112b24
void entry_00112b04_0x112b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112b04_0x112b04");
#endif

    ctx->pc = 0x112b04u;

    // 0x112b04: 0x0  nop
    ctx->pc = 0x112b04u;
    // NOP
    // 0x112b08: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x112b0c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x112b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112b10: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x112B10u;
    {
        const bool branch_taken_0x112b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B10u;
        // 0x112b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b10) {
            ctx->pc = 0x112AD4u;
            return;
        }
    }
    ctx->pc = 0x112B18u;
    // 0x112b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b1c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x112B1Cu;
    {
        const bool branch_taken_0x112b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B1Cu;
        // 0x112b20: 0x2403ff7f  addiu       $v1, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b1c) {
            ctx->pc = 0x112B68u;
            return;
        }
    }
    ctx->pc = 0x112B24u;
}
