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

// Function: entry_001e5ec0
// Address: 0x1e5ec0 - 0x1e5ee4
void entry_001e5ec0_0x1e5ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5ec0_0x1e5ec0");
#endif

    switch (ctx->pc) {
        case 0x1e5eccu: goto label_1e5ecc;
        default: break;
    }

    ctx->pc = 0x1e5ec0u;

    // 0x1e5ec0: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x1e5ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1e5ec4: 0xc04839c  jal         func_120E70
    ctx->pc = 0x1E5EC4u;
    SET_GPR_U32(ctx, 31, 0x1E5ECCu);
    ctx->pc = 0x1E5EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5EC4u;
    // 0x1e5ec8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E70u, 0x1E5EC4u, 0x1E5ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5ECCu;
label_1e5ecc:
    // 0x1e5ecc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5ed0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e5ed4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e5ed8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5edc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5ee0: 0x0  nop
    ctx->pc = 0x1e5ee0u;
    // NOP
    ctx->pc = 0x1e5ee4u;
}
