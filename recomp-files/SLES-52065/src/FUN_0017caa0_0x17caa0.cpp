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

// Function: FUN_0017caa0
// Address: 0x17caa0 - 0x17cb10
void FUN_0017caa0_0x17caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017caa0_0x17caa0");
#endif

    switch (ctx->pc) {
        case 0x17cae0u: goto label_17cae0;
        case 0x17caf8u: goto label_17caf8;
        default: break;
    }

    ctx->pc = 0x17caa0u;

    // 0x17caa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17caa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17caa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17caa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17caac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17caacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17cab0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17cab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cab4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17CAB4u;
    {
        const bool branch_taken_0x17cab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAB4u;
        // 0x17cab8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cab4) {
            ctx->pc = 0x17CAF8u;
            goto label_17caf8;
        }
    }
    ctx->pc = 0x17CABCu;
    // 0x17cabc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17cac0: 0x2442b060  addiu       $v0, $v0, -0x4FA0
    ctx->pc = 0x17cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x17cac4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CAC4u;
    {
        const bool branch_taken_0x17cac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAC4u;
        // 0x17cac8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cac4) {
            ctx->pc = 0x17CAE0u;
            goto label_17cae0;
        }
    }
    ctx->pc = 0x17CACCu;
    // 0x17cacc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17caccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17cad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17cad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cad4: 0x244296b0  addiu       $v0, $v0, -0x6950
    ctx->pc = 0x17cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940336));
    // 0x17cad8: 0xc04187c  jal         func_1061F0
    ctx->pc = 0x17CAD8u;
    SET_GPR_U32(ctx, 31, 0x17CAE0u);
    ctx->pc = 0x17CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CAD8u;
    // 0x17cadc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1061F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061F0u, 0x17CAD8u, 0x17CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CAE0u;
label_17cae0:
    // 0x17cae0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17cae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17cae4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17cae4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17cae8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CAE8u;
    {
        const bool branch_taken_0x17cae8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAE8u;
        // 0x17caec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cae8) {
            ctx->pc = 0x17CAFCu;
            goto label_17cafc;
        }
    }
    ctx->pc = 0x17CAF0u;
    // 0x17caf0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17CAF0u;
    SET_GPR_U32(ctx, 31, 0x17CAF8u);
    ctx->pc = 0x17CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CAF0u;
    // 0x17caf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17CAF0u, 0x17CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CAF8u;
label_17caf8:
    // 0x17caf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17caf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17cafc:
    // 0x17cafc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17cafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cb00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17cb00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cb04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17cb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cb08: 0x3e00008  jr          $ra
    ctx->pc = 0x17CB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB08u;
        // 0x17cb0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CB10u;
}
