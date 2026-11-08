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

// Function: entry_0017e72c
// Address: 0x17e72c - 0x17e750
void entry_0017e72c_0x17e72c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e72c_0x17e72c");
#endif

    ctx->pc = 0x17e72cu;

    // 0x17e72c: 0x1223001c  beq         $s1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x17E72Cu;
    {
        const bool branch_taken_0x17e72c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e72c) {
            ctx->pc = 0x17E7A0u;
            return;
        }
    }
    ctx->pc = 0x17E734u;
    // 0x17e734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e738: 0x1223000f  beq         $s1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x17E738u;
    {
        const bool branch_taken_0x17e738 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e738) {
            ctx->pc = 0x17E778u;
            return;
        }
    }
    ctx->pc = 0x17E740u;
    // 0x17e740: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E740u;
    {
        const bool branch_taken_0x17e740 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e740) {
            ctx->pc = 0x17E750u;
            return;
        }
    }
    ctx->pc = 0x17E748u;
    // 0x17e748: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x17E748u;
    {
        const bool branch_taken_0x17e748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E748u;
        // 0x17e74c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e748) {
            ctx->pc = 0x17E7E4u;
            return;
        }
    }
    ctx->pc = 0x17E750u;
}
