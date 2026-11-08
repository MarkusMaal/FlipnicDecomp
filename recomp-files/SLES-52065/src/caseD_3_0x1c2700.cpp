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

// Function: caseD_3
// Address: 0x1c2700 - 0x1c2718
void caseD_3_0x1c2700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1c2700");
#endif

    ctx->pc = 0x1c2700u;

    // 0x1c2700: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x1c2700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1c2704: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2708: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2708u;
    {
        const bool branch_taken_0x1c2708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2708u;
        // 0x1c270c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2708) {
            ctx->pc = 0x1C2718u;
            return;
        }
    }
    ctx->pc = 0x1C2710u;
    // 0x1c2710: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x1C2710u;
    {
        const bool branch_taken_0x1c2710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2710u;
        // 0x1c2714: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2710) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2718u;
}
