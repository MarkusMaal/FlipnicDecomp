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

// Function: FUN_0013b790
// Address: 0x13b790 - 0x13b7f8
void FUN_0013b790_0x13b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013b790_0x13b790");
#endif

    switch (ctx->pc) {
        case 0x13b7b4u: goto label_13b7b4;
        case 0x13b7c8u: goto label_13b7c8;
        case 0x13b7e0u: goto label_13b7e0;
        default: break;
    }

    ctx->pc = 0x13b790u;

    // 0x13b790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13b794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13b798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b7a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13b7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7a4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x13B7A4u;
    {
        const bool branch_taken_0x13b7a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7A4u;
        // 0x13b7a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7a4) {
            ctx->pc = 0x13B7E0u;
            goto label_13b7e0;
        }
    }
    ctx->pc = 0x13B7ACu;
    // 0x13b7ac: 0xc04ee00  jal         func_13B800
    ctx->pc = 0x13B7ACu;
    SET_GPR_U32(ctx, 31, 0x13B7B4u);
    ctx->pc = 0x13B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B800u, 0x13B7ACu, 0x13B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7B4u;
label_13b7b4:
    // 0x13b7b4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x13b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13b7b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B7B8u;
    {
        const bool branch_taken_0x13b7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7B8u;
        // 0x13b7bc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7b8) {
            ctx->pc = 0x13B7CCu;
            goto label_13b7cc;
        }
    }
    ctx->pc = 0x13B7C0u;
    // 0x13b7c0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13B7C0u;
    SET_GPR_U32(ctx, 31, 0x13B7C8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13B7C0u, 0x13B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7C8u;
label_13b7c8:
    // 0x13b7c8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x13b7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_13b7cc:
    // 0x13b7cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13b7ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13b7d0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B7D0u;
    {
        const bool branch_taken_0x13b7d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7D0u;
        // 0x13b7d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7d0) {
            ctx->pc = 0x13B7E4u;
            goto label_13b7e4;
        }
    }
    ctx->pc = 0x13B7D8u;
    // 0x13b7d8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13B7D8u;
    SET_GPR_U32(ctx, 31, 0x13B7E0u);
    ctx->pc = 0x13B7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B7D8u;
    // 0x13b7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13B7D8u, 0x13B7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7E0u;
label_13b7e0:
    // 0x13b7e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13b7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13b7e4:
    // 0x13b7e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13b7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b7e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b7e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b7ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13B7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7F0u;
        // 0x13b7f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B7F8u;
}
