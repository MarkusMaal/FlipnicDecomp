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

// Function: entry_00149a78
// Address: 0x149a78 - 0x149a9c
void entry_00149a78_0x149a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149a78_0x149a78");
#endif

    switch (ctx->pc) {
        case 0x149a8cu: goto label_149a8c;
        default: break;
    }

    ctx->pc = 0x149a78u;

    // 0x149a78: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x149a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x149a7c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149A7Cu;
    {
        const bool branch_taken_0x149a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A7Cu;
        // 0x149a80: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a7c) {
            ctx->pc = 0x149A9Cu;
            return;
        }
    }
    ctx->pc = 0x149A84u;
    // 0x149a84: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x149A84u;
    SET_GPR_U32(ctx, 31, 0x149A8Cu);
    ctx->pc = 0x149A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A84u;
    // 0x149a88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x149A84u, 0x149A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A8Cu;
label_149a8c:
    // 0x149a8c: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x149a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x149a90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149a94: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x149A94u;
    SET_GPR_U32(ctx, 31, 0x149A9Cu);
    ctx->pc = 0x149A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A94u;
    // 0x149a98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x149A94u, 0x149A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A9Cu;
}
