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

// Function: entry_0018ff28
// Address: 0x18ff28 - 0x18ff50
void entry_0018ff28_0x18ff28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ff28_0x18ff28");
#endif

    ctx->pc = 0x18ff28u;

    // 0x18ff28: 0x8d240254  lw          $a0, 0x254($t1)
    ctx->pc = 0x18ff28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 596)));
    // 0x18ff2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ff30: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x18FF30u;
    {
        const bool branch_taken_0x18ff30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF30u;
        // 0x18ff34: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff30) {
            ctx->pc = 0x18FF84u;
            return;
        }
    }
    ctx->pc = 0x18FF38u;
    // 0x18ff38: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18FF38u;
    {
        const bool branch_taken_0x18ff38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ff38) {
            ctx->pc = 0x18FF6Cu;
            return;
        }
    }
    ctx->pc = 0x18FF40u;
    // 0x18ff40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FF40u;
    {
        const bool branch_taken_0x18ff40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff40) {
            ctx->pc = 0x18FF50u;
            return;
        }
    }
    ctx->pc = 0x18FF48u;
    // 0x18ff48: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18FF48u;
    {
        const bool branch_taken_0x18ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff48) {
            ctx->pc = 0x18FF84u;
            return;
        }
    }
    ctx->pc = 0x18FF50u;
}
