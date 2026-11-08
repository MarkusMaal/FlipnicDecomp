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

// Function: entry_001d8b60
// Address: 0x1d8b60 - 0x1d8b88
void entry_001d8b60_0x1d8b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8b60_0x1d8b60");
#endif

    switch (ctx->pc) {
        case 0x1d8b70u: goto label_1d8b70;
        default: break;
    }

    ctx->pc = 0x1d8b60u;

    // 0x1d8b60: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1d8b60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1d8b64: 0x26100548  addiu       $s0, $s0, 0x548
    ctx->pc = 0x1d8b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1352));
    // 0x1d8b68: 0xc0753be  jal         func_1D4EF8
    ctx->pc = 0x1D8B68u;
    SET_GPR_U32(ctx, 31, 0x1D8B70u);
    ctx->pc = 0x1D8B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B68u;
    // 0x1d8b6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4EF8u, 0x1D8B68u, 0x1D8B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B70u;
label_1d8b70:
    // 0x1d8b70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8b74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8b7c: 0x807566a  j           func_1D59A8
    ctx->pc = 0x1D8B7Cu;
    ctx->pc = 0x1D8B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B7Cu;
    // 0x1d8b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59A8u;
    FUN_001d59a8_0x1d59a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8B84u;
    // 0x1d8b84: 0x0  nop
    ctx->pc = 0x1d8b84u;
    // NOP
    ctx->pc = 0x1d8b88u;
}
