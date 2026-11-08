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

// Function: entry_0012eb4c
// Address: 0x12eb4c - 0x12eb84
void entry_0012eb4c_0x12eb4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eb4c_0x12eb4c");
#endif

    switch (ctx->pc) {
        case 0x12eb64u: goto label_12eb64;
        default: break;
    }

    ctx->pc = 0x12eb4cu;

    // 0x12eb4c: 0x0  nop
    ctx->pc = 0x12eb4cu;
    // NOP
    // 0x12eb50: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x12eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12eb54: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x12EB54u;
    {
        const bool branch_taken_0x12eb54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x12EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB54u;
        // 0x12eb58: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb54) {
            ctx->pc = 0x12EB84u;
            return;
        }
    }
    ctx->pc = 0x12EB5Cu;
    // 0x12eb5c: 0xc04baf4  jal         func_12EBD0
    ctx->pc = 0x12EB5Cu;
    SET_GPR_U32(ctx, 31, 0x12EB64u);
    ctx->pc = 0x12EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBD0u, 0x12EB5Cu, 0x12EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB64u;
label_12eb64:
    // 0x12eb64: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x12eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12eb68: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x12eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x12eb6c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x12eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x12eb70: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x12eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x12eb74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12eb78: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x12eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12eb7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12eb80: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x12eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x12eb84u;
}
