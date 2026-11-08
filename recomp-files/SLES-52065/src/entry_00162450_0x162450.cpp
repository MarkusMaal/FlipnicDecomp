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

// Function: entry_00162450
// Address: 0x162450 - 0x162470
void entry_00162450_0x162450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162450_0x162450");
#endif

    switch (ctx->pc) {
        case 0x16246cu: goto label_16246c;
        default: break;
    }

    ctx->pc = 0x162450u;

    // 0x162450: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x162450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x162454: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x162454u;
    {
        const bool branch_taken_0x162454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162454) {
            ctx->pc = 0x162418u;
            return;
        }
    }
    ctx->pc = 0x16245Cu;
    // 0x16245c: 0x8e24033c  lw          $a0, 0x33C($s1)
    ctx->pc = 0x16245cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
    // 0x162460: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x162460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x162464: 0xc054f18  jal         func_153C60
    ctx->pc = 0x162464u;
    SET_GPR_U32(ctx, 31, 0x16246Cu);
    ctx->pc = 0x162468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162464u;
    // 0x162468: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153C60u, 0x162464u, 0x16246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16246Cu;
label_16246c:
    // 0x16246c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16246cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x162470u;
}
