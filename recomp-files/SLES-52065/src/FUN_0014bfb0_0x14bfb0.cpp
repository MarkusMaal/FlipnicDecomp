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

// Function: FUN_0014bfb0
// Address: 0x14bfb0 - 0x14c03c
void FUN_0014bfb0_0x14bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014bfb0_0x14bfb0");
#endif

    switch (ctx->pc) {
        case 0x14bff4u: goto label_14bff4;
        case 0x14c000u: goto label_14c000;
        case 0x14c008u: goto label_14c008;
        case 0x14c020u: goto label_14c020;
        default: break;
    }

    ctx->pc = 0x14bfb0u;

    // 0x14bfb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14bfb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14bfb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14bfbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14bfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14bfc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14bfc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14bfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14bfc8: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x14BFC8u;
    {
        const bool branch_taken_0x14bfc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BFC8u;
        // 0x14bfcc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bfc8) {
            ctx->pc = 0x14C020u;
            goto label_14c020;
        }
    }
    ctx->pc = 0x14BFD0u;
    // 0x14bfd0: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x14BFD0u;
    {
        const bool branch_taken_0x14bfd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BFD0u;
        // 0x14bfd4: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bfd0) {
            ctx->pc = 0x14C00Cu;
            goto label_14c00c;
        }
    }
    ctx->pc = 0x14BFD8u;
    // 0x14bfd8: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x14BFD8u;
    {
        const bool branch_taken_0x14bfd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bfd8) {
            ctx->pc = 0x14C008u;
            goto label_14c008;
        }
    }
    ctx->pc = 0x14BFE0u;
    // 0x14bfe0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x14bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14bfe4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14BFE4u;
    {
        const bool branch_taken_0x14bfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bfe4) {
            ctx->pc = 0x14C008u;
            goto label_14c008;
        }
    }
    ctx->pc = 0x14BFECu;
    // 0x14bfec: 0xc049dd4  jal         func_127750
    ctx->pc = 0x14BFECu;
    SET_GPR_U32(ctx, 31, 0x14BFF4u);
    ctx->pc = 0x127750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127750u, 0x14BFECu, 0x14BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFF4u;
label_14bff4:
    // 0x14bff4: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x14bff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14bff8: 0xc049dd0  jal         func_127740
    ctx->pc = 0x14BFF8u;
    SET_GPR_U32(ctx, 31, 0x14C000u);
    ctx->pc = 0x14BFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFF8u;
    // 0x14bffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x14BFF8u, 0x14C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C000u;
label_14c000:
    // 0x14c000: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14C000u;
    SET_GPR_U32(ctx, 31, 0x14C008u);
    ctx->pc = 0x14C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C000u;
    // 0x14c004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14C000u, 0x14C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C008u;
label_14c008:
    // 0x14c008: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x14c008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_14c00c:
    // 0x14c00c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14c00cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14c010: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C010u;
    {
        const bool branch_taken_0x14c010 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C010u;
        // 0x14c014: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c010) {
            ctx->pc = 0x14C024u;
            goto label_14c024;
        }
    }
    ctx->pc = 0x14C018u;
    // 0x14c018: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14C018u;
    SET_GPR_U32(ctx, 31, 0x14C020u);
    ctx->pc = 0x14C01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C018u;
    // 0x14c01c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14C018u, 0x14C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C020u;
label_14c020:
    // 0x14c020: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x14c020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14c024:
    // 0x14c024: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14c024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14c028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c02c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14c02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14c030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c034: 0x3e00008  jr          $ra
    ctx->pc = 0x14C034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C034u;
        // 0x14c038: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C03Cu;
}
