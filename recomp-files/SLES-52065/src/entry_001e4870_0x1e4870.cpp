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

// Function: entry_001e4870
// Address: 0x1e4870 - 0x1e4894
void entry_001e4870_0x1e4870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4870_0x1e4870");
#endif

    ctx->pc = 0x1e4870u;

    // 0x1e4870: 0x1202001a  beq         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E4870u;
    {
        const bool branch_taken_0x1e4870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4870u;
        // 0x1e4874: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4870) {
            ctx->pc = 0x1E48DCu;
            return;
        }
    }
    ctx->pc = 0x1E4878u;
    // 0x1e4878: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E4878u;
    {
        const bool branch_taken_0x1e4878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4878) {
            ctx->pc = 0x1E489Cu;
            return;
        }
    }
    ctx->pc = 0x1E4880u;
    // 0x1e4880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4884: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4884u;
    {
        const bool branch_taken_0x1e4884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4884) {
            ctx->pc = 0x1E4894u;
            return;
        }
    }
    ctx->pc = 0x1E488Cu;
    // 0x1e488c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E488Cu;
    {
        const bool branch_taken_0x1e488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E488Cu;
        // 0x1e4890: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e488c) {
            ctx->pc = 0x1E48E4u;
            return;
        }
    }
    ctx->pc = 0x1E4894u;
}
