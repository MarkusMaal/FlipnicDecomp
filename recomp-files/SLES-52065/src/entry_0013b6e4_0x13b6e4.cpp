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

// Function: entry_0013b6e4
// Address: 0x13b6e4 - 0x13b71c
void entry_0013b6e4_0x13b6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b6e4_0x13b6e4");
#endif

    switch (ctx->pc) {
        case 0x13b6fcu: goto label_13b6fc;
        default: break;
    }

    ctx->pc = 0x13b6e4u;

    // 0x13b6e4: 0x0  nop
    ctx->pc = 0x13b6e4u;
    // NOP
    // 0x13b6e8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13b6ec: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x13B6ECu;
    {
        const bool branch_taken_0x13b6ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x13B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6ECu;
        // 0x13b6f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6ec) {
            ctx->pc = 0x13B71Cu;
            return;
        }
    }
    ctx->pc = 0x13B6F4u;
    // 0x13b6f4: 0xc04eddc  jal         func_13B770
    ctx->pc = 0x13B6F4u;
    SET_GPR_U32(ctx, 31, 0x13B6FCu);
    ctx->pc = 0x13B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B770u, 0x13B6F4u, 0x13B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6FCu;
label_13b6fc:
    // 0x13b6fc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x13b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13b700: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x13b700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13b704: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x13b704u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x13b708: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x13b708u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x13b70c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b710: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x13b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b714: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13b714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13b718: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x13b718u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x13b71cu;
}
