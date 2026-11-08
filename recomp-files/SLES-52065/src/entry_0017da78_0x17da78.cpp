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

// Function: entry_0017da78
// Address: 0x17da78 - 0x17dab4
void entry_0017da78_0x17da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017da78_0x17da78");
#endif

    switch (ctx->pc) {
        case 0x17da94u: goto label_17da94;
        case 0x17dab0u: goto label_17dab0;
        default: break;
    }

    ctx->pc = 0x17da78u;

    // 0x17da78: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x17da7c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17da7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17da80: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17da84: 0x24a5f900  addiu       $a1, $a1, -0x700
    ctx->pc = 0x17da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965504));
    // 0x17da88: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17da88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17da8c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x17DA8Cu;
    SET_GPR_U32(ctx, 31, 0x17DA94u);
    ctx->pc = 0x17DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA8Cu;
    // 0x17da90: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DA8Cu, 0x17DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA94u;
label_17da94:
    // 0x17da94: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17da94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x17da98: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17da98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17da9c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x17da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x17daa0: 0x24a5f900  addiu       $a1, $a1, -0x700
    ctx->pc = 0x17daa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965504));
    // 0x17daa4: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17daa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17daa8: 0xc0805c8  jal         func_201720
    ctx->pc = 0x17DAA8u;
    SET_GPR_U32(ctx, 31, 0x17DAB0u);
    ctx->pc = 0x17DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DAA8u;
    // 0x17daac: 0x27a70350  addiu       $a3, $sp, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DAA8u, 0x17DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DAB0u;
label_17dab0:
    // 0x17dab0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17dab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x17dab4u;
}
