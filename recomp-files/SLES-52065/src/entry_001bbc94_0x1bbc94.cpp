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

// Function: entry_001bbc94
// Address: 0x1bbc94 - 0x1bbcc8
void entry_001bbc94_0x1bbc94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbc94_0x1bbc94");
#endif

    switch (ctx->pc) {
        case 0x1bbcacu: goto label_1bbcac;
        default: break;
    }

    ctx->pc = 0x1bbc94u;

    // 0x1bbc94: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x1bbc94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x1bbc98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bbc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bbc9c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1bbc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bbca0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1bbca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1bbca4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1BBCA4u;
    SET_GPR_U32(ctx, 31, 0x1BBCACu);
    ctx->pc = 0x1BBCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCA4u;
    // 0x1bbca8: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1BBCA4u, 0x1BBCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBCACu;
label_1bbcac:
    // 0x1bbcac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1bbcacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bbcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbcb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bbcb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbcb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbcb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbcbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbcbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBCC0u;
        // 0x1bbcc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBCC8u;
}
