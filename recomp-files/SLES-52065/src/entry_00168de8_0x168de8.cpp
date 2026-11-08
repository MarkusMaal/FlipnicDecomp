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

// Function: entry_00168de8
// Address: 0x168de8 - 0x168e08
void entry_00168de8_0x168de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168de8_0x168de8");
#endif

    ctx->pc = 0x168de8u;

    // 0x168de8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x168DE8u;
    {
        const bool branch_taken_0x168de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168de8) {
            ctx->pc = 0x168E08u;
            return;
        }
    }
    ctx->pc = 0x168DF0u;
    // 0x168df0: 0x8c8501d4  lw          $a1, 0x1D4($a0)
    ctx->pc = 0x168df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x168df4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x168df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168df8: 0x14a3003d  bne         $a1, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x168DF8u;
    {
        const bool branch_taken_0x168df8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x168DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DF8u;
        // 0x168dfc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168df8) {
            ctx->pc = 0x168EF0u;
            return;
        }
    }
    ctx->pc = 0x168E00u;
    // 0x168e00: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x168E00u;
    {
        const bool branch_taken_0x168e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E00u;
        // 0x168e04: 0xac8301d4  sw          $v1, 0x1D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e00) {
            ctx->pc = 0x168EF0u;
            return;
        }
    }
    ctx->pc = 0x168E08u;
}
