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

// Function: caseD_15
// Address: 0x1c289c - 0x1c28c8
void caseD_15_0x1c289c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x1c289c");
#endif

    ctx->pc = 0x1c289cu;

    // 0x1c289c: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c289cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c28a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c28a4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C28A4u;
    {
        const bool branch_taken_0x1c28a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c28a4) {
            ctx->pc = 0x1C28CCu;
            return;
        }
    }
    ctx->pc = 0x1C28ACu;
    // 0x1c28ac: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1c28acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1c28b0: 0x24022780  addiu       $v0, $zero, 0x2780
    ctx->pc = 0x1c28b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    // 0x1c28b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C28B4u;
    {
        const bool branch_taken_0x1c28b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28B4u;
        // 0x1c28b8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28b4) {
            ctx->pc = 0x1C28C8u;
            return;
        }
    }
    ctx->pc = 0x1C28BCu;
    // 0x1c28bc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1c28bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1c28c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C28C0u;
    {
        const bool branch_taken_0x1c28c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28C0u;
        // 0x1c28c4: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28c0) {
            ctx->pc = 0x1C28CCu;
            return;
        }
    }
    ctx->pc = 0x1C28C8u;
}
