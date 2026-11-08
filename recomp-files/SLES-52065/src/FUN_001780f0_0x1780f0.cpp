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

// Function: FUN_001780f0
// Address: 0x1780f0 - 0x1782e0
void FUN_001780f0_0x1780f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001780f0_0x1780f0");
#endif

    switch (ctx->pc) {
        case 0x1781e8u: goto label_1781e8;
        case 0x178240u: goto label_178240;
        case 0x17829cu: goto label_17829c;
        default: break;
    }

    ctx->pc = 0x1780f0u;

    // 0x1780f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1780f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1780f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1780f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1780f8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1780f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1780fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1780fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x178100: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x178100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x178104: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x178104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178108: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17810c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17810cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x178110: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x178110u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x178114: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x178114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x178118: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x178118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17811c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17811cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x178120: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x178120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x178124: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x178124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x178128: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x178128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17812c: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x17812cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x178130: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x178130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178134: 0x0  nop
    ctx->pc = 0x178134u;
    // NOP
    // 0x178138: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x178138u;
    {
        const bool branch_taken_0x178138 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178138u;
        // 0x17813c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178138) {
            ctx->pc = 0x178148u;
            goto label_178148;
        }
    }
    ctx->pc = 0x178140u;
    // 0x178140: 0xe6430010  swc1        $f3, 0x10($s2)
    ctx->pc = 0x178140u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x178144: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x178144u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_178148:
    // 0x178148: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x178148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17814c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x17814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x178150: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x178154: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x178154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x178158: 0x0  nop
    ctx->pc = 0x178158u;
    // NOP
    // 0x17815c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178160: 0x2c420200  sltiu       $v0, $v0, 0x200
    ctx->pc = 0x178160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x178164: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x178164u;
    {
        const bool branch_taken_0x178164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178164u;
        // 0x178168: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178164) {
            ctx->pc = 0x1781A8u;
            goto label_1781a8;
        }
    }
    ctx->pc = 0x17816Cu;
    // 0x17816c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17816cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178170: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178170u;
    {
        const bool branch_taken_0x178170 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x178170) {
            ctx->pc = 0x178184u;
            goto label_178184;
        }
    }
    ctx->pc = 0x178178u;
    // 0x178178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17817c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17817Cu;
    {
        const bool branch_taken_0x17817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17817Cu;
        // 0x178180: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17817c) {
            ctx->pc = 0x1781A0u;
            goto label_1781a0;
        }
    }
    ctx->pc = 0x178184u;
label_178184:
    // 0x178184: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x178184u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x178188: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x178188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17818c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x178190: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x178190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178194: 0x0  nop
    ctx->pc = 0x178194u;
    // NOP
    // 0x178198: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x178198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17819c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17819cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1781a0:
    // 0x1781a0: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1781a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1781a4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1781a4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1781a8:
    // 0x1781a8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1781a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1781ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1781ACu;
    {
        const bool branch_taken_0x1781ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1781B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781ACu;
        // 0x1781b0: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781ac) {
            ctx->pc = 0x1781C4u;
            goto label_1781c4;
        }
    }
    ctx->pc = 0x1781B4u;
    // 0x1781b4: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x1781b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x1781b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1781b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1781bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1781BCu;
    {
        const bool branch_taken_0x1781bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1781C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781BCu;
        // 0x1781c0: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781bc) {
            ctx->pc = 0x1781CCu;
            goto label_1781cc;
        }
    }
    ctx->pc = 0x1781C4u;
label_1781c4:
    // 0x1781c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1781c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1781c8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1781c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1781cc:
    // 0x1781cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1781ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1781d0: 0x0  nop
    ctx->pc = 0x1781d0u;
    // NOP
    // 0x1781d4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1781d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1781d8: 0x0  nop
    ctx->pc = 0x1781d8u;
    // NOP
    // 0x1781dc: 0x0  nop
    ctx->pc = 0x1781dcu;
    // NOP
    // 0x1781e0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1781E0u;
    {
        const bool branch_taken_0x1781e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1781e0) {
            ctx->pc = 0x178254u;
            goto label_178254;
        }
    }
    ctx->pc = 0x1781E8u;
label_1781e8:
    // 0x1781e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1781E8u;
    {
        const bool branch_taken_0x1781e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1781e8) {
            ctx->pc = 0x1781F8u;
            goto label_1781f8;
        }
    }
    ctx->pc = 0x1781F0u;
    // 0x1781f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1781F0u;
    {
        const bool branch_taken_0x1781f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1781F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781F0u;
        // 0x1781f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781f0) {
            ctx->pc = 0x1781FCu;
            goto label_1781fc;
        }
    }
    ctx->pc = 0x1781F8u;
label_1781f8:
    // 0x1781f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1781f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1781fc:
    // 0x1781fc: 0x0  nop
    ctx->pc = 0x1781fcu;
    // NOP
    // 0x178200: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x178200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x178204: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x178204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x178208: 0x2442f670  addiu       $v0, $v0, -0x990
    ctx->pc = 0x178208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964848));
    // 0x17820c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x178210: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x178210u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178214: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x178214u;
    {
        const bool branch_taken_0x178214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178214u;
        // 0x178218: 0x2263c  dsll32      $a0, $v0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178214) {
            ctx->pc = 0x178254u;
            goto label_178254;
        }
    }
    ctx->pc = 0x17821Cu;
    // 0x17821c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17821cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x178220: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178220u;
    {
        const bool branch_taken_0x178220 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x178224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178220u;
        // 0x178224: 0x4600a547  neg.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178220) {
            ctx->pc = 0x178230u;
            goto label_178230;
        }
    }
    ctx->pc = 0x178228u;
    // 0x178228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x178228u;
    {
        const bool branch_taken_0x178228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178228) {
            ctx->pc = 0x178234u;
            goto label_178234;
        }
    }
    ctx->pc = 0x178230u;
label_178230:
    // 0x178230: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x178230u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_178234:
    // 0x178234: 0x0  nop
    ctx->pc = 0x178234u;
    // NOP
    // 0x178238: 0xc07ef92  jal         func_1FBE48
    ctx->pc = 0x178238u;
    SET_GPR_U32(ctx, 31, 0x178240u);
    ctx->pc = 0x1FBE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE48u, 0x178238u, 0x178240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178240u;
label_178240:
    // 0x178240: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x178240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x178244: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x178244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x178248: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x178248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17824c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x17824cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x178250: 0xe440fffc  swc1        $f0, -0x4($v0)
    ctx->pc = 0x178250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
label_178254:
    // 0x178254: 0x0  nop
    ctx->pc = 0x178254u;
    // NOP
    // 0x178258: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x178258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17825c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17825cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x178260: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x178260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x178264: 0x0  nop
    ctx->pc = 0x178264u;
    // NOP
    // 0x178268: 0x1602ffdf  bne         $s0, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x178268u;
    {
        const bool branch_taken_0x178268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178268u;
        // 0x17826c: 0x202082a  slt         $at, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178268) {
            ctx->pc = 0x1781E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1781e8;
        }
    }
    ctx->pc = 0x178270u;
    // 0x178270: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x178270u;
    {
        const bool branch_taken_0x178270 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x178270) {
            ctx->pc = 0x1782BCu;
            goto label_1782bc;
        }
    }
    ctx->pc = 0x178278u;
    // 0x178278: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x178278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x17827c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17827Cu;
    {
        const bool branch_taken_0x17827c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17827c) {
            ctx->pc = 0x1782A4u;
            goto label_1782a4;
        }
    }
    ctx->pc = 0x178284u;
    // 0x178284: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x178284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178288: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x178288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x17828c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17828cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178294: 0xc05dfe8  jal         func_177FA0
    ctx->pc = 0x178294u;
    SET_GPR_U32(ctx, 31, 0x17829Cu);
    ctx->pc = 0x178298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178294u;
    // 0x178298: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x177FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177FA0u, 0x178294u, 0x17829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17829Cu;
label_17829c:
    // 0x17829c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17829Cu;
    {
        const bool branch_taken_0x17829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1782A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17829Cu;
        // 0x1782a0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17829c) {
            ctx->pc = 0x1782C0u;
            goto label_1782c0;
        }
    }
    ctx->pc = 0x1782A4u;
label_1782a4:
    // 0x1782a4: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1782a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1782a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1782a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1782ac: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1782acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1782b0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1782b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1782b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1782b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1782b8: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1782b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_1782bc:
    // 0x1782bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1782bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1782c0:
    // 0x1782c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1782c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1782c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1782c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1782c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1782c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1782cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1782ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1782d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1782d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1782d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1782d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1782D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1782DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782D8u;
        // 0x1782dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1782D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1782E0u;
}
