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
// Address: 0x195c10 - 0x195c38
void caseD_f_0x195c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x195c10");
#endif

    switch (ctx->pc) {
        case 0x195c24u: goto label_195c24;
        case 0x195c30u: goto label_195c30;
        default: break;
    }

    ctx->pc = 0x195c10u;

    // 0x195c10: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x195c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x195c14: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x195C14u;
    {
        const bool branch_taken_0x195c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c14) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195C1Cu;
    // 0x195c1c: 0xc047a50  jal         func_11E940
    ctx->pc = 0x195C1Cu;
    SET_GPR_U32(ctx, 31, 0x195C24u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x195C1Cu, 0x195C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C24u;
label_195c24:
    // 0x195c24: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x195c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x195c28: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x195C28u;
    SET_GPR_U32(ctx, 31, 0x195C30u);
    ctx->pc = 0x195C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C28u;
    // 0x195c2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x195C28u, 0x195C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C30u;
label_195c30:
    // 0x195c30: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x195C30u;
    {
        const bool branch_taken_0x195c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C30u;
        // 0x195c34: 0xaf8086fc  sw          $zero, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c30) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195C38u;
}
