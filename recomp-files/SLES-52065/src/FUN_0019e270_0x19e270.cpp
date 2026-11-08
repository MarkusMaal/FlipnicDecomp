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

// Function: FUN_0019e270
// Address: 0x19e270 - 0x19e398
void FUN_0019e270_0x19e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e270_0x19e270");
#endif

    switch (ctx->pc) {
        case 0x19e2a8u: goto label_19e2a8;
        case 0x19e2b8u: goto label_19e2b8;
        case 0x19e364u: goto label_19e364;
        case 0x19e374u: goto label_19e374;
        default: break;
    }

    ctx->pc = 0x19e270u;

    // 0x19e270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19e270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19e274: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x19e274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x19e278: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19e27c: 0x24a52a60  addiu       $a1, $a1, 0x2A60
    ctx->pc = 0x19e27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10848));
    // 0x19e280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e284: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x19e284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e28c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19e28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e290: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x19e290u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212A60u));
    // 0x19e294: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19e294u;
    { uint32_t bits = FAST_READ32(0x212A68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e298: 0x240409a0  addiu       $a0, $zero, 0x9A0
    ctx->pc = 0x19e298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2464));
    // 0x19e29c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19e29cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x19e2a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x19E2A0u;
    SET_GPR_U32(ctx, 31, 0x19E2A8u);
    ctx->pc = 0x19E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E2A0u;
    // 0x19e2a4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x19E2A0u, 0x19E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2A8u;
label_19e2a8:
    // 0x19e2a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E2A8u;
    {
        const bool branch_taken_0x19e2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2A8u;
        // 0x19e2ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2a8) {
            ctx->pc = 0x19E2C4u;
            goto label_19e2c4;
        }
    }
    ctx->pc = 0x19E2B0u;
    // 0x19e2b0: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x19E2B0u;
    SET_GPR_U32(ctx, 31, 0x19E2B8u);
    ctx->pc = 0x19E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E2B0u;
    // 0x19e2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x19E2B0u, 0x19E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2B8u;
label_19e2b8:
    // 0x19e2b8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19e2bc: 0x2442b310  addiu       $v0, $v0, -0x4CF0
    ctx->pc = 0x19e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
    // 0x19e2c0: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x19e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_19e2c4:
    // 0x19e2c4: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19E2C4u;
    {
        const bool branch_taken_0x19e2c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e2c4) {
            ctx->pc = 0x19E37Cu;
            goto label_19e37c;
        }
    }
    ctx->pc = 0x19E2CCu;
    // 0x19e2cc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19e2d0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19e2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19e2d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19e2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e2d8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2e0: 0x24a5db60  addiu       $a1, $a1, -0x24A0
    ctx->pc = 0x19e2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957920));
    // 0x19e2e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19e2e8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19e2ec: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19e2f0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19e2f4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19e2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19e2f8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19e2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19e2fc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19e300: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19e300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19e304: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19e304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19e308: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19e308u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19e30c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19e310: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19e310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19e314: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19e314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19e318: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19e318u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19e31c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19e31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19e320: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19e320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19e324: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19e324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19e328: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19e328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19e32c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19e32cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19e330: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19e330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19e334: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19e334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19e338: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19e33c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19e33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19e340: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19e340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19e344: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19e344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e348: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19e348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19e34c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19e350: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19e350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19e354: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19e354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19e358: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19e358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19e35c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19E35Cu;
    SET_GPR_U32(ctx, 31, 0x19E364u);
    ctx->pc = 0x19E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E35Cu;
    // 0x19e360: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19E35Cu, 0x19E364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E364u;
label_19e364:
    // 0x19e364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19e368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e36c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19E36Cu;
    SET_GPR_U32(ctx, 31, 0x19E374u);
    ctx->pc = 0x19E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E36Cu;
    // 0x19e370: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19E36Cu, 0x19E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E374u;
label_19e374:
    // 0x19e374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19E374u;
    {
        const bool branch_taken_0x19e374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E374u;
        // 0x19e378: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e374) {
            ctx->pc = 0x19E384u;
            goto label_19e384;
        }
    }
    ctx->pc = 0x19E37Cu;
label_19e37c:
    // 0x19e37c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19e37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e384:
    // 0x19e384: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19e384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e38c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e390: 0x3e00008  jr          $ra
    ctx->pc = 0x19E390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E390u;
        // 0x19e394: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E398u;
}
