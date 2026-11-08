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

// Function: FUN_00118ea0
// Address: 0x118ea0 - 0x118f10
void FUN_00118ea0_0x118ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118ea0_0x118ea0");
#endif

    switch (ctx->pc) {
        case 0x118ee0u: goto label_118ee0;
        case 0x118ef8u: goto label_118ef8;
        default: break;
    }

    ctx->pc = 0x118ea0u;

    // 0x118ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x118eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118eb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118eb4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x118EB4u;
    {
        const bool branch_taken_0x118eb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EB4u;
        // 0x118eb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118eb4) {
            ctx->pc = 0x118EF8u;
            goto label_118ef8;
        }
    }
    ctx->pc = 0x118EBCu;
    // 0x118ebc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x118ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x118ec0: 0x24428770  addiu       $v0, $v0, -0x7890
    ctx->pc = 0x118ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936432));
    // 0x118ec4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x118EC4u;
    {
        const bool branch_taken_0x118ec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EC4u;
        // 0x118ec8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ec4) {
            ctx->pc = 0x118EE0u;
            goto label_118ee0;
        }
    }
    ctx->pc = 0x118ECCu;
    // 0x118ecc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x118eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x118ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ed4: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x118ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x118ed8: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x118ED8u;
    SET_GPR_U32(ctx, 31, 0x118EE0u);
    ctx->pc = 0x118EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118ED8u;
    // 0x118edc: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x118ED8u, 0x118EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118EE0u;
label_118ee0:
    // 0x118ee0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x118ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x118ee4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x118ee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x118ee8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118EE8u;
    {
        const bool branch_taken_0x118ee8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x118EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EE8u;
        // 0x118eec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ee8) {
            ctx->pc = 0x118EFCu;
            goto label_118efc;
        }
    }
    ctx->pc = 0x118EF0u;
    // 0x118ef0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x118EF0u;
    SET_GPR_U32(ctx, 31, 0x118EF8u);
    ctx->pc = 0x118EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118EF0u;
    // 0x118ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x118EF0u, 0x118EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118EF8u;
label_118ef8:
    // 0x118ef8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x118ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_118efc:
    // 0x118efc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118f08: 0x3e00008  jr          $ra
    ctx->pc = 0x118F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F08u;
        // 0x118f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118F10u;
}
