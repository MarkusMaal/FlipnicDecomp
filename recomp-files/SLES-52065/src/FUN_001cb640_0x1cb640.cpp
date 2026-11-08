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

// Function: FUN_001cb640
// Address: 0x1cb640 - 0x1cb78c
void FUN_001cb640_0x1cb640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cb640_0x1cb640");
#endif

    switch (ctx->pc) {
        case 0x1cb6b4u: goto label_1cb6b4;
        case 0x1cb6c4u: goto label_1cb6c4;
        case 0x1cb6d0u: goto label_1cb6d0;
        case 0x1cb6dcu: goto label_1cb6dc;
        case 0x1cb704u: goto label_1cb704;
        case 0x1cb718u: goto label_1cb718;
        case 0x1cb72cu: goto label_1cb72c;
        case 0x1cb734u: goto label_1cb734;
        case 0x1cb74cu: goto label_1cb74c;
        case 0x1cb75cu: goto label_1cb75c;
        case 0x1cb770u: goto label_1cb770;
        default: break;
    }

    ctx->pc = 0x1cb640u;

    // 0x1cb640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cb640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cb644: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cb644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cb648: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cb648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cb64c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cb64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cb650: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cb650u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb654: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb658: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1CB658u;
    {
        const bool branch_taken_0x1cb658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB658u;
        // 0x1cb65c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb658) {
            ctx->pc = 0x1CB6E8u;
            goto label_1cb6e8;
        }
    }
    ctx->pc = 0x1CB660u;
    // 0x1cb660: 0xc6630080  lwc1        $f3, 0x80($s3)
    ctx->pc = 0x1cb660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb664: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x1cb664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x1cb668: 0xc6620094  lwc1        $f2, 0x94($s3)
    ctx->pc = 0x1cb668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb66c: 0xc6610084  lwc1        $f1, 0x84($s3)
    ctx->pc = 0x1cb66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb670: 0xc6600098  lwc1        $f0, 0x98($s3)
    ctx->pc = 0x1cb670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb674: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1cb674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1cb678: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1cb678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1cb67c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb67cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cb680: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cb680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1cb684: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1cb684u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1cb688: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1cb688u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1cb68c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb68cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1cb690: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb694: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1cb694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1cb698: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cb698u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1cb69c: 0x44101000  mfc1        $s0, $f2
    ctx->pc = 0x1cb69cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1cb6a0: 0x0  nop
    ctx->pc = 0x1cb6a0u;
    // NOP
    // 0x1cb6a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb6a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1cb6a8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1cb6a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1cb6ac: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1CB6ACu;
    SET_GPR_U32(ctx, 31, 0x1CB6B4u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1CB6ACu, 0x1CB6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB6B4u;
label_1cb6b4:
    // 0x1cb6b4: 0x8e65008c  lw          $a1, 0x8C($s3)
    ctx->pc = 0x1cb6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1cb6b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cb6b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6bc: 0xc062930  jal         func_18A4C0
    ctx->pc = 0x1CB6BCu;
    SET_GPR_U32(ctx, 31, 0x1CB6C4u);
    ctx->pc = 0x1CB6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB6BCu;
    // 0x1cb6c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A4C0u, 0x1CB6BCu, 0x1CB6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB6C4u;
label_1cb6c4:
    // 0x1cb6c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cb6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6c8: 0xc062948  jal         func_18A520
    ctx->pc = 0x1CB6C8u;
    SET_GPR_U32(ctx, 31, 0x1CB6D0u);
    ctx->pc = 0x1CB6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB6C8u;
    // 0x1cb6cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x1CB6C8u, 0x1CB6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB6D0u;
label_1cb6d0:
    // 0x1cb6d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cb6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6d4: 0xc062994  jal         func_18A650
    ctx->pc = 0x1CB6D4u;
    SET_GPR_U32(ctx, 31, 0x1CB6DCu);
    ctx->pc = 0x1CB6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB6D4u;
    // 0x1cb6d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A650u, 0x1CB6D4u, 0x1CB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB6DCu;
label_1cb6dc:
    // 0x1cb6dc: 0x82620088  lb          $v0, 0x88($s3)
    ctx->pc = 0x1cb6dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x1cb6e0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cb6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cb6e4: 0xa022c7f4  sb          $v0, -0x380C($at)
    ctx->pc = 0x1cb6e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x22C7F4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x22C7F4u, _value); } while (0);
label_1cb6e8:
    // 0x1cb6e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb6ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6f0: 0xae620090  sw          $v0, 0x90($s3)
    ctx->pc = 0x1cb6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
    // 0x1cb6f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb6f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6fc: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CB6FCu;
    SET_GPR_U32(ctx, 31, 0x1CB704u);
    ctx->pc = 0x1CB700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB6FCu;
    // 0x1cb700: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CB6FCu, 0x1CB704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB704u;
label_1cb704:
    // 0x1cb704: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb708: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb70c: 0x24a57da0  addiu       $a1, $a1, 0x7DA0
    ctx->pc = 0x1cb70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32160));
    // 0x1cb710: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CB710u;
    SET_GPR_U32(ctx, 31, 0x1CB718u);
    ctx->pc = 0x1CB714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB710u;
    // 0x1cb714: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CB710u, 0x1CB718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB718u;
label_1cb718:
    // 0x1cb718: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb71c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb720: 0x24a57eb0  addiu       $a1, $a1, 0x7EB0
    ctx->pc = 0x1cb720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32432));
    // 0x1cb724: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CB724u;
    SET_GPR_U32(ctx, 31, 0x1CB72Cu);
    ctx->pc = 0x1CB728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB724u;
    // 0x1cb728: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CB724u, 0x1CB72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB72Cu;
label_1cb72c:
    // 0x1cb72c: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1CB72Cu;
    SET_GPR_U32(ctx, 31, 0x1CB734u);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1CB72Cu, 0x1CB734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB734u;
label_1cb734:
    // 0x1cb734: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1cb734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cb738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb73c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB73Cu;
    {
        const bool branch_taken_0x1cb73c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb73c) {
            ctx->pc = 0x1CB770u;
            goto label_1cb770;
        }
    }
    ctx->pc = 0x1CB744u;
    // 0x1cb744: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1CB744u;
    SET_GPR_U32(ctx, 31, 0x1CB74Cu);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1CB744u, 0x1CB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB74Cu;
label_1cb74c:
    // 0x1cb74c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb74cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb750: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb754: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1CB754u;
    SET_GPR_U32(ctx, 31, 0x1CB75Cu);
    ctx->pc = 0x1CB758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB754u;
    // 0x1cb758: 0x24a579b0  addiu       $a1, $a1, 0x79B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1CB754u, 0x1CB75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB75Cu;
label_1cb75c:
    // 0x1cb75c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb760: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb764: 0x24a579a0  addiu       $a1, $a1, 0x79A0
    ctx->pc = 0x1cb764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31136));
    // 0x1cb768: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CB768u;
    SET_GPR_U32(ctx, 31, 0x1CB770u);
    ctx->pc = 0x1CB76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB768u;
    // 0x1cb76c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CB768u, 0x1CB770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB770u;
label_1cb770:
    // 0x1cb770: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cb770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cb774: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cb774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cb778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb784: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB784u;
        // 0x1cb788: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB78Cu;
}
