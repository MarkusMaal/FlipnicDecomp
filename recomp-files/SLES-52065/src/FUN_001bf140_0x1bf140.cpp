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

// Function: FUN_001bf140
// Address: 0x1bf140 - 0x1bf3f8
void FUN_001bf140_0x1bf140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bf140_0x1bf140");
#endif

    switch (ctx->pc) {
        case 0x1bf164u: goto label_1bf164;
        case 0x1bf16cu: goto label_1bf16c;
        case 0x1bf178u: goto label_1bf178;
        case 0x1bf18cu: goto label_1bf18c;
        case 0x1bf1b4u: goto label_1bf1b4;
        case 0x1bf1c8u: goto label_1bf1c8;
        case 0x1bf1d8u: goto label_1bf1d8;
        case 0x1bf1e0u: goto label_1bf1e0;
        case 0x1bf1f0u: goto label_1bf1f0;
        case 0x1bf238u: goto label_1bf238;
        case 0x1bf260u: goto label_1bf260;
        case 0x1bf274u: goto label_1bf274;
        case 0x1bf288u: goto label_1bf288;
        case 0x1bf29cu: goto label_1bf29c;
        case 0x1bf2b0u: goto label_1bf2b0;
        case 0x1bf2b8u: goto label_1bf2b8;
        case 0x1bf2ccu: goto label_1bf2cc;
        case 0x1bf2e0u: goto label_1bf2e0;
        case 0x1bf2f4u: goto label_1bf2f4;
        case 0x1bf308u: goto label_1bf308;
        case 0x1bf31cu: goto label_1bf31c;
        case 0x1bf32cu: goto label_1bf32c;
        case 0x1bf340u: goto label_1bf340;
        case 0x1bf354u: goto label_1bf354;
        case 0x1bf364u: goto label_1bf364;
        case 0x1bf378u: goto label_1bf378;
        case 0x1bf38cu: goto label_1bf38c;
        case 0x1bf39cu: goto label_1bf39c;
        case 0x1bf3b0u: goto label_1bf3b0;
        case 0x1bf3c8u: goto label_1bf3c8;
        case 0x1bf3d8u: goto label_1bf3d8;
        default: break;
    }

    ctx->pc = 0x1bf140u;

    // 0x1bf140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bf140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bf144: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1bf144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1bf148: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bf148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bf14c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bf14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bf150: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bf150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bf154: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf15c: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1BF15Cu;
    SET_GPR_U32(ctx, 31, 0x1BF164u);
    ctx->pc = 0x1BF160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF15Cu;
    // 0x1bf160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1BF15Cu, 0x1BF164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF164u;
label_1bf164:
    // 0x1bf164: 0xc045f20  jal         func_117C80
    ctx->pc = 0x1BF164u;
    SET_GPR_U32(ctx, 31, 0x1BF16Cu);
    ctx->pc = 0x1BF168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF164u;
    // 0x1bf168: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1BF164u, 0x1BF16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF16Cu;
label_1bf16c:
    // 0x1bf16c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf170: 0xc06ddbc  jal         func_1B76F0
    ctx->pc = 0x1BF170u;
    SET_GPR_U32(ctx, 31, 0x1BF178u);
    ctx->pc = 0x1BF174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF170u;
    // 0x1bf174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76F0u, 0x1BF170u, 0x1BF178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF178u;
label_1bf178:
    // 0x1bf178: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf17c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bf17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf180: 0x24a53090  addiu       $a1, $a1, 0x3090
    ctx->pc = 0x1bf180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12432));
    // 0x1bf184: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1BF184u;
    SET_GPR_U32(ctx, 31, 0x1BF18Cu);
    ctx->pc = 0x1BF188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF184u;
    // 0x1bf188: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1BF184u, 0x1BF18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF18Cu;
label_1bf18c:
    // 0x1bf18c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf190: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1bf190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bf194: 0x8c23f4e8  lw          $v1, -0xB18($at)
    ctx->pc = 0x1bf194u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bf198: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF198u;
    {
        const bool branch_taken_0x1bf198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF198u;
        // 0x1bf19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf198) {
            ctx->pc = 0x1BF1ACu;
            goto label_1bf1ac;
        }
    }
    ctx->pc = 0x1BF1A0u;
    // 0x1bf1a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf1a4: 0xac20f4e8  sw          $zero, -0xB18($at)
    ctx->pc = 0x1bf1a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F4E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4E8u, _value); } while (0);
    // 0x1bf1a8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1bf1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_1bf1ac:
    // 0x1bf1ac: 0xc06dd9c  jal         func_1B7670
    ctx->pc = 0x1BF1ACu;
    SET_GPR_U32(ctx, 31, 0x1BF1B4u);
    ctx->pc = 0x1BF1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1ACu;
    // 0x1bf1b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7670u, 0x1BF1ACu, 0x1BF1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1B4u;
label_1bf1b4:
    // 0x1bf1b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1bc: 0x8c26f4e8  lw          $a2, -0xB18($at)
    ctx->pc = 0x1bf1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bf1c0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF1C0u;
    SET_GPR_U32(ctx, 31, 0x1BF1C8u);
    ctx->pc = 0x1BF1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1C0u;
    // 0x1bf1c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF1C0u, 0x1BF1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1C8u;
label_1bf1c8:
    // 0x1bf1c8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf1cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1d0: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1BF1D0u;
    SET_GPR_U32(ctx, 31, 0x1BF1D8u);
    ctx->pc = 0x1BF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1D0u;
    // 0x1bf1d4: 0x24a530a0  addiu       $a1, $a1, 0x30A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1BF1D0u, 0x1BF1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1D8u;
label_1bf1d8:
    // 0x1bf1d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf1d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bf1dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf1e0:
    // 0x1bf1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1e8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF1E8u;
    SET_GPR_U32(ctx, 31, 0x1BF1F0u);
    ctx->pc = 0x1BF1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1E8u;
    // 0x1bf1ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF1E8u, 0x1BF1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1F0u;
label_1bf1f0:
    // 0x1bf1f0: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1bf1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf1f4: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1bf1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1bf1f8: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1bf1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf1fc: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x1bf1fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1bf200: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1bf200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bf204: 0x0  nop
    ctx->pc = 0x1bf204u;
    // NOP
    // 0x1bf208: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1bf208u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1bf20c: 0x3c024278  lui         $v0, 0x4278
    ctx->pc = 0x1bf20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17016 << 16));
    // 0x1bf210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bf210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf214: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x1bf214u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1bf218: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x1bf218u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bf21c: 0x460d681a  mula.s      $f13, $f13
    ctx->pc = 0x1bf21cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x1bf220: 0x460c601c  madd.s      $f0, $f12, $f12
    ctx->pc = 0x1bf220u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[12]));
    // 0x1bf224: 0x46000004  c1          0x4
    ctx->pc = 0x1bf224u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1bf228: 0x0  nop
    ctx->pc = 0x1bf228u;
    // NOP
    // 0x1bf22c: 0x0  nop
    ctx->pc = 0x1bf22cu;
    // NOP
    // 0x1bf230: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x1BF230u;
    SET_GPR_U32(ctx, 31, 0x1BF238u);
    ctx->pc = 0x1BF234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF230u;
    // 0x1bf234: 0xe6600068  swc1        $f0, 0x68($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x1BF230u, 0x1BF238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF238u;
label_1bf238:
    // 0x1bf238: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bf238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bf23c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1bf23cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1bf240: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x1bf240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1bf244: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1BF244u;
    {
        const bool branch_taken_0x1bf244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF244u;
        // 0x1bf248: 0xe6600070  swc1        $f0, 0x70($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf244) {
            ctx->pc = 0x1BF1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf1e0;
        }
    }
    ctx->pc = 0x1BF24Cu;
    // 0x1bf24c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf254: 0x24a53140  addiu       $a1, $a1, 0x3140
    ctx->pc = 0x1bf254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12608));
    // 0x1bf258: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1BF258u;
    SET_GPR_U32(ctx, 31, 0x1BF260u);
    ctx->pc = 0x1BF25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF258u;
    // 0x1bf25c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1BF258u, 0x1BF260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF260u;
label_1bf260:
    // 0x1bf260: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf268: 0x24a53280  addiu       $a1, $a1, 0x3280
    ctx->pc = 0x1bf268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12928));
    // 0x1bf26c: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1BF26Cu;
    SET_GPR_U32(ctx, 31, 0x1BF274u);
    ctx->pc = 0x1BF270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF26Cu;
    // 0x1bf270: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1BF26Cu, 0x1BF274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF274u;
label_1bf274:
    // 0x1bf274: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf27c: 0x24a53340  addiu       $a1, $a1, 0x3340
    ctx->pc = 0x1bf27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13120));
    // 0x1bf280: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1BF280u;
    SET_GPR_U32(ctx, 31, 0x1BF288u);
    ctx->pc = 0x1BF284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF280u;
    // 0x1bf284: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1BF280u, 0x1BF288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF288u;
label_1bf288:
    // 0x1bf288: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf290: 0x24a533f0  addiu       $a1, $a1, 0x33F0
    ctx->pc = 0x1bf290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13296));
    // 0x1bf294: 0xc06dea4  jal         func_1B7A90
    ctx->pc = 0x1BF294u;
    SET_GPR_U32(ctx, 31, 0x1BF29Cu);
    ctx->pc = 0x1BF298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF294u;
    // 0x1bf298: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A90u, 0x1BF294u, 0x1BF29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF29Cu;
label_1bf29c:
    // 0x1bf29c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2a4: 0x8c26f4e8  lw          $a2, -0xB18($at)
    ctx->pc = 0x1bf2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bf2a8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF2A8u;
    SET_GPR_U32(ctx, 31, 0x1BF2B0u);
    ctx->pc = 0x1BF2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF2A8u;
    // 0x1bf2ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF2A8u, 0x1BF2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF2B0u;
label_1bf2b0:
    // 0x1bf2b0: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1BF2B0u;
    SET_GPR_U32(ctx, 31, 0x1BF2B8u);
    ctx->pc = 0x1BF2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF2B0u;
    // 0x1bf2b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1BF2B0u, 0x1BF2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF2B8u;
label_1bf2b8:
    // 0x1bf2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bf2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bf2c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2c4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF2C4u;
    SET_GPR_U32(ctx, 31, 0x1BF2CCu);
    ctx->pc = 0x1BF2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF2C4u;
    // 0x1bf2c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF2C4u, 0x1BF2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF2CCu;
label_1bf2cc:
    // 0x1bf2cc: 0xa05100a0  sb          $s1, 0xA0($v0)
    ctx->pc = 0x1bf2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 17));
    // 0x1bf2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bf2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bf2d8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF2D8u;
    SET_GPR_U32(ctx, 31, 0x1BF2E0u);
    ctx->pc = 0x1BF2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF2D8u;
    // 0x1bf2dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF2D8u, 0x1BF2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF2E0u;
label_1bf2e0:
    // 0x1bf2e0: 0xa05100a0  sb          $s1, 0xA0($v0)
    ctx->pc = 0x1bf2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 17));
    // 0x1bf2e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf2ec: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF2ECu;
    SET_GPR_U32(ctx, 31, 0x1BF2F4u);
    ctx->pc = 0x1BF2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF2ECu;
    // 0x1bf2f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF2ECu, 0x1BF2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF2F4u;
label_1bf2f4:
    // 0x1bf2f4: 0xa05100a0  sb          $s1, 0xA0($v0)
    ctx->pc = 0x1bf2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 17));
    // 0x1bf2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2fc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf300: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF300u;
    SET_GPR_U32(ctx, 31, 0x1BF308u);
    ctx->pc = 0x1BF304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF300u;
    // 0x1bf304: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF300u, 0x1BF308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF308u;
label_1bf308:
    // 0x1bf308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf30c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bf30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bf310: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bf310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf314: 0xc06eb58  jal         func_1BAD60
    ctx->pc = 0x1BF314u;
    SET_GPR_U32(ctx, 31, 0x1BF31Cu);
    ctx->pc = 0x1BF318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF314u;
    // 0x1bf318: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAD60u, 0x1BF314u, 0x1BF31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF31Cu;
label_1bf31c:
    // 0x1bf31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf320: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf324: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF324u;
    SET_GPR_U32(ctx, 31, 0x1BF32Cu);
    ctx->pc = 0x1BF328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF324u;
    // 0x1bf328: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF324u, 0x1BF32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF32Cu;
label_1bf32c:
    // 0x1bf32c: 0xa05100a0  sb          $s1, 0xA0($v0)
    ctx->pc = 0x1bf32cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 17));
    // 0x1bf330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf334: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf338: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF338u;
    SET_GPR_U32(ctx, 31, 0x1BF340u);
    ctx->pc = 0x1BF33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF338u;
    // 0x1bf33c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF338u, 0x1BF340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF340u;
label_1bf340:
    // 0x1bf340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf344: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1bf344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1bf348: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bf348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf34c: 0xc06eb58  jal         func_1BAD60
    ctx->pc = 0x1BF34Cu;
    SET_GPR_U32(ctx, 31, 0x1BF354u);
    ctx->pc = 0x1BF350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF34Cu;
    // 0x1bf350: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAD60u, 0x1BF34Cu, 0x1BF354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF354u;
label_1bf354:
    // 0x1bf354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf358: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf35c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF35Cu;
    SET_GPR_U32(ctx, 31, 0x1BF364u);
    ctx->pc = 0x1BF360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF35Cu;
    // 0x1bf360: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF35Cu, 0x1BF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF364u;
label_1bf364:
    // 0x1bf364: 0xa05100a0  sb          $s1, 0xA0($v0)
    ctx->pc = 0x1bf364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 17));
    // 0x1bf368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf36c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf370: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF370u;
    SET_GPR_U32(ctx, 31, 0x1BF378u);
    ctx->pc = 0x1BF374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF370u;
    // 0x1bf374: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF370u, 0x1BF378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF378u;
label_1bf378:
    // 0x1bf378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf37c: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1bf37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1bf380: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bf380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf384: 0xc06eb58  jal         func_1BAD60
    ctx->pc = 0x1BF384u;
    SET_GPR_U32(ctx, 31, 0x1BF38Cu);
    ctx->pc = 0x1BF388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF384u;
    // 0x1bf388: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAD60u, 0x1BF384u, 0x1BF38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF38Cu;
label_1bf38c:
    // 0x1bf38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf390: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf394: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF394u;
    SET_GPR_U32(ctx, 31, 0x1BF39Cu);
    ctx->pc = 0x1BF398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF394u;
    // 0x1bf398: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF394u, 0x1BF39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF39Cu;
label_1bf39c:
    // 0x1bf39c: 0xa05100a0  sb          $s1, 0xA0($v0)
    ctx->pc = 0x1bf39cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 17));
    // 0x1bf3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3a4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf3a8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF3A8u;
    SET_GPR_U32(ctx, 31, 0x1BF3B0u);
    ctx->pc = 0x1BF3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3A8u;
    // 0x1bf3ac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF3A8u, 0x1BF3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3B0u;
label_1bf3b0:
    // 0x1bf3b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3b4: 0x3c024033  lui         $v0, 0x4033
    ctx->pc = 0x1bf3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16435 << 16));
    // 0x1bf3b8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1bf3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1bf3bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bf3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf3c0: 0xc06eb58  jal         func_1BAD60
    ctx->pc = 0x1BF3C0u;
    SET_GPR_U32(ctx, 31, 0x1BF3C8u);
    ctx->pc = 0x1BF3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3C0u;
    // 0x1bf3c4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAD60u, 0x1BF3C0u, 0x1BF3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3C8u;
label_1bf3c8:
    // 0x1bf3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3cc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf3d0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF3D0u;
    SET_GPR_U32(ctx, 31, 0x1BF3D8u);
    ctx->pc = 0x1BF3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3D0u;
    // 0x1bf3d4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF3D0u, 0x1BF3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3D8u;
label_1bf3d8:
    // 0x1bf3d8: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1bf3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bf3dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bf3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf3e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bf3e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf3e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bf3e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf3e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf3ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3F0u;
        // 0x1bf3f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF3F8u;
}
