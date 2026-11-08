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

// Function: FUN_001a7dc0
// Address: 0x1a7dc0 - 0x1a7ee8
void FUN_001a7dc0_0x1a7dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7dc0_0x1a7dc0");
#endif

    switch (ctx->pc) {
        case 0x1a7df8u: goto label_1a7df8;
        case 0x1a7e08u: goto label_1a7e08;
        case 0x1a7eb4u: goto label_1a7eb4;
        case 0x1a7ec4u: goto label_1a7ec4;
        default: break;
    }

    ctx->pc = 0x1a7dc0u;

    // 0x1a7dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a7dc4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a7dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a7dc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7dcc: 0x24a52c28  addiu       $a1, $a1, 0x2C28
    ctx->pc = 0x1a7dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11304));
    // 0x1a7dd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7dd4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a7dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a7dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7ddc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7de0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a7de0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212C28u));
    // 0x1a7de4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a7de4u;
    { uint32_t bits = FAST_READ32(0x212C30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7de8: 0x240406d0  addiu       $a0, $zero, 0x6D0
    ctx->pc = 0x1a7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1744));
    // 0x1a7dec: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a7decu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a7df0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A7DF0u;
    SET_GPR_U32(ctx, 31, 0x1A7DF8u);
    ctx->pc = 0x1A7DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7DF0u;
    // 0x1a7df4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A7DF0u, 0x1A7DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7DF8u;
label_1a7df8:
    // 0x1a7df8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7DF8u;
    {
        const bool branch_taken_0x1a7df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DF8u;
        // 0x1a7dfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7df8) {
            ctx->pc = 0x1A7E14u;
            goto label_1a7e14;
        }
    }
    ctx->pc = 0x1A7E00u;
    // 0x1a7e00: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A7E00u;
    SET_GPR_U32(ctx, 31, 0x1A7E08u);
    ctx->pc = 0x1A7E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E00u;
    // 0x1a7e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A7E00u, 0x1A7E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E08u;
label_1a7e08:
    // 0x1a7e08: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a7e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a7e0c: 0x2442b560  addiu       $v0, $v0, -0x4AA0
    ctx->pc = 0x1a7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948192));
    // 0x1a7e10: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x1a7e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_1a7e14:
    // 0x1a7e14: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A7E14u;
    {
        const bool branch_taken_0x1a7e14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7e14) {
            ctx->pc = 0x1A7ECCu;
            goto label_1a7ecc;
        }
    }
    ctx->pc = 0x1A7E1Cu;
    // 0x1a7e1c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7e20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a7e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a7e24: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a7e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7e28: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a7e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a7e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e30: 0x24a5dfe0  addiu       $a1, $a1, -0x2020
    ctx->pc = 0x1a7e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959072));
    // 0x1a7e34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7e38: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7e3c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a7e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a7e40: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7e44: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7e44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7e48: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a7e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a7e4c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a7e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a7e50: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a7e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a7e54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7e58: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a7e58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7e5c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a7e60: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a7e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a7e64: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7e68: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7e6c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a7e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a7e70: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a7e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a7e74: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a7e74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a7e78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7e7c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a7e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7e80: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a7e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a7e84: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a7e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a7e88: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7e8c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a7e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7e90: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a7e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7e94: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a7e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7e98: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a7e9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a7e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7ea0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a7ea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a7ea4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a7ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a7ea8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a7ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a7eac: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A7EACu;
    SET_GPR_U32(ctx, 31, 0x1A7EB4u);
    ctx->pc = 0x1A7EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7EACu;
    // 0x1a7eb0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A7EACu, 0x1A7EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7EB4u;
label_1a7eb4:
    // 0x1a7eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7eb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ebc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A7EBCu;
    SET_GPR_U32(ctx, 31, 0x1A7EC4u);
    ctx->pc = 0x1A7EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7EBCu;
    // 0x1a7ec0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A7EBCu, 0x1A7EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7EC4u;
label_1a7ec4:
    // 0x1a7ec4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7EC4u;
    {
        const bool branch_taken_0x1a7ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EC4u;
        // 0x1a7ec8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ec4) {
            ctx->pc = 0x1A7ED4u;
            goto label_1a7ed4;
        }
    }
    ctx->pc = 0x1A7ECCu;
label_1a7ecc:
    // 0x1a7ecc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a7eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ed0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a7ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ed4:
    // 0x1a7ed4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7ed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7edc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EE0u;
        // 0x1a7ee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7EE8u;
}
