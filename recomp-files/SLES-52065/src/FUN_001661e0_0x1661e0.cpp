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

// Function: FUN_001661e0
// Address: 0x1661e0 - 0x166320
void FUN_001661e0_0x1661e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001661e0_0x1661e0");
#endif

    switch (ctx->pc) {
        case 0x16630cu: goto label_16630c;
        default: break;
    }

    ctx->pc = 0x1661e0u;

    // 0x1661e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1661e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1661e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1661e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1661e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1661e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1661ec: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x1661ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1661f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1661F0u;
    {
        const bool branch_taken_0x1661f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661F0u;
        // 0x1661f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661f0) {
            ctx->pc = 0x166218u;
            goto label_166218;
        }
    }
    ctx->pc = 0x1661F8u;
    // 0x1661f8: 0x86020222  lh          $v0, 0x222($s0)
    ctx->pc = 0x1661f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x1661fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1661FCu;
    {
        const bool branch_taken_0x1661fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1661fc) {
            ctx->pc = 0x166210u;
            goto label_166210;
        }
    }
    ctx->pc = 0x166204u;
    // 0x166204: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x166204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x166208: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x166208u;
    {
        const bool branch_taken_0x166208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166208u;
        // 0x16620c: 0xa6020222  sh          $v0, 0x222($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166208) {
            ctx->pc = 0x166270u;
            goto label_166270;
        }
    }
    ctx->pc = 0x166210u;
label_166210:
    // 0x166210: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x166210u;
    {
        const bool branch_taken_0x166210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166210u;
        // 0x166214: 0xa6000224  sh          $zero, 0x224($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166210) {
            ctx->pc = 0x166270u;
            goto label_166270;
        }
    }
    ctx->pc = 0x166218u;
label_166218:
    // 0x166218: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x166218u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x16621c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16621Cu;
    {
        const bool branch_taken_0x16621c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16621c) {
            ctx->pc = 0x166270u;
            goto label_166270;
        }
    }
    ctx->pc = 0x166224u;
    // 0x166224: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166224u;
    {
        const bool branch_taken_0x166224 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x166224) {
            ctx->pc = 0x166238u;
            goto label_166238;
        }
    }
    ctx->pc = 0x16622Cu;
    // 0x16622c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x166230: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x166230u;
    {
        const bool branch_taken_0x166230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166230u;
        // 0x166234: 0xa6020226  sh          $v0, 0x226($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166230) {
            ctx->pc = 0x166270u;
            goto label_166270;
        }
    }
    ctx->pc = 0x166238u;
label_166238:
    // 0x166238: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x166238u;
    {
        const bool branch_taken_0x166238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166238) {
            ctx->pc = 0x166270u;
            goto label_166270;
        }
    }
    ctx->pc = 0x166240u;
    // 0x166240: 0x8602022e  lh          $v0, 0x22E($s0)
    ctx->pc = 0x166240u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 558)));
    // 0x166244: 0xa6020226  sh          $v0, 0x226($s0)
    ctx->pc = 0x166244u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 2));
    // 0x166248: 0x86020220  lh          $v0, 0x220($s0)
    ctx->pc = 0x166248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x16624c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16624Cu;
    {
        const bool branch_taken_0x16624c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x166250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16624Cu;
        // 0x166250: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16624c) {
            ctx->pc = 0x16626Cu;
            goto label_16626c;
        }
    }
    ctx->pc = 0x166254u;
    // 0x166254: 0xa6030220  sh          $v1, 0x220($s0)
    ctx->pc = 0x166254u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x166258: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16625c: 0x86030232  lh          $v1, 0x232($s0)
    ctx->pc = 0x16625cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x166260: 0xa6030222  sh          $v1, 0x222($s0)
    ctx->pc = 0x166260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 3));
    // 0x166264: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x166264u;
    {
        const bool branch_taken_0x166264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166264u;
        // 0x166268: 0xa6020224  sh          $v0, 0x224($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166264) {
            ctx->pc = 0x166270u;
            goto label_166270;
        }
    }
    ctx->pc = 0x16626Cu;
label_16626c:
    // 0x16626c: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x16626cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
label_166270:
    // 0x166270: 0x86050224  lh          $a1, 0x224($s0)
    ctx->pc = 0x166270u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x166274: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x166274u;
    {
        const bool branch_taken_0x166274 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x166274) {
            ctx->pc = 0x16628Cu;
            goto label_16628c;
        }
    }
    ctx->pc = 0x16627Cu;
    // 0x16627c: 0x86020234  lh          $v0, 0x234($s0)
    ctx->pc = 0x16627cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x166280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166284: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x166284u;
    {
        const bool branch_taken_0x166284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166284u;
        // 0x166288: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166284) {
            ctx->pc = 0x16629Cu;
            goto label_16629c;
        }
    }
    ctx->pc = 0x16628Cu;
label_16628c:
    // 0x16628c: 0x86020232  lh          $v0, 0x232($s0)
    ctx->pc = 0x16628cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x166290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166294: 0x0  nop
    ctx->pc = 0x166294u;
    // NOP
    // 0x166298: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x166298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_16629c:
    // 0x16629c: 0x86030222  lh          $v1, 0x222($s0)
    ctx->pc = 0x16629cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x1662a0: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x1662a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x1662a4: 0x8604022c  lh          $a0, 0x22C($s0)
    ctx->pc = 0x1662a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1662a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1662a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1662ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1662acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1662b0: 0xc6050228  lwc1        $f5, 0x228($s0)
    ctx->pc = 0x1662b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1662b4: 0x86020220  lh          $v0, 0x220($s0)
    ctx->pc = 0x1662b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1662b8: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1662b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1662bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1662bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1662c0: 0x0  nop
    ctx->pc = 0x1662c0u;
    // NOP
    // 0x1662c4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1662c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1662c8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1662c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1662cc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1662ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1662d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1662d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1662d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1662d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1662d8: 0x46041103  div.s       $f4, $f2, $f4
    ctx->pc = 0x1662d8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[2], ctx->f[4]); }
    // 0x1662dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1662dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1662e0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1662e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1662e4: 0x46032883  div.s       $f2, $f5, $f3
    ctx->pc = 0x1662e4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x1662e8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1662e8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1662ec: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1662ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1662f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1662f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1662f4: 0xe60001c4  swc1        $f0, 0x1C4($s0)
    ctx->pc = 0x1662f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
    // 0x1662f8: 0xc6000228  lwc1        $f0, 0x228($s0)
    ctx->pc = 0x1662f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1662fc: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x1662fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x166300: 0xc60001c4  lwc1        $f0, 0x1C4($s0)
    ctx->pc = 0x166300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166304: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x166304u;
    SET_GPR_U32(ctx, 31, 0x16630Cu);
    ctx->pc = 0x166308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166304u;
    // 0x166308: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x166304u, 0x16630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16630Cu;
label_16630c:
    // 0x16630c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16630cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x166310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166318: 0x3e00008  jr          $ra
    ctx->pc = 0x166318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166318u;
        // 0x16631c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166320u;
}
