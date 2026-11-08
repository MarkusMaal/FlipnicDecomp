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

// Function: FUN_001c5960
// Address: 0x1c5960 - 0x1c5bd0
void FUN_001c5960_0x1c5960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c5960_0x1c5960");
#endif

    switch (ctx->pc) {
        case 0x1c59acu: goto label_1c59ac;
        case 0x1c59b4u: goto label_1c59b4;
        case 0x1c59ccu: goto label_1c59cc;
        case 0x1c59d8u: goto label_1c59d8;
        case 0x1c5a48u: goto label_1c5a48;
        case 0x1c5a50u: goto label_1c5a50;
        case 0x1c5a58u: goto label_1c5a58;
        case 0x1c5b20u: goto label_1c5b20;
        case 0x1c5b38u: goto label_1c5b38;
        case 0x1c5bacu: goto label_1c5bac;
        default: break;
    }

    ctx->pc = 0x1c5960u;

    // 0x1c5960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c5960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c5964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5968: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c5968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c596c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c5970: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c5970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c5974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c5974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c5978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c597c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5980: 0x9083006d  lbu         $v1, 0x6D($a0)
    ctx->pc = 0x1c5980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 109)));
    // 0x1c5984: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5984u;
    {
        const bool branch_taken_0x1c5984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C5988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5984u;
        // 0x1c5988: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5984) {
            ctx->pc = 0x1C5994u;
            goto label_1c5994;
        }
    }
    ctx->pc = 0x1C598Cu;
    // 0x1c598c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1C598Cu;
    {
        const bool branch_taken_0x1c598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C598Cu;
        // 0x1c5990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c598c) {
            ctx->pc = 0x1C5BB0u;
            goto label_1c5bb0;
        }
    }
    ctx->pc = 0x1C5994u;
label_1c5994:
    // 0x1c5994: 0x8e910014  lw          $s1, 0x14($s4)
    ctx->pc = 0x1c5994u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1c5998: 0x26900014  addiu       $s0, $s4, 0x14
    ctx->pc = 0x1c5998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x1c599c: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1c599cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1c59a0: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C59A0u;
    {
        const bool branch_taken_0x1c59a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59A0u;
        // 0x1c59a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59a0) {
            ctx->pc = 0x1C5A78u;
            goto label_1c5a78;
        }
    }
    ctx->pc = 0x1C59A8u;
    // 0x1c59a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c59a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c59ac:
    // 0x1c59ac: 0xc06e598  jal         func_1B9660
    ctx->pc = 0x1C59ACu;
    SET_GPR_U32(ctx, 31, 0x1C59B4u);
    ctx->pc = 0x1C59B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C59ACu;
    // 0x1c59b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9660u, 0x1C59ACu, 0x1C59B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C59B4u;
label_1c59b4:
    // 0x1c59b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c59b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59b8: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x1c59b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1c59bc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C59BCu;
    {
        const bool branch_taken_0x1c59bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59BCu;
        // 0x1c59c0: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59bc) {
            ctx->pc = 0x1C5A64u;
            goto label_1c5a64;
        }
    }
    ctx->pc = 0x1C59C4u;
    // 0x1c59c4: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1C59C4u;
    SET_GPR_U32(ctx, 31, 0x1C59CCu);
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1C59C4u, 0x1C59CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C59CCu;
label_1c59cc:
    // 0x1c59cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c59ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c59d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C59D0u;
    {
        const bool branch_taken_0x1c59d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59D0u;
        // 0x1c59d4: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59d0) {
            ctx->pc = 0x1C5A50u;
            goto label_1c5a50;
        }
    }
    ctx->pc = 0x1C59D8u;
label_1c59d8:
    // 0x1c59d8: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x1c59d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c59dc: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x1c59dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c59e0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C59E0u;
    {
        const bool branch_taken_0x1c59e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c59e0) {
            ctx->pc = 0x1C5A48u;
            goto label_1c5a48;
        }
    }
    ctx->pc = 0x1C59E8u;
    // 0x1c59e8: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x1c59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1c59ec: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C59ECu;
    {
        const bool branch_taken_0x1c59ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c59ec) {
            ctx->pc = 0x1C5A3Cu;
            goto label_1c5a3c;
        }
    }
    ctx->pc = 0x1C59F4u;
    // 0x1c59f4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1c59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1c59f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c59f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c59fc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1c59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1c5a00: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1c5a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c5a04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c5a08: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x1c5a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c5a0c: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x1c5a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5a10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c5a14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5a18: 0x460208c0  add.s       $f3, $f1, $f2
    ctx->pc = 0x1c5a18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c5a1c: 0x46022040  add.s       $f1, $f4, $f2
    ctx->pc = 0x1c5a1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1c5a20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c5a20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c5a24: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x1c5a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x1c5a28: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x1c5a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5a2c: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x1c5a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1c5a30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5a30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5a34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c5a34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c5a38: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x1c5a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_1c5a3c:
    // 0x1c5a3c: 0x0  nop
    ctx->pc = 0x1c5a3cu;
    // NOP
    // 0x1c5a40: 0xc06f8f4  jal         func_1BE3D0
    ctx->pc = 0x1C5A40u;
    SET_GPR_U32(ctx, 31, 0x1C5A48u);
    ctx->pc = 0x1C5A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A40u;
    // 0x1c5a44: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D0u, 0x1C5A40u, 0x1C5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A48u;
label_1c5a48:
    // 0x1c5a48: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1C5A48u;
    SET_GPR_U32(ctx, 31, 0x1C5A50u);
    ctx->pc = 0x1C5A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A48u;
    // 0x1c5a4c: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1C5A48u, 0x1C5A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A50u;
label_1c5a50:
    // 0x1c5a50: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1C5A50u;
    SET_GPR_U32(ctx, 31, 0x1C5A58u);
    ctx->pc = 0x1C5A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A50u;
    // 0x1c5a54: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1C5A50u, 0x1C5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A58u;
label_1c5a58:
    // 0x1c5a58: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5a5c: 0x1462ffde  bne         $v1, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C5A5Cu;
    {
        const bool branch_taken_0x1c5a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5a5c) {
            ctx->pc = 0x1C59D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c59d8;
        }
    }
    ctx->pc = 0x1C5A64u;
label_1c5a64:
    // 0x1c5a64: 0x0  nop
    ctx->pc = 0x1c5a64u;
    // NOP
    // 0x1c5a68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c5a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c5a6c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x1c5a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1c5a70: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1C5A70u;
    {
        const bool branch_taken_0x1c5a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A70u;
        // 0x1c5a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a70) {
            ctx->pc = 0x1C59ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c59ac;
        }
    }
    ctx->pc = 0x1C5A78u;
label_1c5a78:
    // 0x1c5a78: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1c5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1c5a7c: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x1c5a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5a80: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1c5a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1c5a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5a88: 0x0  nop
    ctx->pc = 0x1c5a88u;
    // NOP
    // 0x1c5a8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5a90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c5a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c5a94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c5a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c5a98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c5a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c5a9c: 0x0  nop
    ctx->pc = 0x1c5a9cu;
    // NOP
    // 0x1c5aa0: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x1c5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    // 0x1c5aa4: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x1c5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1c5aa8: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5AA8u;
    {
        const bool branch_taken_0x1c5aa8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1C5AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AA8u;
        // 0x1c5aac: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5aa8) {
            ctx->pc = 0x1C5AB4u;
            goto label_1c5ab4;
        }
    }
    ctx->pc = 0x1C5AB0u;
    // 0x1c5ab0: 0xae800058  sw          $zero, 0x58($s4)
    ctx->pc = 0x1c5ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 0));
label_1c5ab4:
    // 0x1c5ab4: 0x8c30c6c0  lw          $s0, -0x3940($at)
    ctx->pc = 0x1c5ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952640)));
    // 0x1c5ab8: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C5AB8u;
    {
        const bool branch_taken_0x1c5ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AB8u;
        // 0x1c5abc: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ab8) {
            ctx->pc = 0x1C5B0Cu;
            goto label_1c5b0c;
        }
    }
    ctx->pc = 0x1C5AC0u;
    // 0x1c5ac0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5ac4: 0x3444544f  ori         $a0, $v0, 0x544F
    ctx->pc = 0x1c5ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1c5ac8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5acc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1c5accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1c5ad0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c5ad4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5AD4u;
    {
        const bool branch_taken_0x1c5ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AD4u;
        // 0x1c5ad8: 0x8c23c6c4  lw          $v1, -0x393C($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ad4) {
            ctx->pc = 0x1C5AE8u;
            goto label_1c5ae8;
        }
    }
    ctx->pc = 0x1C5ADCu;
    // 0x1c5adc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1c5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c5ae0: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1c5ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1c5ae4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1c5ae8:
    // 0x1c5ae8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5AE8u;
    {
        const bool branch_taken_0x1c5ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ae8) {
            ctx->pc = 0x1C5AFCu;
            goto label_1c5afc;
        }
    }
    ctx->pc = 0x1C5AF0u;
    // 0x1c5af0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c5af4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c5af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c5af8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1c5afc:
    // 0x1c5afc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5AFCu;
    {
        const bool branch_taken_0x1c5afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5afc) {
            ctx->pc = 0x1C5B0Cu;
            goto label_1c5b0c;
        }
    }
    ctx->pc = 0x1C5B04u;
    // 0x1c5b04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5B04u;
    {
        const bool branch_taken_0x1c5b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B04u;
        // 0x1c5b08: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b04) {
            ctx->pc = 0x1C5B14u;
            goto label_1c5b14;
        }
    }
    ctx->pc = 0x1C5B0Cu;
label_1c5b0c:
    // 0x1c5b0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c5b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b10: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1c5b10u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x20u));
label_1c5b14:
    // 0x1c5b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b18: 0xc06d100  jal         func_1B4400
    ctx->pc = 0x1C5B18u;
    SET_GPR_U32(ctx, 31, 0x1C5B20u);
    ctx->pc = 0x1C5B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B18u;
    // 0x1c5b1c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4400u, 0x1C5B18u, 0x1C5B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B20u;
label_1c5b20:
    // 0x1c5b20: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1c5b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c5b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5b28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c5b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c5b2c: 0xa022f280  sb          $v0, -0xD80($at)
    ctx->pc = 0x1c5b2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F280u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F280u, _value); } while (0);
    // 0x1c5b30: 0xc06f904  jal         func_1BE410
    ctx->pc = 0x1C5B30u;
    SET_GPR_U32(ctx, 31, 0x1C5B38u);
    ctx->pc = 0x1C5B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B30u;
    // 0x1c5b34: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE410u, 0x1C5B30u, 0x1C5B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B38u;
label_1c5b38:
    // 0x1c5b38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c5b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c5b3c: 0xa020f280  sb          $zero, -0xD80($at)
    ctx->pc = 0x1c5b3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F280u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F280u, _value); } while (0);
    // 0x1c5b40: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5b44: 0x8c24c6c0  lw          $a0, -0x3940($at)
    ctx->pc = 0x1c5b44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C6C0u));
    // 0x1c5b48: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C5B48u;
    {
        const bool branch_taken_0x1c5b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B48u;
        // 0x1c5b4c: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b48) {
            ctx->pc = 0x1C5B9Cu;
            goto label_1c5b9c;
        }
    }
    ctx->pc = 0x1C5B50u;
    // 0x1c5b50: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5b54: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1c5b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1c5b58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5b5c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1c5b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1c5b60: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c5b64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5B64u;
    {
        const bool branch_taken_0x1c5b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B64u;
        // 0x1c5b68: 0x8c23c6c4  lw          $v1, -0x393C($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b64) {
            ctx->pc = 0x1C5B78u;
            goto label_1c5b78;
        }
    }
    ctx->pc = 0x1C5B6Cu;
    // 0x1c5b6c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1c5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1c5b70: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1c5b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1c5b74: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1c5b78:
    // 0x1c5b78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5B78u;
    {
        const bool branch_taken_0x1c5b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b78) {
            ctx->pc = 0x1C5B8Cu;
            goto label_1c5b8c;
        }
    }
    ctx->pc = 0x1C5B80u;
    // 0x1c5b80: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c5b84: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c5b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c5b88: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1c5b8c:
    // 0x1c5b8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5B8Cu;
    {
        const bool branch_taken_0x1c5b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b8c) {
            ctx->pc = 0x1C5B9Cu;
            goto label_1c5b9c;
        }
    }
    ctx->pc = 0x1C5B94u;
    // 0x1c5b94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5B94u;
    {
        const bool branch_taken_0x1c5b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B94u;
        // 0x1c5b98: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b94) {
            ctx->pc = 0x1C5BA4u;
            goto label_1c5ba4;
        }
    }
    ctx->pc = 0x1C5B9Cu;
label_1c5b9c:
    // 0x1c5b9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ba0: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x1c5ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x20u));
label_1c5ba4:
    // 0x1c5ba4: 0xc06d118  jal         func_1B4460
    ctx->pc = 0x1C5BA4u;
    SET_GPR_U32(ctx, 31, 0x1C5BACu);
    ctx->pc = 0x1B4460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4460u, 0x1C5BA4u, 0x1C5BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5BACu;
label_1c5bac:
    // 0x1c5bac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c5bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5bb0:
    // 0x1c5bb0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c5bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5bb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c5bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5bb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c5bb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5bbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c5bbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5bc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c5bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BC8u;
        // 0x1c5bcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5BD0u;
}
