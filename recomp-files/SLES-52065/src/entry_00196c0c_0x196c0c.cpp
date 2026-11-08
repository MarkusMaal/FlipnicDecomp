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

// Function: entry_00196c0c
// Address: 0x196c0c - 0x196c30
void entry_00196c0c_0x196c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196c0c_0x196c0c");
#endif

    ctx->pc = 0x196c0cu;

    // 0x196c0c: 0x0  nop
    ctx->pc = 0x196c0cu;
    // NOP
    // 0x196c10: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x196c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x196c14: 0x11240006  beq         $t1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196C14u;
    {
        const bool branch_taken_0x196c14 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x196c14) {
            ctx->pc = 0x196C30u;
            return;
        }
    }
    ctx->pc = 0x196C1Cu;
    // 0x196c1c: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x196c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x196c20: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x196c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x196c24: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x196c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196c28: 0x14800041  bnez        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x196C28u;
    {
        const bool branch_taken_0x196c28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x196c28) {
            ctx->pc = 0x196D30u;
            return;
        }
    }
    ctx->pc = 0x196C30u;
}
