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

// Function: FUN_001bf790
// Address: 0x1bf790 - 0x1bf810
void FUN_001bf790_0x1bf790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bf790_0x1bf790");
#endif

    switch (ctx->pc) {
        case 0x1bf790u: goto label_1bf790;
        case 0x1bf794u: goto label_1bf794;
        case 0x1bf798u: goto label_1bf798;
        case 0x1bf79cu: goto label_1bf79c;
        case 0x1bf7a0u: goto label_1bf7a0;
        case 0x1bf7a4u: goto label_1bf7a4;
        case 0x1bf7a8u: goto label_1bf7a8;
        case 0x1bf7acu: goto label_1bf7ac;
        case 0x1bf7b0u: goto label_1bf7b0;
        case 0x1bf7b4u: goto label_1bf7b4;
        case 0x1bf7b8u: goto label_1bf7b8;
        case 0x1bf7bcu: goto label_1bf7bc;
        case 0x1bf7c0u: goto label_1bf7c0;
        case 0x1bf7c4u: goto label_1bf7c4;
        case 0x1bf7c8u: goto label_1bf7c8;
        case 0x1bf7ccu: goto label_1bf7cc;
        case 0x1bf7d0u: goto label_1bf7d0;
        case 0x1bf7d4u: goto label_1bf7d4;
        case 0x1bf7d8u: goto label_1bf7d8;
        case 0x1bf7dcu: goto label_1bf7dc;
        case 0x1bf7e0u: goto label_1bf7e0;
        case 0x1bf7e4u: goto label_1bf7e4;
        case 0x1bf7e8u: goto label_1bf7e8;
        case 0x1bf7ecu: goto label_1bf7ec;
        case 0x1bf7f0u: goto label_1bf7f0;
        case 0x1bf7f4u: goto label_1bf7f4;
        case 0x1bf7f8u: goto label_1bf7f8;
        case 0x1bf7fcu: goto label_1bf7fc;
        case 0x1bf800u: goto label_1bf800;
        case 0x1bf804u: goto label_1bf804;
        case 0x1bf808u: goto label_1bf808;
        case 0x1bf80cu: goto label_1bf80c;
        default: break;
    }

    ctx->pc = 0x1bf790u;

label_1bf790:
    // 0x1bf790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bf790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bf794:
    // 0x1bf794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bf794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1bf798:
    // 0x1bf798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bf79c:
    // 0x1bf79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bf7a0:
    // 0x1bf7a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bf7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf7a4:
    // 0x1bf7a4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_1bf7a8:
    if (ctx->pc == 0x1BF7A8u) {
        ctx->pc = 0x1BF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7A4u;
        // 0x1bf7a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7ACu;
        goto label_1bf7ac;
    }
    ctx->pc = 0x1BF7A4u;
    {
        const bool branch_taken_0x1bf7a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7A4u;
        // 0x1bf7a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7a4) {
            ctx->pc = 0x1BF7F8u;
            goto label_1bf7f8;
        }
    }
    ctx->pc = 0x1BF7ACu;
label_1bf7ac:
    // 0x1bf7ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1bf7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1bf7b0:
    // 0x1bf7b0: 0x2442ba70  addiu       $v0, $v0, -0x4590
    ctx->pc = 0x1bf7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949488));
label_1bf7b4:
    // 0x1bf7b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bf7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1bf7b8:
    // 0x1bf7b8: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x1bf7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1bf7bc:
    // 0x1bf7bc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1bf7c0:
    if (ctx->pc == 0x1BF7C0u) {
        ctx->pc = 0x1BF7C4u;
        goto label_1bf7c4;
    }
    ctx->pc = 0x1BF7BCu;
    {
        const bool branch_taken_0x1bf7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf7bc) {
            ctx->pc = 0x1BF7D4u;
            goto label_1bf7d4;
        }
    }
    ctx->pc = 0x1BF7C4u;
label_1bf7c4:
    // 0x1bf7c4: 0x8c990094  lw          $t9, 0x94($a0)
    ctx->pc = 0x1bf7c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_1bf7c8:
    // 0x1bf7c8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1bf7c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1bf7cc:
    // 0x1bf7cc: 0x320f809  jalr        $t9
label_1bf7d0:
    if (ctx->pc == 0x1BF7D0u) {
        ctx->pc = 0x1BF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7CCu;
        // 0x1bf7d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7D4u;
        goto label_1bf7d4;
    }
    ctx->pc = 0x1BF7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1BF7D4u);
        ctx->pc = 0x1BF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7CCu;
        // 0x1bf7d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF7CCu, 0x1BF7D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF7D4u;
label_1bf7d4:
    // 0x1bf7d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bf7d8:
    // 0x1bf7d8: 0xc06dc54  jal         func_1B7150
label_1bf7dc:
    if (ctx->pc == 0x1BF7DCu) {
        ctx->pc = 0x1BF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7D8u;
        // 0x1bf7dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7E0u;
        goto label_1bf7e0;
    }
    ctx->pc = 0x1BF7D8u;
    SET_GPR_U32(ctx, 31, 0x1BF7E0u);
    ctx->pc = 0x1BF7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF7D8u;
    // 0x1bf7dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1BF7D8u, 0x1BF7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF7E0u;
label_1bf7e0:
    // 0x1bf7e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1bf7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1bf7e4:
    // 0x1bf7e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bf7e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1bf7e8:
    // 0x1bf7e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1bf7ec:
    if (ctx->pc == 0x1BF7ECu) {
        ctx->pc = 0x1BF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7E8u;
        // 0x1bf7ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7F0u;
        goto label_1bf7f0;
    }
    ctx->pc = 0x1BF7E8u;
    {
        const bool branch_taken_0x1bf7e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7E8u;
        // 0x1bf7ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7e8) {
            ctx->pc = 0x1BF7FCu;
            goto label_1bf7fc;
        }
    }
    ctx->pc = 0x1BF7F0u;
label_1bf7f0:
    // 0x1bf7f0: 0xc0401a4  jal         func_100690
label_1bf7f4:
    if (ctx->pc == 0x1BF7F4u) {
        ctx->pc = 0x1BF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7F0u;
        // 0x1bf7f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7F8u;
        goto label_1bf7f8;
    }
    ctx->pc = 0x1BF7F0u;
    SET_GPR_U32(ctx, 31, 0x1BF7F8u);
    ctx->pc = 0x1BF7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF7F0u;
    // 0x1bf7f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BF7F0u, 0x1BF7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF7F8u;
label_1bf7f8:
    // 0x1bf7f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1bf7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bf7fc:
    // 0x1bf7fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bf7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bf800:
    // 0x1bf800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf804:
    // 0x1bf804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf808:
    // 0x1bf808: 0x3e00008  jr          $ra
label_1bf80c:
    if (ctx->pc == 0x1BF80Cu) {
        ctx->pc = 0x1BF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF808u;
        // 0x1bf80c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF810u;
        goto label_fallthrough_0x1bf808;
    }
    ctx->pc = 0x1BF808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF808u;
        // 0x1bf80c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bf808:
    ctx->pc = 0x1BF810u;
}
