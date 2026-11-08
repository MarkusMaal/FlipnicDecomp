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

// Function: FUN_0017bfa0
// Address: 0x17bfa0 - 0x17c020
void FUN_0017bfa0_0x17bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017bfa0_0x17bfa0");
#endif

    switch (ctx->pc) {
        case 0x17bfe0u: goto label_17bfe0;
        case 0x17c000u: goto label_17c000;
        case 0x17c008u: goto label_17c008;
        case 0x17c010u: goto label_17c010;
        default: break;
    }

    ctx->pc = 0x17bfa0u;

    // 0x17bfa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bfa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bfa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bfac: 0x8c820230  lw          $v0, 0x230($a0)
    ctx->pc = 0x17bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x17bfb0: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17BFB0u;
    {
        const bool branch_taken_0x17bfb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFB0u;
        // 0x17bfb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfb0) {
            ctx->pc = 0x17C008u;
            goto label_17c008;
        }
    }
    ctx->pc = 0x17BFB8u;
    // 0x17bfb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17bfbc: 0xae020230  sw          $v0, 0x230($s0)
    ctx->pc = 0x17bfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    // 0x17bfc0: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x17bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x17bfc4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BFC4u;
    {
        const bool branch_taken_0x17bfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bfc4) {
            ctx->pc = 0x17BFE8u;
            goto label_17bfe8;
        }
    }
    ctx->pc = 0x17BFCCu;
    // 0x17bfcc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17bfd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17bfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bfd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17bfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17bfd8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17BFD8u;
    SET_GPR_U32(ctx, 31, 0x17BFE0u);
    ctx->pc = 0x17BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BFD8u;
    // 0x17bfdc: 0xa20001f9  sb          $zero, 0x1F9($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 505), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17BFD8u, 0x17BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFE0u;
label_17bfe0:
    // 0x17bfe0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17BFE0u;
    {
        const bool branch_taken_0x17bfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFE0u;
        // 0x17bfe4: 0xae000230  sw          $zero, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfe0) {
            ctx->pc = 0x17C008u;
            goto label_17c008;
        }
    }
    ctx->pc = 0x17BFE8u;
label_17bfe8:
    // 0x17bfe8: 0x8203021c  lb          $v1, 0x21C($s0)
    ctx->pc = 0x17bfe8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x17bfec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bff0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17BFF0u;
    {
        const bool branch_taken_0x17bff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFF0u;
        // 0x17bff4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bff0) {
            ctx->pc = 0x17C008u;
            goto label_17c008;
        }
    }
    ctx->pc = 0x17BFF8u;
    // 0x17bff8: 0xc042118  jal         func_108460
    ctx->pc = 0x17BFF8u;
    SET_GPR_U32(ctx, 31, 0x17C000u);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17BFF8u, 0x17C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C000u;
label_17c000:
    // 0x17c000: 0xc058404  jal         func_161010
    ctx->pc = 0x17C000u;
    SET_GPR_U32(ctx, 31, 0x17C008u);
    ctx->pc = 0x17C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C000u;
    // 0x17c004: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161010u, 0x17C000u, 0x17C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C008u;
label_17c008:
    // 0x17c008: 0xc05852c  jal         func_1614B0
    ctx->pc = 0x17C008u;
    SET_GPR_U32(ctx, 31, 0x17C010u);
    ctx->pc = 0x17C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C008u;
    // 0x17c00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1614B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614B0u, 0x17C008u, 0x17C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C010u;
label_17c010:
    // 0x17c010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c018: 0x3e00008  jr          $ra
    ctx->pc = 0x17C018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C018u;
        // 0x17c01c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C020u;
}
