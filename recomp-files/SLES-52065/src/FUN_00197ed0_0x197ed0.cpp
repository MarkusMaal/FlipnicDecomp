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

// Function: FUN_00197ed0
// Address: 0x197ed0 - 0x197ff8
void FUN_00197ed0_0x197ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00197ed0_0x197ed0");
#endif

    switch (ctx->pc) {
        case 0x197f08u: goto label_197f08;
        case 0x197f18u: goto label_197f18;
        case 0x197fc4u: goto label_197fc4;
        case 0x197fd4u: goto label_197fd4;
        default: break;
    }

    ctx->pc = 0x197ed0u;

    // 0x197ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x197ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x197ed4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x197ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x197ed8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x197edc: 0x24a52990  addiu       $a1, $a1, 0x2990
    ctx->pc = 0x197edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10640));
    // 0x197ee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197ee4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x197ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x197ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197eec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ef0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x197ef0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212990u));
    // 0x197ef4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x197ef4u;
    { uint32_t bits = FAST_READ32(0x212998u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197ef8: 0x240406f0  addiu       $a0, $zero, 0x6F0
    ctx->pc = 0x197ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
    // 0x197efc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x197efcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x197f00: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x197F00u;
    SET_GPR_U32(ctx, 31, 0x197F08u);
    ctx->pc = 0x197F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F00u;
    // 0x197f04: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x197F00u, 0x197F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F08u;
label_197f08:
    // 0x197f08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x197F08u;
    {
        const bool branch_taken_0x197f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F08u;
        // 0x197f0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f08) {
            ctx->pc = 0x197F24u;
            goto label_197f24;
        }
    }
    ctx->pc = 0x197F10u;
    // 0x197f10: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x197F10u;
    SET_GPR_U32(ctx, 31, 0x197F18u);
    ctx->pc = 0x197F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F10u;
    // 0x197f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x197F10u, 0x197F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F18u;
label_197f18:
    // 0x197f18: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x197f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x197f1c: 0x2442b280  addiu       $v0, $v0, -0x4D80
    ctx->pc = 0x197f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947456));
    // 0x197f20: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x197f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_197f24:
    // 0x197f24: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x197F24u;
    {
        const bool branch_taken_0x197f24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x197f24) {
            ctx->pc = 0x197FDCu;
            goto label_197fdc;
        }
    }
    ctx->pc = 0x197F2Cu;
    // 0x197f2c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x197f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x197f30: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x197f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x197f34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197f38: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x197f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x197f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f40: 0x24a5d7e0  addiu       $a1, $a1, -0x2820
    ctx->pc = 0x197f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957024));
    // 0x197f44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197f48: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x197f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x197f4c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x197f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x197f50: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x197f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x197f54: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x197f54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197f58: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x197f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x197f5c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x197f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x197f60: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x197f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x197f64: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x197f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x197f68: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x197f68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x197f6c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x197f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x197f70: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x197f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x197f74: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x197f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x197f78: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x197f78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197f7c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x197f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x197f80: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x197f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x197f84: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x197f84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x197f88: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x197f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x197f8c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x197f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x197f90: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x197f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x197f94: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x197f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x197f98: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x197f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x197f9c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x197f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197fa0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x197fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197fa4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x197fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197fa8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x197fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x197fac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x197facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x197fb0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x197fb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x197fb4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x197fb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x197fb8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x197fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x197fbc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x197FBCu;
    SET_GPR_U32(ctx, 31, 0x197FC4u);
    ctx->pc = 0x197FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FBCu;
    // 0x197fc0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x197FBCu, 0x197FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197FC4u;
label_197fc4:
    // 0x197fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197fc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x197fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197fcc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x197FCCu;
    SET_GPR_U32(ctx, 31, 0x197FD4u);
    ctx->pc = 0x197FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FCCu;
    // 0x197fd0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x197FCCu, 0x197FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197FD4u;
label_197fd4:
    // 0x197fd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x197FD4u;
    {
        const bool branch_taken_0x197fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FD4u;
        // 0x197fd8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fd4) {
            ctx->pc = 0x197FE4u;
            goto label_197fe4;
        }
    }
    ctx->pc = 0x197FDCu;
label_197fdc:
    // 0x197fdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x197fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197fe0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x197fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197fe4:
    // 0x197fe4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x197fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197fe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x197FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FF0u;
        // 0x197ff4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197FF8u;
}
