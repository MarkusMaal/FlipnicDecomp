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

// Function: FUN_0019a9e0
// Address: 0x19a9e0 - 0x19ab08
void FUN_0019a9e0_0x19a9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a9e0_0x19a9e0");
#endif

    switch (ctx->pc) {
        case 0x19aa18u: goto label_19aa18;
        case 0x19aa28u: goto label_19aa28;
        case 0x19aad4u: goto label_19aad4;
        case 0x19aae4u: goto label_19aae4;
        default: break;
    }

    ctx->pc = 0x19a9e0u;

    // 0x19a9e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19a9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19a9e4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x19a9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x19a9e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19a9ec: 0x24a52a00  addiu       $a1, $a1, 0x2A00
    ctx->pc = 0x19a9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10752));
    // 0x19a9f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19a9f4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x19a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a9f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19a9fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a9fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa00: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x19aa00u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212A00u));
    // 0x19aa04: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19aa04u;
    { uint32_t bits = FAST_READ32(0x212A08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aa08: 0x24040680  addiu       $a0, $zero, 0x680
    ctx->pc = 0x19aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x19aa0c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19aa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x19aa10: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x19AA10u;
    SET_GPR_U32(ctx, 31, 0x19AA18u);
    ctx->pc = 0x19AA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AA10u;
    // 0x19aa14: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x19AA10u, 0x19AA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AA18u;
label_19aa18:
    // 0x19aa18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AA18u;
    {
        const bool branch_taken_0x19aa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA18u;
        // 0x19aa1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa18) {
            ctx->pc = 0x19AA34u;
            goto label_19aa34;
        }
    }
    ctx->pc = 0x19AA20u;
    // 0x19aa20: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x19AA20u;
    SET_GPR_U32(ctx, 31, 0x19AA28u);
    ctx->pc = 0x19AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AA20u;
    // 0x19aa24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x19AA20u, 0x19AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AA28u;
label_19aa28:
    // 0x19aa28: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19aa2c: 0x2442b2e0  addiu       $v0, $v0, -0x4D20
    ctx->pc = 0x19aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x19aa30: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x19aa30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_19aa34:
    // 0x19aa34: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19AA34u;
    {
        const bool branch_taken_0x19aa34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aa34) {
            ctx->pc = 0x19AAECu;
            goto label_19aaec;
        }
    }
    ctx->pc = 0x19AA3Cu;
    // 0x19aa3c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19aa40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19aa40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19aa44: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19aa44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19aa48: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19aa4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19aa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa50: 0x24a5d9a0  addiu       $a1, $a1, -0x2660
    ctx->pc = 0x19aa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957472));
    // 0x19aa54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19aa58: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19aa5c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19aa60: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19aa64: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19aa64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19aa68: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19aa68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19aa6c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19aa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19aa70: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19aa70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19aa74: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19aa78: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19aa78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19aa7c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19aa80: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19aa84: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19aa88: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19aa88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19aa8c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19aa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19aa90: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19aa94: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19aa94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19aa98: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19aa9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19aa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19aaa0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19aaa4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19aaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19aaa8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19aaac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19aab0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19aab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aab4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19aab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aab8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19aabc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19aac0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19aac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19aac4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19aac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19aac8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19aac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19aacc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19AACCu;
    SET_GPR_U32(ctx, 31, 0x19AAD4u);
    ctx->pc = 0x19AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AACCu;
    // 0x19aad0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19AACCu, 0x19AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAD4u;
label_19aad4:
    // 0x19aad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19aad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19aad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aadc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19AADCu;
    SET_GPR_U32(ctx, 31, 0x19AAE4u);
    ctx->pc = 0x19AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AADCu;
    // 0x19aae0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19AADCu, 0x19AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAE4u;
label_19aae4:
    // 0x19aae4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19AAE4u;
    {
        const bool branch_taken_0x19aae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AAE4u;
        // 0x19aae8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aae4) {
            ctx->pc = 0x19AAF4u;
            goto label_19aaf4;
        }
    }
    ctx->pc = 0x19AAECu;
label_19aaec:
    // 0x19aaec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19aaecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aaf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19aaf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19aaf4:
    // 0x19aaf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19aaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19aaf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19aaf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19aafc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19aafcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ab00: 0x3e00008  jr          $ra
    ctx->pc = 0x19AB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB00u;
        // 0x19ab04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AB08u;
}
