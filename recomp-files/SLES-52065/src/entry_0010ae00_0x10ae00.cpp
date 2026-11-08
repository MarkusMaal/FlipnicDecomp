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

// Function: entry_0010ae00
// Address: 0x10ae00 - 0x10ae34
void entry_0010ae00_0x10ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ae00_0x10ae00");
#endif

    ctx->pc = 0x10ae00u;

    // 0x10ae00: 0xae022318  sw          $v0, 0x2318($s0)
    ctx->pc = 0x10ae00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8984), GPR_U32(ctx, 2));
    // 0x10ae04: 0x8e022318  lw          $v0, 0x2318($s0)
    ctx->pc = 0x10ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8984)));
    // 0x10ae08: 0xae022314  sw          $v0, 0x2314($s0)
    ctx->pc = 0x10ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 2));
    // 0x10ae0c: 0xae00231c  sw          $zero, 0x231C($s0)
    ctx->pc = 0x10ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8988), GPR_U32(ctx, 0));
    // 0x10ae10: 0xae0043e0  sw          $zero, 0x43E0($s0)
    ctx->pc = 0x10ae10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17376), GPR_U32(ctx, 0));
    // 0x10ae14: 0x8e0543d8  lw          $a1, 0x43D8($s0)
    ctx->pc = 0x10ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17368)));
    // 0x10ae18: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10AE18u;
    {
        const bool branch_taken_0x10ae18 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10ae18) {
            ctx->pc = 0x10AE34u;
            return;
        }
    }
    ctx->pc = 0x10AE20u;
    // 0x10ae20: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
    // 0x10ae24: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10ae28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10ae2c: 0xc046744  jal         func_119D10
    ctx->pc = 0x10AE2Cu;
    SET_GPR_U32(ctx, 31, 0x10AE34u);
    ctx->pc = 0x10AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE2Cu;
    // 0x10ae30: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10AE2Cu, 0x10AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE34u;
}
