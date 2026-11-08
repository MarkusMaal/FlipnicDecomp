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

// Function: entry_001d9088
// Address: 0x1d9088 - 0x1d90b4
void entry_001d9088_0x1d9088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9088_0x1d9088");
#endif

    switch (ctx->pc) {
        case 0x1d9090u: goto label_1d9090;
        default: break;
    }

    ctx->pc = 0x1d9088u;

    // 0x1d9088: 0xc0764ea  jal         func_1D93A8
    ctx->pc = 0x1D9088u;
    SET_GPR_U32(ctx, 31, 0x1D9090u);
    ctx->pc = 0x1D908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9088u;
    // 0x1d908c: 0x8fa40180  lw          $a0, 0x180($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D93A8u, 0x1D9088u, 0x1D9090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9090u;
label_1d9090:
    // 0x1d9090: 0x260566c0  addiu       $a1, $s0, 0x66C0
    ctx->pc = 0x1d9090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26304));
    // 0x1d9094: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9098: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d9098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d909c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d909cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d90a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d90a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d90a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d90ac: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x1d90acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x1d90b0: 0xdfb00190  ld          $s0, 0x190($sp)
    ctx->pc = 0x1d90b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    ctx->pc = 0x1d90b4u;
}
