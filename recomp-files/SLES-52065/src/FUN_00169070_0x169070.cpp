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

// Function: FUN_00169070
// Address: 0x169070 - 0x1691ac
void FUN_00169070_0x169070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169070_0x169070");
#endif

    switch (ctx->pc) {
        case 0x169138u: goto label_169138;
        case 0x169144u: goto label_169144;
        case 0x169194u: goto label_169194;
        default: break;
    }

    ctx->pc = 0x169070u;

    // 0x169070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169074: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x169074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x169078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16907c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16907cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169080: 0x8c8301d4  lw          $v1, 0x1D4($a0)
    ctx->pc = 0x169080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x169084: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x169084u;
    {
        const bool branch_taken_0x169084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x169088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169084u;
        // 0x169088: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169084) {
            ctx->pc = 0x1690B0u;
            goto label_1690b0;
        }
    }
    ctx->pc = 0x16908Cu;
    // 0x16908c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169090: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169090u;
    {
        const bool branch_taken_0x169090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x169094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169090u;
        // 0x169094: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169090) {
            ctx->pc = 0x1690A8u;
            goto label_1690a8;
        }
    }
    ctx->pc = 0x169098u;
    // 0x169098: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x169098u;
    {
        const bool branch_taken_0x169098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169098u;
        // 0x16909c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169098) {
            ctx->pc = 0x16919Cu;
            goto label_16919c;
        }
    }
    ctx->pc = 0x1690A0u;
    // 0x1690a0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1690A0u;
    {
        const bool branch_taken_0x1690a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690A0u;
        // 0x1690a4: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690a0) {
            ctx->pc = 0x169164u;
            goto label_169164;
        }
    }
    ctx->pc = 0x1690A8u;
label_1690a8:
    // 0x1690a8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1690A8u;
    {
        const bool branch_taken_0x1690a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690A8u;
        // 0x1690ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690a8) {
            ctx->pc = 0x1691A0u;
            goto label_1691a0;
        }
    }
    ctx->pc = 0x1690B0u;
label_1690b0:
    // 0x1690b0: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x1690b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1690b4: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1690B4u;
    {
        const bool branch_taken_0x1690b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1690B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690B4u;
        // 0x1690b8: 0x24a20290  addiu       $v0, $a1, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690b4) {
            ctx->pc = 0x1690C4u;
            goto label_1690c4;
        }
    }
    ctx->pc = 0x1690BCu;
    // 0x1690bc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1690BCu;
    {
        const bool branch_taken_0x1690bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690BCu;
        // 0x1690c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690bc) {
            ctx->pc = 0x16919Cu;
            goto label_16919c;
        }
    }
    ctx->pc = 0x1690C4u;
label_1690c4:
    // 0x1690c4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1690c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1690c8: 0x4b002103  vaddw.x     $vf4, $vf4, $vf0w
    ctx->pc = 0x1690c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1690cc: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1690ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1690d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1690d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1690d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1690d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1690d8: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x1690d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1690dc: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x1690dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1690e0: 0x0  nop
    ctx->pc = 0x1690e0u;
    // NOP
    // 0x1690e4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1690E4u;
    {
        const bool branch_taken_0x1690e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1690e4) {
            ctx->pc = 0x169114u;
            goto label_169114;
        }
    }
    ctx->pc = 0x1690ECu;
    // 0x1690ec: 0xc6000240  lwc1        $f0, 0x240($s0)
    ctx->pc = 0x1690ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1690f0: 0x0  nop
    ctx->pc = 0x1690f0u;
    // NOP
    // 0x1690f4: 0x0  nop
    ctx->pc = 0x1690f4u;
    // NOP
    // 0x1690f8: 0x0  nop
    ctx->pc = 0x1690f8u;
    // NOP
    // 0x1690fc: 0x46000044  c1          0x44
    ctx->pc = 0x1690fcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x169100: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x169100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x169104: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x169104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x169108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16910c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16910Cu;
    {
        const bool branch_taken_0x16910c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16910Cu;
        // 0x169110: 0x46010342  mul.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16910c) {
            ctx->pc = 0x16912Cu;
            goto label_16912c;
        }
    }
    ctx->pc = 0x169114u;
label_169114:
    // 0x169114: 0xc6000240  lwc1        $f0, 0x240($s0)
    ctx->pc = 0x169114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169118: 0x0  nop
    ctx->pc = 0x169118u;
    // NOP
    // 0x16911c: 0x0  nop
    ctx->pc = 0x16911cu;
    // NOP
    // 0x169120: 0x0  nop
    ctx->pc = 0x169120u;
    // NOP
    // 0x169124: 0x46000004  c1          0x4
    ctx->pc = 0x169124u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x169128: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x169128u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_16912c:
    // 0x16912c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16912cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x169130: 0xc056194  jal         func_158650
    ctx->pc = 0x169130u;
    SET_GPR_U32(ctx, 31, 0x169138u);
    ctx->pc = 0x169134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169130u;
    // 0x169134: 0x8e040220  lw          $a0, 0x220($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x169130u, 0x169138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169138u;
label_169138:
    // 0x169138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16913c: 0xc042118  jal         func_108460
    ctx->pc = 0x16913Cu;
    SET_GPR_U32(ctx, 31, 0x169144u);
    ctx->pc = 0x169140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16913Cu;
    // 0x169140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16913Cu, 0x169144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169144u;
label_169144:
    // 0x169144: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x169144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x169148: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x169148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16914c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169150: 0xa48001e8  sh          $zero, 0x1E8($a0)
    ctx->pc = 0x169150u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 488), (uint16_t)GPR_U32(ctx, 0));
    // 0x169154: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x169154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x169158: 0xae0301d4  sw          $v1, 0x1D4($s0)
    ctx->pc = 0x169158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
    // 0x16915c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16915Cu;
    {
        const bool branch_taken_0x16915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16915Cu;
        // 0x169160: 0xae000230  sw          $zero, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16915c) {
            ctx->pc = 0x16919Cu;
            goto label_16919c;
        }
    }
    ctx->pc = 0x169164u;
label_169164:
    // 0x169164: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x169164u;
    {
        const bool branch_taken_0x169164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169164) {
            ctx->pc = 0x169170u;
            goto label_169170;
        }
    }
    ctx->pc = 0x16916Cu;
    // 0x16916c: 0xae050220  sw          $a1, 0x220($s0)
    ctx->pc = 0x16916cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 5));
label_169170:
    // 0x169170: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x169170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x169174: 0x14450009  bne         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x169174u;
    {
        const bool branch_taken_0x169174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x169178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169174u;
        // 0x169178: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169174) {
            ctx->pc = 0x16919Cu;
            goto label_16919c;
        }
    }
    ctx->pc = 0x16917Cu;
    // 0x16917c: 0x7a060010  lq          $a2, 0x10($s0)
    ctx->pc = 0x16917cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x169180: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x169180u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x169184: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x169188: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x169188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x16918c: 0xc055c40  jal         func_157100
    ctx->pc = 0x16918Cu;
    SET_GPR_U32(ctx, 31, 0x169194u);
    ctx->pc = 0x169190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16918Cu;
    // 0x169190: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16918Cu, 0x169194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169194u;
label_169194:
    // 0x169194: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x169194u;
    {
        const bool branch_taken_0x169194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169194u;
        // 0x169198: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169194) {
            ctx->pc = 0x16919Cu;
            goto label_16919c;
        }
    }
    ctx->pc = 0x16919Cu;
label_16919c:
    // 0x16919c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16919cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1691a0:
    // 0x1691a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1691a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1691a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1691A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1691A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691A4u;
        // 0x1691a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1691A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1691ACu;
}
