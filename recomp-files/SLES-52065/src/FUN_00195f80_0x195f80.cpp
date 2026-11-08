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

// Function: FUN_00195f80
// Address: 0x195f80 - 0x1960d0
void FUN_00195f80_0x195f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00195f80_0x195f80");
#endif

    switch (ctx->pc) {
        case 0x195fc0u: goto label_195fc0;
        case 0x196004u: goto label_196004;
        case 0x196020u: goto label_196020;
        case 0x196034u: goto label_196034;
        case 0x196054u: goto label_196054;
        case 0x196068u: goto label_196068;
        case 0x196088u: goto label_196088;
        case 0x1960b0u: goto label_1960b0;
        default: break;
    }

    ctx->pc = 0x195f80u;

    // 0x195f80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x195f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x195f84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x195f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x195f88: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x195f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x195f8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x195f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x195f90: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x195f90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x195f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x195f98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x195f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x195f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x195fa0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x195fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fa4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x195fa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x195fa8: 0x12600041  beqz        $s3, . + 4 + (0x41 << 2)
    ctx->pc = 0x195FA8u;
    {
        const bool branch_taken_0x195fa8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FA8u;
        // 0x195fac: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fa8) {
            ctx->pc = 0x1960B0u;
            goto label_1960b0;
        }
    }
    ctx->pc = 0x195FB0u;
    // 0x195fb0: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x195fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x195fb4: 0x8c450450  lw          $a1, 0x450($v0)
    ctx->pc = 0x195fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x195fb8: 0xc062204  jal         func_188810
    ctx->pc = 0x195FB8u;
    SET_GPR_U32(ctx, 31, 0x195FC0u);
    ctx->pc = 0x195FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195FB8u;
    // 0x195fbc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188810u, 0x195FB8u, 0x195FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195FC0u;
label_195fc0:
    // 0x195fc0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x195fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195fc4: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x195fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x195fc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x195fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195fcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x195fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195fd0: 0x12450022  beq         $s2, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x195FD0u;
    {
        const bool branch_taken_0x195fd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x195FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FD0u;
        // 0x195fd4: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fd0) {
            ctx->pc = 0x19605Cu;
            goto label_19605c;
        }
    }
    ctx->pc = 0x195FD8u;
    // 0x195fd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195fdc: 0x12450012  beq         $s2, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x195FDCu;
    {
        const bool branch_taken_0x195fdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x195fdc) {
            ctx->pc = 0x196028u;
            goto label_196028;
        }
    }
    ctx->pc = 0x195FE4u;
    // 0x195fe4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x195FE4u;
    {
        const bool branch_taken_0x195fe4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x195fe4) {
            ctx->pc = 0x195FF4u;
            goto label_195ff4;
        }
    }
    ctx->pc = 0x195FECu;
    // 0x195fec: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x195FECu;
    {
        const bool branch_taken_0x195fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FECu;
        // 0x195ff0: 0x8f838704  lw          $v1, -0x78FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fec) {
            ctx->pc = 0x19608Cu;
            goto label_19608c;
        }
    }
    ctx->pc = 0x195FF4u;
label_195ff4:
    // 0x195ff4: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x195ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x195ff8: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x195ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x195ffc: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x195FFCu;
    SET_GPR_U32(ctx, 31, 0x196004u);
    ctx->pc = 0x196000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195FFCu;
    // 0x196000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x195FFCu, 0x196004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196004u;
label_196004:
    // 0x196004: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196008: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x196008u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19600c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x19600cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196010: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x196010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x196014: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x196014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x196018: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x196018u;
    SET_GPR_U32(ctx, 31, 0x196020u);
    ctx->pc = 0x19601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196018u;
    // 0x19601c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x196018u, 0x196020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196020u;
label_196020:
    // 0x196020: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x196020u;
    {
        const bool branch_taken_0x196020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196020) {
            ctx->pc = 0x196088u;
            goto label_196088;
        }
    }
    ctx->pc = 0x196028u;
label_196028:
    // 0x196028: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x19602c: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x19602Cu;
    SET_GPR_U32(ctx, 31, 0x196034u);
    ctx->pc = 0x196030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19602Cu;
    // 0x196030: 0x8c440450  lw          $a0, 0x450($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x19602Cu, 0x196034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196034u;
label_196034:
    // 0x196034: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x196034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x196038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19603c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x19603cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196040: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196044: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x196044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x196048: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x196048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x19604c: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x19604Cu;
    SET_GPR_U32(ctx, 31, 0x196054u);
    ctx->pc = 0x196050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19604Cu;
    // 0x196050: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x19604Cu, 0x196054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196054u;
label_196054:
    // 0x196054: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x196054u;
    {
        const bool branch_taken_0x196054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196054) {
            ctx->pc = 0x196088u;
            goto label_196088;
        }
    }
    ctx->pc = 0x19605Cu;
label_19605c:
    // 0x19605c: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x19605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196060: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x196060u;
    SET_GPR_U32(ctx, 31, 0x196068u);
    ctx->pc = 0x196064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196060u;
    // 0x196064: 0x8c440450  lw          $a0, 0x450($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x196060u, 0x196068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196068u;
label_196068:
    // 0x196068: 0x26220200  addiu       $v0, $s1, 0x200
    ctx->pc = 0x196068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x19606c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19606cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196070: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x196070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196074: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196078: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x196078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x19607c: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x19607cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x196080: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x196080u;
    SET_GPR_U32(ctx, 31, 0x196088u);
    ctx->pc = 0x196084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196080u;
    // 0x196084: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x196080u, 0x196088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196088u;
label_196088:
    // 0x196088: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x196088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
label_19608c:
    // 0x19608c: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x19608cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x196090: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x196090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x196094: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x196094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196098: 0x8c640450  lw          $a0, 0x450($v1)
    ctx->pc = 0x196098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1104)));
    // 0x19609c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1960a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1960a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1960a4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1960a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1960a8: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1960A8u;
    SET_GPR_U32(ctx, 31, 0x1960B0u);
    ctx->pc = 0x1960ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960A8u;
    // 0x1960ac: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1960A8u, 0x1960B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960B0u;
label_1960b0:
    // 0x1960b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1960b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1960b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1960b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1960b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1960b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1960bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1960bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1960c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1960c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1960c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1960c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1960c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1960C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1960CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960C8u;
        // 0x1960cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1960C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1960D0u;
}
