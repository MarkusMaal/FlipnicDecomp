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

// Function: FUN_0011aca0
// Address: 0x11aca0 - 0x11acfc
void FUN_0011aca0_0x11aca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011aca0_0x11aca0");
#endif

    switch (ctx->pc) {
        case 0x11acbcu: goto label_11acbc;
        case 0x11acc4u: goto label_11acc4;
        case 0x11ace4u: goto label_11ace4;
        default: break;
    }

    ctx->pc = 0x11aca0u;

    // 0x11aca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11aca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11aca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11aca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11aca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11aca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11acac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11acacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11acb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11acb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acb4: 0xc046b74  jal         func_11ADD0
    ctx->pc = 0x11ACB4u;
    SET_GPR_U32(ctx, 31, 0x11ACBCu);
    ctx->pc = 0x11ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ACB4u;
    // 0x11acb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ADD0u, 0x11ACB4u, 0x11ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ACBCu;
label_11acbc:
    // 0x11acbc: 0xc046c6c  jal         func_11B1B0
    ctx->pc = 0x11ACBCu;
    SET_GPR_U32(ctx, 31, 0x11ACC4u);
    ctx->pc = 0x11ACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ACBCu;
    // 0x11acc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B1B0u, 0x11ACBCu, 0x11ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ACC4u;
label_11acc4:
    // 0x11acc4: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x11acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x11acc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11acc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11accc: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x11acccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
    // 0x11acd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11acd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acd4: 0xae2000fc  sw          $zero, 0xFC($s1)
    ctx->pc = 0x11acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
    // 0x11acd8: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x11acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x11acdc: 0xc046ae4  jal         func_11AB90
    ctx->pc = 0x11ACDCu;
    SET_GPR_U32(ctx, 31, 0x11ACE4u);
    ctx->pc = 0x11ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ACDCu;
    // 0x11ace0: 0xa22003c4  sb          $zero, 0x3C4($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 964), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AB90u, 0x11ACDCu, 0x11ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ACE4u;
label_11ace4:
    // 0x11ace4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11ace4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ace8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11ace8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11acec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11acecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11acf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11acf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11acf4: 0x3e00008  jr          $ra
    ctx->pc = 0x11ACF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACF4u;
        // 0x11acf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ACF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ACFCu;
}
