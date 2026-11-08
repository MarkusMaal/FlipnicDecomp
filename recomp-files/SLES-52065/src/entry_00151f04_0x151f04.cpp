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

// Function: entry_00151f04
// Address: 0x151f04 - 0x151f24
void entry_00151f04_0x151f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151f04_0x151f04");
#endif

    ctx->pc = 0x151f04u;

    // 0x151f04: 0x0  nop
    ctx->pc = 0x151f04u;
    // NOP
    // 0x151f08: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x151f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x151f0c: 0x8c632c20  lw          $v1, 0x2C20($v1)
    ctx->pc = 0x151f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11296)));
    // 0x151f10: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x151f10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x151f14: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x151F14u;
    {
        const bool branch_taken_0x151f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151f14) {
            ctx->pc = 0x151EBCu;
            return;
        }
    }
    ctx->pc = 0x151F1Cu;
    // 0x151f1c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x151F1Cu;
    {
        const bool branch_taken_0x151f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F1Cu;
        // 0x151f20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f1c) {
            ctx->pc = 0x15200Cu;
            return;
        }
    }
    ctx->pc = 0x151F24u;
}
