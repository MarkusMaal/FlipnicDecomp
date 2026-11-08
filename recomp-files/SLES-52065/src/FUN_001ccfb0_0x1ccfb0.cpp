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

// Function: FUN_001ccfb0
// Address: 0x1ccfb0 - 0x1cd010
void FUN_001ccfb0_0x1ccfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ccfb0_0x1ccfb0");
#endif

    switch (ctx->pc) {
        case 0x1ccfe0u: goto label_1ccfe0;
        case 0x1ccff8u: goto label_1ccff8;
        default: break;
    }

    ctx->pc = 0x1ccfb0u;

    // 0x1ccfb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ccfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ccfb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ccfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ccfb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ccfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ccfbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ccfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ccfc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ccfc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfc4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CCFC4u;
    {
        const bool branch_taken_0x1ccfc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFC4u;
        // 0x1ccfc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfc4) {
            ctx->pc = 0x1CCFF8u;
            goto label_1ccff8;
        }
    }
    ctx->pc = 0x1CCFCCu;
    // 0x1ccfcc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1ccfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1ccfd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfd4: 0x2442be00  addiu       $v0, $v0, -0x4200
    ctx->pc = 0x1ccfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950400));
    // 0x1ccfd8: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1CCFD8u;
    SET_GPR_U32(ctx, 31, 0x1CCFE0u);
    ctx->pc = 0x1CCFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFD8u;
    // 0x1ccfdc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1CCFD8u, 0x1CCFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFE0u;
label_1ccfe0:
    // 0x1ccfe0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1ccfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ccfe4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ccfe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ccfe8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCFE8u;
    {
        const bool branch_taken_0x1ccfe8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFE8u;
        // 0x1ccfec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfe8) {
            ctx->pc = 0x1CCFFCu;
            goto label_1ccffc;
        }
    }
    ctx->pc = 0x1CCFF0u;
    // 0x1ccff0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1CCFF0u;
    SET_GPR_U32(ctx, 31, 0x1CCFF8u);
    ctx->pc = 0x1CCFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFF0u;
    // 0x1ccff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1CCFF0u, 0x1CCFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFF8u;
label_1ccff8:
    // 0x1ccff8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ccff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ccffc:
    // 0x1ccffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ccffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cd004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd008: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD008u;
        // 0x1cd00c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD010u;
}
