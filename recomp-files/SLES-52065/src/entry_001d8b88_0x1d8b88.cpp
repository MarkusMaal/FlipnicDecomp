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

// Function: entry_001d8b88
// Address: 0x1d8b88 - 0x1d8bb0
void entry_001d8b88_0x1d8b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8b88_0x1d8b88");
#endif

    switch (ctx->pc) {
        case 0x1d8b98u: goto label_1d8b98;
        default: break;
    }

    ctx->pc = 0x1d8b88u;

    // 0x1d8b88: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1d8b88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1d8b8c: 0x26100548  addiu       $s0, $s0, 0x548
    ctx->pc = 0x1d8b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1352));
    // 0x1d8b90: 0xc0753e2  jal         func_1D4F88
    ctx->pc = 0x1D8B90u;
    SET_GPR_U32(ctx, 31, 0x1D8B98u);
    ctx->pc = 0x1D8B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B90u;
    // 0x1d8b94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F88u, 0x1D8B90u, 0x1D8B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B98u;
label_1d8b98:
    // 0x1d8b98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8b9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8ba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ba4: 0x807566a  j           func_1D59A8
    ctx->pc = 0x1D8BA4u;
    ctx->pc = 0x1D8BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BA4u;
    // 0x1d8ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59A8u;
    FUN_001d59a8_0x1d59a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8BACu;
    // 0x1d8bac: 0x0  nop
    ctx->pc = 0x1d8bacu;
    // NOP
    ctx->pc = 0x1d8bb0u;
}
