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

// Function: entry_001722a0
// Address: 0x1722a0 - 0x1722d0
void entry_001722a0_0x1722a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001722a0_0x1722a0");
#endif

    switch (ctx->pc) {
        case 0x1722c8u: goto label_1722c8;
        default: break;
    }

    ctx->pc = 0x1722a0u;

    // 0x1722a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1722A0u;
    {
        const bool branch_taken_0x1722a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722A0u;
        // 0x1722a4: 0x262200b8  addiu       $v0, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722a0) {
            ctx->pc = 0x1722D4u;
            return;
        }
    }
    ctx->pc = 0x1722A8u;
    // 0x1722a8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1722a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1722ac: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x1722acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x1722b0: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x1722b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x1722b4: 0x8e2400cc  lw          $a0, 0xCC($s1)
    ctx->pc = 0x1722b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x1722b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1722B8u;
    {
        const bool branch_taken_0x1722b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1722b8) {
            ctx->pc = 0x1722D0u;
            return;
        }
    }
    ctx->pc = 0x1722C0u;
    // 0x1722c0: 0xc04018c  jal         func_100630
    ctx->pc = 0x1722C0u;
    SET_GPR_U32(ctx, 31, 0x1722C8u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1722C0u, 0x1722C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1722C8u;
label_1722c8:
    // 0x1722c8: 0xae2000cc  sw          $zero, 0xCC($s1)
    ctx->pc = 0x1722c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
    // 0x1722cc: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x1722ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    ctx->pc = 0x1722d0u;
}
