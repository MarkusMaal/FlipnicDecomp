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

// Function: caseD_19
// Address: 0x1c2964 - 0x1c2990
void caseD_19_0x1c2964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x1c2964");
#endif

    ctx->pc = 0x1c2964u;

    // 0x1c2964: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2968: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c296c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C296Cu;
    {
        const bool branch_taken_0x1c296c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c296c) {
            ctx->pc = 0x1C2994u;
            return;
        }
    }
    ctx->pc = 0x1C2974u;
    // 0x1c2974: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1c2974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1c2978: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x1c2978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x1c297c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C297Cu;
    {
        const bool branch_taken_0x1c297c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C297Cu;
        // 0x1c2980: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c297c) {
            ctx->pc = 0x1C2990u;
            return;
        }
    }
    ctx->pc = 0x1C2984u;
    // 0x1c2984: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c2984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c2988: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2988u;
    {
        const bool branch_taken_0x1c2988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2988u;
        // 0x1c298c: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2988) {
            ctx->pc = 0x1C2994u;
            return;
        }
    }
    ctx->pc = 0x1C2990u;
}
