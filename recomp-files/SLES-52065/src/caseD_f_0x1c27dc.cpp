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

// Function: caseD_f
// Address: 0x1c27dc - 0x1c27f8
void caseD_f_0x1c27dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1c27dc");
#endif

    ctx->pc = 0x1c27dcu;

    // 0x1c27dc: 0x8e2301e8  lw          $v1, 0x1E8($s1)
    ctx->pc = 0x1c27dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1c27e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c27e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C27E4u;
    {
        const bool branch_taken_0x1c27e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C27E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27E4u;
        // 0x1c27e8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27e4) {
            ctx->pc = 0x1C27F8u;
            return;
        }
    }
    ctx->pc = 0x1C27ECu;
    // 0x1c27ec: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1c27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c27f0: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x1C27F0u;
    {
        const bool branch_taken_0x1c27f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C27F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27F0u;
        // 0x1c27f4: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27f0) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C27F8u;
}
