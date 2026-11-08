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

// Function: entry_0011ab14
// Address: 0x11ab14 - 0x11ab34
void entry_0011ab14_0x11ab14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ab14_0x11ab14");
#endif

    switch (ctx->pc) {
        case 0x11ab1cu: goto label_11ab1c;
        case 0x11ab28u: goto label_11ab28;
        default: break;
    }

    ctx->pc = 0x11ab14u;

    // 0x11ab14: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AB14u;
    SET_GPR_U32(ctx, 31, 0x11AB1Cu);
    ctx->pc = 0x11AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB14u;
    // 0x11ab18: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AB14u, 0x11AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB1Cu;
label_11ab1c:
    // 0x11ab1c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x11ab1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11ab20: 0xc080664  jal         func_201990
    ctx->pc = 0x11AB20u;
    SET_GPR_U32(ctx, 31, 0x11AB28u);
    ctx->pc = 0x11AB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB20u;
    // 0x11ab24: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AB20u, 0x11AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB28u;
label_11ab28:
    // 0x11ab28: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x11ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x11ab2c: 0xc080664  jal         func_201990
    ctx->pc = 0x11AB2Cu;
    SET_GPR_U32(ctx, 31, 0x11AB34u);
    ctx->pc = 0x11AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB2Cu;
    // 0x11ab30: 0x27a50318  addiu       $a1, $sp, 0x318 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AB2Cu, 0x11AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB34u;
}
