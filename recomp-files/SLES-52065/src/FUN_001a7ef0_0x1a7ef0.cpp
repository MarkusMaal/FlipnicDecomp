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

// Function: FUN_001a7ef0
// Address: 0x1a7ef0 - 0x1a8074
void FUN_001a7ef0_0x1a7ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7ef0_0x1a7ef0");
#endif

    switch (ctx->pc) {
        case 0x1a7f28u: goto label_1a7f28;
        case 0x1a7f3cu: goto label_1a7f3c;
        case 0x1a7f60u: goto label_1a7f60;
        case 0x1a8040u: goto label_1a8040;
        case 0x1a8050u: goto label_1a8050;
        default: break;
    }

    ctx->pc = 0x1a7ef0u;

    // 0x1a7ef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a7ef4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a7ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a7ef8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7efc: 0x24a52c48  addiu       $a1, $a1, 0x2C48
    ctx->pc = 0x1a7efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11336));
    // 0x1a7f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7f04: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a7f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7f0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f10: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a7f10u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212C48u));
    // 0x1a7f14: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a7f14u;
    { uint32_t bits = FAST_READ32(0x212C50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7f18: 0x24040b00  addiu       $a0, $zero, 0xB00
    ctx->pc = 0x1a7f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2816));
    // 0x1a7f1c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a7f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a7f20: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A7F20u;
    SET_GPR_U32(ctx, 31, 0x1A7F28u);
    ctx->pc = 0x1A7F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F20u;
    // 0x1a7f24: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A7F20u, 0x1A7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F28u;
label_1a7f28:
    // 0x1a7f28: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A7F28u;
    {
        const bool branch_taken_0x1a7f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F28u;
        // 0x1a7f2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f28) {
            ctx->pc = 0x1A7FA0u;
            goto label_1a7fa0;
        }
    }
    ctx->pc = 0x1A7F30u;
    // 0x1a7f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f34: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A7F34u;
    SET_GPR_U32(ctx, 31, 0x1A7F3Cu);
    ctx->pc = 0x1A7F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F34u;
    // 0x1a7f38: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A7F34u, 0x1A7F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F3Cu;
label_1a7f3c:
    // 0x1a7f3c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a7f40: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1a7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1a7f44: 0x2463b550  addiu       $v1, $v1, -0x4AB0
    ctx->pc = 0x1a7f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948176));
    // 0x1a7f48: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1a7f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1a7f4c: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1a7f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1a7f50: 0xac43031c  sw          $v1, 0x31C($v0)
    ctx->pc = 0x1a7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 796), GPR_U32(ctx, 3));
    // 0x1a7f54: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a7f58: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1A7F58u;
    SET_GPR_U32(ctx, 31, 0x1A7F60u);
    ctx->pc = 0x1A7F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F58u;
    // 0x1a7f5c: 0x244409d0  addiu       $a0, $v0, 0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1A7F58u, 0x1A7F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F60u;
label_1a7f60:
    // 0x1a7f60: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a7f64: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1a7f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x1a7f68: 0x2484b4d0  addiu       $a0, $a0, -0x4B30
    ctx->pc = 0x1a7f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948048));
    // 0x1a7f6c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1a7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1a7f70: 0x2463b4c0  addiu       $v1, $v1, -0x4B40
    ctx->pc = 0x1a7f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948032));
    // 0x1a7f74: 0xac440a8c  sw          $a0, 0xA8C($v0)
    ctx->pc = 0x1a7f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2700), GPR_U32(ctx, 4));
    // 0x1a7f78: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a7f7c: 0xac400a70  sw          $zero, 0xA70($v0)
    ctx->pc = 0x1a7f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2672), GPR_U32(ctx, 0));
    // 0x1a7f80: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a7f84: 0xa0400a89  sb          $zero, 0xA89($v0)
    ctx->pc = 0x1a7f84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2697), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7f88: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a7f8c: 0xac430ae0  sw          $v1, 0xAE0($v0)
    ctx->pc = 0x1a7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2784), GPR_U32(ctx, 3));
    // 0x1a7f90: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a7f94: 0xac400a90  sw          $zero, 0xA90($v0)
    ctx->pc = 0x1a7f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2704), GPR_U32(ctx, 0));
    // 0x1a7f98: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x1a7f98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a7f9c: 0x0  nop
    ctx->pc = 0x1a7f9cu;
    // NOP
label_1a7fa0:
    // 0x1a7fa0: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A7FA0u;
    {
        const bool branch_taken_0x1a7fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7fa0) {
            ctx->pc = 0x1A8058u;
            goto label_1a8058;
        }
    }
    ctx->pc = 0x1A7FA8u;
    // 0x1a7fa8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7fac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a7facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a7fb0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a7fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7fb4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a7fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a7fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fbc: 0x24a5e020  addiu       $a1, $a1, -0x1FE0
    ctx->pc = 0x1a7fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959136));
    // 0x1a7fc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7fc4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7fc8: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a7fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a7fcc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7fd0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7fd4: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a7fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a7fd8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a7fdc: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a7fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a7fe0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7fe4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a7fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7fe8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a7fec: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a7fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a7ff0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7ff4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7ff8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a7ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a7ffc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a7ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a8000: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a8000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a8004: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a8004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a8008: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a8008u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a800c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a8010: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a8010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a8014: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a8014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a8018: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a8018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a801c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8020: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a8020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8024: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a8024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a8028: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a8028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a802c: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a802cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a8030: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a8030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a8034: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a8034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a8038: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A8038u;
    SET_GPR_U32(ctx, 31, 0x1A8040u);
    ctx->pc = 0x1A803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8038u;
    // 0x1a803c: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A8038u, 0x1A8040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8040u;
label_1a8040:
    // 0x1a8040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8048: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A8048u;
    SET_GPR_U32(ctx, 31, 0x1A8050u);
    ctx->pc = 0x1A804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8048u;
    // 0x1a804c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A8048u, 0x1A8050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8050u;
label_1a8050:
    // 0x1a8050: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8050u;
    {
        const bool branch_taken_0x1a8050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8050u;
        // 0x1a8054: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8050) {
            ctx->pc = 0x1A8060u;
            goto label_1a8060;
        }
    }
    ctx->pc = 0x1A8058u;
label_1a8058:
    // 0x1a8058: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a805c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a805cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8060:
    // 0x1a8060: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a8060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a8064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a8068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a806c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A806Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A806Cu;
        // 0x1a8070: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A806Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8074u;
}
