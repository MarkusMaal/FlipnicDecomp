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

// Function: entry_0010b7ac
// Address: 0x10b7ac - 0x10b7d4
void entry_0010b7ac_0x10b7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b7ac_0x10b7ac");
#endif

    switch (ctx->pc) {
        case 0x10b7ccu: goto label_10b7cc;
        default: break;
    }

    ctx->pc = 0x10b7acu;

    // 0x10b7ac: 0x8e03231c  lw          $v1, 0x231C($s0)
    ctx->pc = 0x10b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
    // 0x10b7b0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x10b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x10b7b4: 0xa46201ea  sh          $v0, 0x1EA($v1)
    ctx->pc = 0x10b7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 490), (uint16_t)GPR_U32(ctx, 2));
    // 0x10b7b8: 0x8e02231c  lw          $v0, 0x231C($s0)
    ctx->pc = 0x10b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
    // 0x10b7bc: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x10b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
    // 0x10b7c0: 0xac400280  sw          $zero, 0x280($v0)
    ctx->pc = 0x10b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 0));
    // 0x10b7c4: 0xc055c40  jal         func_157100
    ctx->pc = 0x10B7C4u;
    SET_GPR_U32(ctx, 31, 0x10B7CCu);
    ctx->pc = 0x10B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B7C4u;
    // 0x10b7c8: 0x8e04231c  lw          $a0, 0x231C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x10B7C4u, 0x10B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7CCu;
label_10b7cc:
    // 0x10b7cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10B7CCu;
    {
        const bool branch_taken_0x10b7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7CCu;
        // 0x10b7d0: 0xae00231c  sw          $zero, 0x231C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7cc) {
            ctx->pc = 0x10B814u;
            return;
        }
    }
    ctx->pc = 0x10B7D4u;
}
