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

// Function: entry_00106f0c
// Address: 0x106f0c - 0x106f34
void entry_00106f0c_0x106f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106f0c_0x106f0c");
#endif

    ctx->pc = 0x106f0cu;

    // 0x106f0c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x106F0Cu;
    {
        const bool branch_taken_0x106f0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F0Cu;
        // 0x106f10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f0c) {
            ctx->pc = 0x106F48u;
            return;
        }
    }
    ctx->pc = 0x106F14u;
    // 0x106f14: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106f18: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x106f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
    // 0x106f1c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x106f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x106f20: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x106f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x106f24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106F24u;
    {
        const bool branch_taken_0x106f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106f24) {
            ctx->pc = 0x106F34u;
            return;
        }
    }
    ctx->pc = 0x106F2Cu;
    // 0x106f2c: 0xc04018c  jal         func_100630
    ctx->pc = 0x106F2Cu;
    SET_GPR_U32(ctx, 31, 0x106F34u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x106F2Cu, 0x106F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106F34u;
}
