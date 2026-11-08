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

// Function: entry_00192520
// Address: 0x192520 - 0x19253c
void entry_00192520_0x192520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192520_0x192520");
#endif

    switch (ctx->pc) {
        case 0x192538u: goto label_192538;
        default: break;
    }

    ctx->pc = 0x192520u;

    // 0x192520: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192524: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x192524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x192528: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x192528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x19252c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x19252cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x192530: 0xc063f40  jal         func_18FD00
    ctx->pc = 0x192530u;
    SET_GPR_U32(ctx, 31, 0x192538u);
    ctx->pc = 0x192534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192530u;
    // 0x192534: 0x24640210  addiu       $a0, $v1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD00u, 0x192530u, 0x192538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192538u;
label_192538:
    // 0x192538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19253cu;
}
