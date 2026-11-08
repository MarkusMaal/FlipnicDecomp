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

// Function: FUN_00190a30
// Address: 0x190a30 - 0x190b54
void FUN_00190a30_0x190a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190a30_0x190a30");
#endif

    switch (ctx->pc) {
        case 0x190a68u: goto label_190a68;
        case 0x190a7cu: goto label_190a7c;
        case 0x190b30u: goto label_190b30;
        case 0x190b40u: goto label_190b40;
        default: break;
    }

    ctx->pc = 0x190a30u;

    // 0x190a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190a34: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x190a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x190a38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190a3c: 0x24a52950  addiu       $a1, $a1, 0x2950
    ctx->pc = 0x190a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10576));
    // 0x190a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x190a44: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x190a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190a4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x190a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a50: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x190a50u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212950u));
    // 0x190a54: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x190a54u;
    { uint32_t bits = FAST_READ32(0x212958u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a58: 0x24040320  addiu       $a0, $zero, 0x320
    ctx->pc = 0x190a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x190a5c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x190a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x190a60: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x190A60u;
    SET_GPR_U32(ctx, 31, 0x190A68u);
    ctx->pc = 0x190A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A60u;
    // 0x190a64: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x190A60u, 0x190A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A68u;
label_190a68:
    // 0x190a68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a6c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190A6Cu;
    {
        const bool branch_taken_0x190a6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A6Cu;
        // 0x190a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a6c) {
            ctx->pc = 0x190A80u;
            goto label_190a80;
        }
    }
    ctx->pc = 0x190A74u;
    // 0x190a74: 0xc063d34  jal         func_18F4D0
    ctx->pc = 0x190A74u;
    SET_GPR_U32(ctx, 31, 0x190A7Cu);
    ctx->pc = 0x18F4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4D0u, 0x190A74u, 0x190A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A7Cu;
label_190a7c:
    // 0x190a7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190a80:
    // 0x190a80: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x190A80u;
    {
        const bool branch_taken_0x190a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x190a80) {
            ctx->pc = 0x190B40u;
            goto label_190b40;
        }
    }
    ctx->pc = 0x190A88u;
    // 0x190a88: 0x26220210  addiu       $v0, $s1, 0x210
    ctx->pc = 0x190a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x190a8c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190A8Cu;
    {
        const bool branch_taken_0x190a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190a8c) {
            ctx->pc = 0x190A98u;
            goto label_190a98;
        }
    }
    ctx->pc = 0x190A94u;
    // 0x190a94: 0x2442fdf0  addiu       $v0, $v0, -0x210
    ctx->pc = 0x190a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966768));
label_190a98:
    // 0x190a98: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x190a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x190a9c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x190a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x190aa0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x190aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190aa4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x190aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190aac: 0x24a5fe00  addiu       $a1, $a1, -0x200
    ctx->pc = 0x190aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x190ab0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x190ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x190ab4: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x190ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x190ab8: 0xacc70254  sw          $a3, 0x254($a2)
    ctx->pc = 0x190ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 596), GPR_U32(ctx, 7));
    // 0x190abc: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x190abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x190ac0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x190ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x190ac4: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x190ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x190ac8: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x190ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x190acc: 0x8ce70034  lw          $a3, 0x34($a3)
    ctx->pc = 0x190accu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x190ad0: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x190ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x190ad4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x190ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x190ad8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x190ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x190adc: 0xacc00054  sw          $zero, 0x54($a2)
    ctx->pc = 0x190adcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
    // 0x190ae0: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x190ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x190ae4: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x190ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x190ae8: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x190ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x190aec: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x190aecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x190af0: 0x8ce70034  lw          $a3, 0x34($a3)
    ctx->pc = 0x190af0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x190af4: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x190af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x190af8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x190af8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x190afc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x190afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x190b00: 0xacc00154  sw          $zero, 0x154($a2)
    ctx->pc = 0x190b00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 340), GPR_U32(ctx, 0));
    // 0x190b04: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x190b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x190b08: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x190b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190b0c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x190b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190b10: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x190b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b14: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x190b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x190b18: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x190b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x190b1c: 0xe4620274  swc1        $f2, 0x274($v1)
    ctx->pc = 0x190b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x190b20: 0xe4610278  swc1        $f1, 0x278($v1)
    ctx->pc = 0x190b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 632), bits); }
    // 0x190b24: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x190b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
    // 0x190b28: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x190B28u;
    SET_GPR_U32(ctx, 31, 0x190B30u);
    ctx->pc = 0x190B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B28u;
    // 0x190b2c: 0xac620280  sw          $v0, 0x280($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x190B28u, 0x190B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B30u;
label_190b30:
    // 0x190b30: 0x26240210  addiu       $a0, $s1, 0x210
    ctx->pc = 0x190b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x190b34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x190b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b38: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x190B38u;
    SET_GPR_U32(ctx, 31, 0x190B40u);
    ctx->pc = 0x190B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B38u;
    // 0x190b3c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x190B38u, 0x190B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B40u;
label_190b40:
    // 0x190b40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x190b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190b44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190b48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x190B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B4Cu;
        // 0x190b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190B54u;
}
