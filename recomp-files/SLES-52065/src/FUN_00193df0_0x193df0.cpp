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

// Function: FUN_00193df0
// Address: 0x193df0 - 0x193ee0
void FUN_00193df0_0x193df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193df0_0x193df0");
#endif

    switch (ctx->pc) {
        case 0x193e40u: goto label_193e40;
        case 0x193e68u: goto label_193e68;
        case 0x193ea4u: goto label_193ea4;
        case 0x193eccu: goto label_193ecc;
        default: break;
    }

    ctx->pc = 0x193df0u;

    // 0x193df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193e00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x193e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e04: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x193E04u;
    {
        const bool branch_taken_0x193e04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x193E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E04u;
        // 0x193e08: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e04) {
            ctx->pc = 0x193EACu;
            goto label_193eac;
        }
    }
    ctx->pc = 0x193E0Cu;
    // 0x193e0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x193e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193e10: 0x10e20017  beq         $a3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x193E10u;
    {
        const bool branch_taken_0x193e10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x193e10) {
            ctx->pc = 0x193E70u;
            goto label_193e70;
        }
    }
    ctx->pc = 0x193E18u;
    // 0x193e18: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x193e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x193e1c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x193e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x193e20: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x193e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x193e24: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x193e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e28: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x193e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    // 0x193e2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193e30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x193e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193e34: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x193e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x193e38: 0xc04bf38  jal         func_12FCE0
    ctx->pc = 0x193E38u;
    SET_GPR_U32(ctx, 31, 0x193E40u);
    ctx->pc = 0x193E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E38u;
    // 0x193e3c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x193E38u, 0x193E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E40u;
label_193e40:
    // 0x193e40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193e44: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x193e44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x193e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e4c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x193e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e54: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x193e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x193e58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193e5c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193e5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193e60: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x193E60u;
    SET_GPR_U32(ctx, 31, 0x193E68u);
    ctx->pc = 0x193E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E60u;
    // 0x193e64: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x193E60u, 0x193E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E68u;
label_193e68:
    // 0x193e68: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x193E68u;
    {
        const bool branch_taken_0x193e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E68u;
        // 0x193e6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e68) {
            ctx->pc = 0x193ED0u;
            goto label_193ed0;
        }
    }
    ctx->pc = 0x193E70u;
label_193e70:
    // 0x193e70: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x193e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x193e74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193e78: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x193e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x193e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193e88: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193e88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193e8c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x193e8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x193e90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193e94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x193e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193e98: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x193e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x193e9c: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x193E9Cu;
    SET_GPR_U32(ctx, 31, 0x193EA4u);
    ctx->pc = 0x193EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E9Cu;
    // 0x193ea0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x193E9Cu, 0x193EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193EA4u;
label_193ea4:
    // 0x193ea4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x193EA4u;
    {
        const bool branch_taken_0x193ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193ea4) {
            ctx->pc = 0x193ECCu;
            goto label_193ecc;
        }
    }
    ctx->pc = 0x193EACu;
label_193eac:
    // 0x193eac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ebc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193ec0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193ec0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193ec4: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x193EC4u;
    SET_GPR_U32(ctx, 31, 0x193ECCu);
    ctx->pc = 0x193EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193EC4u;
    // 0x193ec8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x193EC4u, 0x193ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193ECCu;
label_193ecc:
    // 0x193ecc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_193ed0:
    // 0x193ed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x193ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193ED8u;
        // 0x193edc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193EE0u;
}
