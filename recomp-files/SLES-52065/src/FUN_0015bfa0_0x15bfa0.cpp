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

// Function: FUN_0015bfa0
// Address: 0x15bfa0 - 0x15c010
void FUN_0015bfa0_0x15bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015bfa0_0x15bfa0");
#endif

    switch (ctx->pc) {
        case 0x15bfe0u: goto label_15bfe0;
        case 0x15bff8u: goto label_15bff8;
        default: break;
    }

    ctx->pc = 0x15bfa0u;

    // 0x15bfa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bfa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15bfa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bfac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15bfb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15bfb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bfb4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15BFB4u;
    {
        const bool branch_taken_0x15bfb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFB4u;
        // 0x15bfb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfb4) {
            ctx->pc = 0x15BFF8u;
            goto label_15bff8;
        }
    }
    ctx->pc = 0x15BFBCu;
    // 0x15bfbc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15bfc0: 0x24429830  addiu       $v0, $v0, -0x67D0
    ctx->pc = 0x15bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940720));
    // 0x15bfc4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15BFC4u;
    {
        const bool branch_taken_0x15bfc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFC4u;
        // 0x15bfc8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfc4) {
            ctx->pc = 0x15BFE0u;
            goto label_15bfe0;
        }
    }
    ctx->pc = 0x15BFCCu;
    // 0x15bfcc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15bfd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bfd4: 0x24429890  addiu       $v0, $v0, -0x6770
    ctx->pc = 0x15bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940816));
    // 0x15bfd8: 0xc04187c  jal         func_1061F0
    ctx->pc = 0x15BFD8u;
    SET_GPR_U32(ctx, 31, 0x15BFE0u);
    ctx->pc = 0x15BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BFD8u;
    // 0x15bfdc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1061F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061F0u, 0x15BFD8u, 0x15BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BFE0u;
label_15bfe0:
    // 0x15bfe0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x15bfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x15bfe4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15bfe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15bfe8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BFE8u;
    {
        const bool branch_taken_0x15bfe8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFE8u;
        // 0x15bfec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfe8) {
            ctx->pc = 0x15BFFCu;
            goto label_15bffc;
        }
    }
    ctx->pc = 0x15BFF0u;
    // 0x15bff0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x15BFF0u;
    SET_GPR_U32(ctx, 31, 0x15BFF8u);
    ctx->pc = 0x15BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BFF0u;
    // 0x15bff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x15BFF0u, 0x15BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BFF8u;
label_15bff8:
    // 0x15bff8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15bff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15bffc:
    // 0x15bffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15bffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c008: 0x3e00008  jr          $ra
    ctx->pc = 0x15C008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C008u;
        // 0x15c00c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C010u;
}
