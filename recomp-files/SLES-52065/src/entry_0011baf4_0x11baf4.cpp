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

// Function: entry_0011baf4
// Address: 0x11baf4 - 0x11bb20
void entry_0011baf4_0x11baf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011baf4_0x11baf4");
#endif

    switch (ctx->pc) {
        case 0x11bafcu: goto label_11bafc;
        default: break;
    }

    ctx->pc = 0x11baf4u;

    // 0x11baf4: 0xc07bdf0  jal         func_1EF7C0
    ctx->pc = 0x11BAF4u;
    SET_GPR_U32(ctx, 31, 0x11BAFCu);
    ctx->pc = 0x11BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAF4u;
    // 0x11baf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7C0u, 0x11BAF4u, 0x11BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAFCu;
label_11bafc:
    // 0x11bafc: 0xae020530  sw          $v0, 0x530($s0)
    ctx->pc = 0x11bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 2));
    // 0x11bb00: 0x8e030530  lw          $v1, 0x530($s0)
    ctx->pc = 0x11bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x11bb04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x11bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x11bb08: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x11bb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x11bb0c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BB0Cu;
    {
        const bool branch_taken_0x11bb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11bb0c) {
            ctx->pc = 0x11BB20u;
            return;
        }
    }
    ctx->pc = 0x11BB14u;
    // 0x11bb14: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x11bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x11bb18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BB18u;
    {
        const bool branch_taken_0x11bb18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11bb18) {
            ctx->pc = 0x11BB28u;
            return;
        }
    }
    ctx->pc = 0x11BB20u;
}
