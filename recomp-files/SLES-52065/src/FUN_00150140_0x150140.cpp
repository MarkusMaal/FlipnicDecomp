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

// Function: FUN_00150140
// Address: 0x150140 - 0x1503b8
void FUN_00150140_0x150140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150140_0x150140");
#endif

    switch (ctx->pc) {
        case 0x150198u: goto label_150198;
        case 0x1501e0u: goto label_1501e0;
        case 0x1501f4u: goto label_1501f4;
        case 0x150204u: goto label_150204;
        case 0x15020cu: goto label_15020c;
        case 0x1502a8u: goto label_1502a8;
        case 0x1502b4u: goto label_1502b4;
        case 0x1502f8u: goto label_1502f8;
        case 0x150394u: goto label_150394;
        default: break;
    }

    ctx->pc = 0x150140u;

    // 0x150140: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x150140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x150144: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x150144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x150148: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x150148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15014c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x15014cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x150150: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x150150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x150154: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x150154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x150158: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x150158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15015c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15015cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x150160: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x150160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x150164: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x150164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150168: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x150168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15016c: 0x27b20088  addiu       $s2, $sp, 0x88
    ctx->pc = 0x15016cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x150170: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x150170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x150174: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x150174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x150178: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x150178u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15017c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15017cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150180: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x150180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x150184: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x150184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
    // 0x150188: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x150188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x15018c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x15018cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x150190: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x150190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x150194: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x150194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_150198:
    // 0x150198: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x150198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15019c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x15019cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1501a0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1501a0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1501a4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1501a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1501a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1501a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1501ac: 0x266500d0  addiu       $a1, $s3, 0xD0
    ctx->pc = 0x1501acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x1501b0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1501b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1501b4: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1501b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1501b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1501b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1501bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1501bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1501c0: 0x0  nop
    ctx->pc = 0x1501c0u;
    // NOP
    // 0x1501c4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1501c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1501c8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1501c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1501cc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1501ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1501d0: 0x0  nop
    ctx->pc = 0x1501d0u;
    // NOP
    // 0x1501d4: 0x0  nop
    ctx->pc = 0x1501d4u;
    // NOP
    // 0x1501d8: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1501D8u;
    SET_GPR_U32(ctx, 31, 0x1501E0u);
    ctx->pc = 0x1501DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501D8u;
    // 0x1501dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1501D8u, 0x1501E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501E0u;
label_1501e0:
    // 0x1501e0: 0x4614a302  mul.s       $f12, $f20, $f20
    ctx->pc = 0x1501e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1501e4: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x1501e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1501e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1501e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501ec: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1501ECu;
    SET_GPR_U32(ctx, 31, 0x1501F4u);
    ctx->pc = 0x1501F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501ECu;
    // 0x1501f0: 0x266500e0  addiu       $a1, $s3, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1501ECu, 0x1501F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501F4u;
label_1501f4:
    // 0x1501f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1501f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1501f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1501fc: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1501FCu;
    SET_GPR_U32(ctx, 31, 0x150204u);
    ctx->pc = 0x150200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501FCu;
    // 0x150200: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1501FCu, 0x150204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150204u;
label_150204:
    // 0x150204: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x150204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150208: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x150208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15020c:
    // 0x15020c: 0x0  nop
    ctx->pc = 0x15020cu;
    // NOP
    // 0x150210: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x150210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x150214: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x150214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x150218: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x150218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15021c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x15021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150220: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x150220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150224: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x150224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150228: 0x0  nop
    ctx->pc = 0x150228u;
    // NOP
    // 0x15022c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15022Cu;
    {
        const bool branch_taken_0x15022c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15022Cu;
        // 0x150230: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15022c) {
            ctx->pc = 0x15023Cu;
            goto label_15023c;
        }
    }
    ctx->pc = 0x150234u;
    // 0x150234: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x150234u;
    {
        const bool branch_taken_0x150234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150234) {
            ctx->pc = 0x150244u;
            goto label_150244;
        }
    }
    ctx->pc = 0x15023Cu;
label_15023c:
    // 0x15023c: 0x0  nop
    ctx->pc = 0x15023cu;
    // NOP
    // 0x150240: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x150240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_150244:
    // 0x150244: 0x0  nop
    ctx->pc = 0x150244u;
    // NOP
    // 0x150248: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x150248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15024c: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x15024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x150250: 0x24470070  addiu       $a3, $v0, 0x70
    ctx->pc = 0x150250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x150254: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x150254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x150258: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x150258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15025c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15025cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150260: 0x0  nop
    ctx->pc = 0x150260u;
    // NOP
    // 0x150264: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x150264u;
    {
        const bool branch_taken_0x150264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x150264) {
            ctx->pc = 0x150274u;
            goto label_150274;
        }
    }
    ctx->pc = 0x15026Cu;
    // 0x15026c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15026Cu;
    {
        const bool branch_taken_0x15026c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15026Cu;
        // 0x150270: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15026c) {
            ctx->pc = 0x150278u;
            goto label_150278;
        }
    }
    ctx->pc = 0x150274u;
label_150274:
    // 0x150274: 0x0  nop
    ctx->pc = 0x150274u;
    // NOP
label_150278:
    // 0x150278: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x150278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15027c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x15027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150280: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x150280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x150284: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x150284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x150288: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x150288u;
    {
        const bool branch_taken_0x150288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150288u;
        // 0x15028c: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150288) {
            ctx->pc = 0x15020Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15020c;
        }
    }
    ctx->pc = 0x150290u;
    // 0x150290: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x150290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x150294: 0x2a020064  slti        $v0, $s0, 0x64
    ctx->pc = 0x150294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x150298: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x150298u;
    {
        const bool branch_taken_0x150298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150298) {
            ctx->pc = 0x150198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150198;
        }
    }
    ctx->pc = 0x1502A0u;
    // 0x1502a0: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x1502A0u;
    SET_GPR_U32(ctx, 31, 0x1502A8u);
    ctx->pc = 0x1502A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502A0u;
    // 0x1502a4: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x1502A0u, 0x1502A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502A8u;
label_1502a8:
    // 0x1502a8: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1502a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1502ac: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x1502ACu;
    SET_GPR_U32(ctx, 31, 0x1502B4u);
    ctx->pc = 0x1502B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502ACu;
    // 0x1502b0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x1502ACu, 0x1502B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502B4u;
label_1502b4:
    // 0x1502b4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1502b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1502b8: 0x0  nop
    ctx->pc = 0x1502b8u;
    // NOP
    // 0x1502bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1502BCu;
    {
        const bool branch_taken_0x1502bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1502bc) {
            ctx->pc = 0x1502D4u;
            goto label_1502d4;
        }
    }
    ctx->pc = 0x1502C4u;
    // 0x1502c4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1502c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1502c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1502cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1502CCu;
    {
        const bool branch_taken_0x1502cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1502D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502CCu;
        // 0x1502d0: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1502cc) {
            ctx->pc = 0x1502E0u;
            goto label_1502e0;
        }
    }
    ctx->pc = 0x1502D4u;
label_1502d4:
    // 0x1502d4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1502d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1502d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1502dc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1502dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1502e0:
    // 0x1502e0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1502e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1502e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1502e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502ec: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1502ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1502f0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1502f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502f4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1502f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1502f8:
    // 0x1502f8: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x1502f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1502fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1502fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150300: 0xc4a100f0  lwc1        $f1, 0xF0($a1)
    ctx->pc = 0x150300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150304: 0x24a700f0  addiu       $a3, $a1, 0xF0
    ctx->pc = 0x150304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    // 0x150308: 0xc4a20100  lwc1        $f2, 0x100($a1)
    ctx->pc = 0x150308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15030c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x15030cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150310: 0x0  nop
    ctx->pc = 0x150310u;
    // NOP
    // 0x150314: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x150314u;
    {
        const bool branch_taken_0x150314 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x150318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150314u;
        // 0x150318: 0x24a60100  addiu       $a2, $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150314) {
            ctx->pc = 0x150320u;
            goto label_150320;
        }
    }
    ctx->pc = 0x15031Cu;
    // 0x15031c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15031cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150320:
    // 0x150320: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x150320u;
    {
        const bool branch_taken_0x150320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150320) {
            ctx->pc = 0x15034Cu;
            goto label_15034c;
        }
    }
    ctx->pc = 0x150328u;
    // 0x150328: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x150328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x15032c: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x15032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150330: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x150330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x150334: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x150334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x150338: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x150338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15033c: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x15033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150340: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x150340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x150344: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x150344u;
    {
        const bool branch_taken_0x150344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150344u;
        // 0x150348: 0xe4600080  swc1        $f0, 0x80($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150344) {
            ctx->pc = 0x150370u;
            goto label_150370;
        }
    }
    ctx->pc = 0x15034Cu;
label_15034c:
    // 0x15034c: 0x0  nop
    ctx->pc = 0x15034cu;
    // NOP
    // 0x150350: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x150350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x150354: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x150354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150358: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x150358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15035c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x15035cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x150360: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x150360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150364: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x150364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150368: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x150368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15036c: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x15036cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_150370:
    // 0x150370: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x150370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x150374: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x150374u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x150378: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x150378u;
    {
        const bool branch_taken_0x150378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150378u;
        // 0x15037c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150378) {
            ctx->pc = 0x1502F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1502f8;
        }
    }
    ctx->pc = 0x150380u;
    // 0x150380: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x150380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x150384: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150384u;
    {
        const bool branch_taken_0x150384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x150388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150384u;
        // 0x150388: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150384) {
            ctx->pc = 0x150394u;
            goto label_150394;
        }
    }
    ctx->pc = 0x15038Cu;
    // 0x15038c: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x15038Cu;
    SET_GPR_U32(ctx, 31, 0x150394u);
    ctx->pc = 0x150390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15038Cu;
    // 0x150390: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135EB0u, 0x15038Cu, 0x150394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150394u;
label_150394:
    // 0x150394: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x150394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150398: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x150398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15039c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15039cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1503a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1503a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1503a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1503a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1503a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1503a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1503ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1503acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1503b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1503B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1503B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503B0u;
        // 0x1503b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1503B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1503B8u;
}
