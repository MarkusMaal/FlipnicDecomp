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

// Function: entry_0019ffa8
// Address: 0x19ffa8 - 0x19ffd4
void entry_0019ffa8_0x19ffa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ffa8_0x19ffa8");
#endif

    switch (ctx->pc) {
        case 0x19ffccu: goto label_19ffcc;
        default: break;
    }

    ctx->pc = 0x19ffa8u;

    // 0x19ffa8: 0x8d270030  lw          $a3, 0x30($t1)
    ctx->pc = 0x19ffa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x19ffac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ffb0: 0x10e30036  beq         $a3, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x19FFB0u;
    {
        const bool branch_taken_0x19ffb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x19FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFB0u;
        // 0x19ffb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ffb0) {
            ctx->pc = 0x1A008Cu;
            return;
        }
    }
    ctx->pc = 0x19FFB8u;
    // 0x19ffb8: 0x8d280034  lw          $t0, 0x34($t1)
    ctx->pc = 0x19ffb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x19ffbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19ffbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ffc0: 0x8d290038  lw          $t1, 0x38($t1)
    ctx->pc = 0x19ffc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x19ffc4: 0xc064d84  jal         func_193610
    ctx->pc = 0x19FFC4u;
    SET_GPR_U32(ctx, 31, 0x19FFCCu);
    ctx->pc = 0x19FFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFC4u;
    // 0x19ffc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x19FFC4u, 0x19FFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFCCu;
label_19ffcc:
    // 0x19ffcc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x19FFCCu;
    {
        const bool branch_taken_0x19ffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ffcc) {
            ctx->pc = 0x1A0088u;
            return;
        }
    }
    ctx->pc = 0x19FFD4u;
}
