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

// Function: entry_001bcb68
// Address: 0x1bcb68 - 0x1bcb8c
void entry_001bcb68_0x1bcb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcb68_0x1bcb68");
#endif

    switch (ctx->pc) {
        case 0x1bcb78u: goto label_1bcb78;
        default: break;
    }

    ctx->pc = 0x1bcb68u;

    // 0x1bcb68: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1bcb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bcb6c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bcb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bcb70: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1BCB70u;
    SET_GPR_U32(ctx, 31, 0x1BCB78u);
    ctx->pc = 0x1BCB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB70u;
    // 0x1bcb74: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1BCB70u, 0x1BCB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB78u;
label_1bcb78:
    // 0x1bcb78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCB78u;
    {
        const bool branch_taken_0x1bcb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcb78) {
            ctx->pc = 0x1BCB8Cu;
            return;
        }
    }
    ctx->pc = 0x1BCB80u;
    // 0x1bcb80: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1bcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bcb84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bcb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bcb88: 0xaea20080  sw          $v0, 0x80($s5)
    ctx->pc = 0x1bcb88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
    ctx->pc = 0x1bcb8cu;
}
