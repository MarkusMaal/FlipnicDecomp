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

// Function: FUN_001b62b0
// Address: 0x1b62b0 - 0x1b630c
void FUN_001b62b0_0x1b62b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b62b0_0x1b62b0");
#endif

    switch (ctx->pc) {
        case 0x1b62b0u: goto label_1b62b0;
        case 0x1b62b4u: goto label_1b62b4;
        case 0x1b62b8u: goto label_1b62b8;
        case 0x1b62bcu: goto label_1b62bc;
        case 0x1b62c0u: goto label_1b62c0;
        case 0x1b62c4u: goto label_1b62c4;
        case 0x1b62c8u: goto label_1b62c8;
        case 0x1b62ccu: goto label_1b62cc;
        case 0x1b62d0u: goto label_1b62d0;
        case 0x1b62d4u: goto label_1b62d4;
        case 0x1b62d8u: goto label_1b62d8;
        case 0x1b62dcu: goto label_1b62dc;
        case 0x1b62e0u: goto label_1b62e0;
        case 0x1b62e4u: goto label_1b62e4;
        case 0x1b62e8u: goto label_1b62e8;
        case 0x1b62ecu: goto label_1b62ec;
        case 0x1b62f0u: goto label_1b62f0;
        case 0x1b62f4u: goto label_1b62f4;
        case 0x1b62f8u: goto label_1b62f8;
        case 0x1b62fcu: goto label_1b62fc;
        case 0x1b6300u: goto label_1b6300;
        case 0x1b6304u: goto label_1b6304;
        case 0x1b6308u: goto label_1b6308;
        default: break;
    }

    ctx->pc = 0x1b62b0u;

label_1b62b0:
    // 0x1b62b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b62b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b62b4:
    // 0x1b62b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b62b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b62b8:
    // 0x1b62b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b62b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b62bc:
    // 0x1b62bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b62bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b62c0:
    // 0x1b62c0: 0xafa5003c  sw          $a1, 0x3C($sp)
    ctx->pc = 0x1b62c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
label_1b62c4:
    // 0x1b62c4: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x1b62c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1b62c8:
    // 0x1b62c8: 0xc06da14  jal         func_1B6850
label_1b62cc:
    if (ctx->pc == 0x1B62CCu) {
        ctx->pc = 0x1B62CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62C8u;
        // 0x1b62cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B62D0u;
        goto label_1b62d0;
    }
    ctx->pc = 0x1B62C8u;
    SET_GPR_U32(ctx, 31, 0x1B62D0u);
    ctx->pc = 0x1B62CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62C8u;
    // 0x1b62cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6850u, 0x1B62C8u, 0x1B62D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B62D0u;
label_1b62d0:
    // 0x1b62d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b62d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b62d4:
    // 0x1b62d4: 0xc06da58  jal         func_1B6960
label_1b62d8:
    if (ctx->pc == 0x1B62D8u) {
        ctx->pc = 0x1B62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62D4u;
        // 0x1b62d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B62DCu;
        goto label_1b62dc;
    }
    ctx->pc = 0x1B62D4u;
    SET_GPR_U32(ctx, 31, 0x1B62DCu);
    ctx->pc = 0x1B62D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62D4u;
    // 0x1b62d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6960u, 0x1B62D4u, 0x1B62DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B62DCu;
label_1b62dc:
    // 0x1b62dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b62dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b62e0:
    // 0x1b62e0: 0xc04fd04  jal         func_13F410
label_1b62e4:
    if (ctx->pc == 0x1B62E4u) {
        ctx->pc = 0x1B62E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62E0u;
        // 0x1b62e4: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B62E8u;
        goto label_1b62e8;
    }
    ctx->pc = 0x1B62E0u;
    SET_GPR_U32(ctx, 31, 0x1B62E8u);
    ctx->pc = 0x1B62E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62E0u;
    // 0x1b62e4: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F410u, 0x1B62E0u, 0x1B62E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B62E8u;
label_1b62e8:
    // 0x1b62e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b62e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b62ec:
    // 0x1b62ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b62ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b62f0:
    // 0x1b62f0: 0x320f809  jalr        $t9
label_1b62f4:
    if (ctx->pc == 0x1B62F4u) {
        ctx->pc = 0x1B62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62F0u;
        // 0x1b62f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B62F8u;
        goto label_1b62f8;
    }
    ctx->pc = 0x1B62F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B62F8u);
        ctx->pc = 0x1B62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62F0u;
        // 0x1b62f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B62F0u, 0x1B62F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B62F8u;
label_1b62f8:
    // 0x1b62f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b62f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b62fc:
    // 0x1b62fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b62fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6300:
    // 0x1b6300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6304:
    // 0x1b6304: 0x3e00008  jr          $ra
label_1b6308:
    if (ctx->pc == 0x1B6308u) {
        ctx->pc = 0x1B6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6304u;
        // 0x1b6308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B630Cu;
        goto label_fallthrough_0x1b6304;
    }
    ctx->pc = 0x1B6304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6304u;
        // 0x1b6308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b6304:
    ctx->pc = 0x1B630Cu;
}
