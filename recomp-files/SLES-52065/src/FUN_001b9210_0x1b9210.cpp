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

// Function: FUN_001b9210
// Address: 0x1b9210 - 0x1b95e8
void FUN_001b9210_0x1b9210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b9210_0x1b9210");
#endif

    switch (ctx->pc) {
        case 0x1b9270u: goto label_1b9270;
        case 0x1b9294u: goto label_1b9294;
        case 0x1b92acu: goto label_1b92ac;
        case 0x1b92bcu: goto label_1b92bc;
        case 0x1b9494u: goto label_1b9494;
        case 0x1b94a8u: goto label_1b94a8;
        case 0x1b951cu: goto label_1b951c;
        case 0x1b9530u: goto label_1b9530;
        case 0x1b9544u: goto label_1b9544;
        case 0x1b9554u: goto label_1b9554;
        case 0x1b955cu: goto label_1b955c;
        case 0x1b9578u: goto label_1b9578;
        case 0x1b958cu: goto label_1b958c;
        case 0x1b95a8u: goto label_1b95a8;
        default: break;
    }

    ctx->pc = 0x1b9210u;

    // 0x1b9210: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b9210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b9214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b9214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b9218: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b9218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b921c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b921cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b9220: 0x908300c2  lbu         $v1, 0xC2($a0)
    ctx->pc = 0x1b9220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x1b9224: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B9224u;
    {
        const bool branch_taken_0x1b9224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9224u;
        // 0x1b9228: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9224) {
            ctx->pc = 0x1B92F0u;
            goto label_1b92f0;
        }
    }
    ctx->pc = 0x1B922Cu;
    // 0x1b922c: 0xc60400e0  lwc1        $f4, 0xE0($s0)
    ctx->pc = 0x1b922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b9230: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1b9230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1b9234: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b9234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9238: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1b9238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x1b923c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b923cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9240: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1b9240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1b9244: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b9244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9248: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1b9248u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1b924c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1b924cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1b9250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9254: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b9254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b9258: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b925c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b925cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9260: 0x0  nop
    ctx->pc = 0x1b9260u;
    // NOP
    // 0x1b9264: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b9264u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b9268: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9268u;
    SET_GPR_U32(ctx, 31, 0x1B9270u);
    ctx->pc = 0x1B926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9268u;
    // 0x1b926c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9268u, 0x1B9270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9270u;
label_1b9270:
    // 0x1b9270: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1b9270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1b9274: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1b9274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1b9278: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b9278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1b927c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b927cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9280: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9284: 0x24a52f00  addiu       $a1, $a1, 0x2F00
    ctx->pc = 0x1b9284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12032));
    // 0x1b9288: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b9288u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b928c: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1B928Cu;
    SET_GPR_U32(ctx, 31, 0x1B9294u);
    ctx->pc = 0x1B9290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B928Cu;
    // 0x1b9290: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1B928Cu, 0x1B9294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9294u;
label_1b9294:
    // 0x1b9294: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b9294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9298: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b9298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b929c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b929cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b92a0: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x1b92a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1b92a4: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1B92A4u;
    SET_GPR_U32(ctx, 31, 0x1B92ACu);
    ctx->pc = 0x1B92A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92A4u;
    // 0x1b92a8: 0x46140301  sub.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1B92A4u, 0x1B92ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B92ACu;
label_1b92ac:
    // 0x1b92ac: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1b92acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1b92b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b92b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b92b4: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1B92B4u;
    SET_GPR_U32(ctx, 31, 0x1B92BCu);
    ctx->pc = 0x1B92B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92B4u;
    // 0x1b92b8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1B92B4u, 0x1B92BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B92BCu;
label_1b92bc:
    // 0x1b92bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b92c0: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x1b92c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    // 0x1b92c4: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1b92c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b92c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b92c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b92cc: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1b92ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x1b92d0: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1b92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b92d4: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x1b92d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1b92d8: 0x146000be  bnez        $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x1B92D8u;
    {
        const bool branch_taken_0x1b92d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b92d8) {
            ctx->pc = 0x1B95D4u;
            goto label_1b95d4;
        }
    }
    ctx->pc = 0x1B92E0u;
    // 0x1b92e0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b92e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b92e4: 0xa20000c2  sb          $zero, 0xC2($s0)
    ctx->pc = 0x1b92e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 194), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b92e8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1B92E8u;
    {
        const bool branch_taken_0x1b92e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92E8u;
        // 0x1b92ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92e8) {
            ctx->pc = 0x1B95D8u;
            goto label_1b95d8;
        }
    }
    ctx->pc = 0x1B92F0u;
label_1b92f0:
    // 0x1b92f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b92f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b92f4: 0x8023f458  lb          $v1, -0xBA8($at)
    ctx->pc = 0x1b92f4u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36F458u));
    // 0x1b92f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B92F8u;
    {
        const bool branch_taken_0x1b92f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b92f8) {
            ctx->pc = 0x1B9318u;
            goto label_1b9318;
        }
    }
    ctx->pc = 0x1B9300u;
    // 0x1b9300: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b9300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b9304: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9308: 0xac24f450  sw          $a0, -0xBB0($at)
    ctx->pc = 0x1b9308u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F450u, _value); } while (0);
    // 0x1b930c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9310: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9314: 0xa023f458  sb          $v1, -0xBA8($at)
    ctx->pc = 0x1b9314u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F458u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F458u, _value); } while (0);
label_1b9318:
    // 0x1b9318: 0x920300c3  lbu         $v1, 0xC3($s0)
    ctx->pc = 0x1b9318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 195)));
    // 0x1b931c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B931Cu;
    {
        const bool branch_taken_0x1b931c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b931c) {
            ctx->pc = 0x1B93CCu;
            goto label_1b93cc;
        }
    }
    ctx->pc = 0x1B9324u;
    // 0x1b9324: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9328: 0xc420f450  lwc1        $f0, -0xBB0($at)
    ctx->pc = 0x1b9328u;
    { uint32_t bits = FAST_READ32(0x36F450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b932c: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x1b932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9330: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9334: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b9334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b9338: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b9338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b933c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1b933cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1b9340: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1b9340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1b9344: 0xc4212f50  lwc1        $f1, 0x2F50($at)
    ctx->pc = 0x1b9344u;
    { uint32_t bits = FAST_READ32(0x212F50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9348: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1b9348u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x1b934c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b934cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9350: 0x0  nop
    ctx->pc = 0x1b9350u;
    // NOP
    // 0x1b9354: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9354u;
    {
        const bool branch_taken_0x1b9354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9354u;
        // 0x1b9358: 0x27a30078  addiu       $v1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9354) {
            ctx->pc = 0x1B936Cu;
            goto label_1b936c;
        }
    }
    ctx->pc = 0x1B935Cu;
    // 0x1b935c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1b935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1b9360: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9360u;
    {
        const bool branch_taken_0x1b9360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9360u;
        // 0x1b9364: 0x24632f50  addiu       $v1, $v1, 0x2F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9360) {
            ctx->pc = 0x1B936Cu;
            goto label_1b936c;
        }
    }
    ctx->pc = 0x1B9368u;
    // 0x1b9368: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x1b9368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1b936c:
    // 0x1b936c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9370: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9374: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1b9374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1b9378: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b937c: 0xc60200c8  lwc1        $f2, 0xC8($s0)
    ctx->pc = 0x1b937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9380: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1b9380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9384: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1b9384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9388: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x1b9388u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1b938c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b938cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b9390: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b9390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b9394: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x1b9394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x1b9398: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1b9398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b939c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b939cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b93a0: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1b93a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x1b93a4: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x1b93a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b93a8: 0x8c23f450  lw          $v1, -0xBB0($at)
    ctx->pc = 0x1b93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F450u));
    // 0x1b93ac: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1b93acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b93b0: 0x14600088  bnez        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x1B93B0u;
    {
        const bool branch_taken_0x1b93b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b93b0) {
            ctx->pc = 0x1B95D4u;
            goto label_1b95d4;
        }
    }
    ctx->pc = 0x1B93B8u;
    // 0x1b93b8: 0xe60300dc  swc1        $f3, 0xDC($s0)
    ctx->pc = 0x1b93b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x1b93bc: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b93bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b93c0: 0xa20000c3  sb          $zero, 0xC3($s0)
    ctx->pc = 0x1b93c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 195), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b93c4: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1B93C4u;
    {
        const bool branch_taken_0x1b93c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b93c4) {
            ctx->pc = 0x1B95D4u;
            goto label_1b95d4;
        }
    }
    ctx->pc = 0x1B93CCu;
label_1b93cc:
    // 0x1b93cc: 0x920300c4  lbu         $v1, 0xC4($s0)
    ctx->pc = 0x1b93ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1b93d0: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B93D0u;
    {
        const bool branch_taken_0x1b93d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b93d0) {
            ctx->pc = 0x1B947Cu;
            goto label_1b947c;
        }
    }
    ctx->pc = 0x1B93D8u;
    // 0x1b93d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b93d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b93dc: 0xc420f450  lwc1        $f0, -0xBB0($at)
    ctx->pc = 0x1b93dcu;
    { uint32_t bits = FAST_READ32(0x36F450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b93e0: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x1b93e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b93e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b93e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b93e8: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b93e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b93ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b93ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b93f0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1b93f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1b93f4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1b93f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1b93f8: 0xc4212f58  lwc1        $f1, 0x2F58($at)
    ctx->pc = 0x1b93f8u;
    { uint32_t bits = FAST_READ32(0x212F58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b93fc: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1b93fcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x1b9400: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9404: 0x0  nop
    ctx->pc = 0x1b9404u;
    // NOP
    // 0x1b9408: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9408u;
    {
        const bool branch_taken_0x1b9408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9408u;
        // 0x1b940c: 0x27a3007c  addiu       $v1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9408) {
            ctx->pc = 0x1B9420u;
            goto label_1b9420;
        }
    }
    ctx->pc = 0x1B9410u;
    // 0x1b9410: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1b9410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1b9414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9414u;
    {
        const bool branch_taken_0x1b9414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9414u;
        // 0x1b9418: 0x24632f58  addiu       $v1, $v1, 0x2F58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9414) {
            ctx->pc = 0x1B9420u;
            goto label_1b9420;
        }
    }
    ctx->pc = 0x1B941Cu;
    // 0x1b941c: 0x27a3007c  addiu       $v1, $sp, 0x7C
    ctx->pc = 0x1b941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_1b9420:
    // 0x1b9420: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b9420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9424: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9428: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b942c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1b942cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1b9430: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1b9430u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1b9434: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9438: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x1b9438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b943c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1b943cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1b9440: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b9440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b9444: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x1b9444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x1b9448: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1b9448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b944c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b9450: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1b9450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x1b9454: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x1b9454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b9458: 0x8c23f450  lw          $v1, -0xBB0($at)
    ctx->pc = 0x1b9458u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F450u));
    // 0x1b945c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1b945cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b9460: 0x1460005c  bnez        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1B9460u;
    {
        const bool branch_taken_0x1b9460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9460) {
            ctx->pc = 0x1B95D4u;
            goto label_1b95d4;
        }
    }
    ctx->pc = 0x1B9468u;
    // 0x1b9468: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x1b9468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x1b946c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b946cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b9470: 0xa20000c4  sb          $zero, 0xC4($s0)
    ctx->pc = 0x1b9470u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9474: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1B9474u;
    {
        const bool branch_taken_0x1b9474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9474) {
            ctx->pc = 0x1B95D4u;
            goto label_1b95d4;
        }
    }
    ctx->pc = 0x1B947Cu;
label_1b947c:
    // 0x1b947c: 0x920200c1  lbu         $v0, 0xC1($s0)
    ctx->pc = 0x1b947cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 193)));
    // 0x1b9480: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9480u;
    {
        const bool branch_taken_0x1b9480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9480u;
        // 0x1b9484: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9480) {
            ctx->pc = 0x1B94A0u;
            goto label_1b94a0;
        }
    }
    ctx->pc = 0x1B9488u;
    // 0x1b9488: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1b9488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1b948c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1B948Cu;
    SET_GPR_U32(ctx, 31, 0x1B9494u);
    ctx->pc = 0x1B9490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B948Cu;
    // 0x1b9490: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1B948Cu, 0x1B9494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9494u;
label_1b9494:
    // 0x1b9494: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1B9494u;
    {
        const bool branch_taken_0x1b9494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9494) {
            ctx->pc = 0x1B95D4u;
            goto label_1b95d4;
        }
    }
    ctx->pc = 0x1B949Cu;
    // 0x1b949c: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1b949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1b94a0:
    // 0x1b94a0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1B94A0u;
    SET_GPR_U32(ctx, 31, 0x1B94A8u);
    ctx->pc = 0x1B94A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94A0u;
    // 0x1b94a4: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1B94A0u, 0x1B94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94A8u;
label_1b94a8:
    // 0x1b94a8: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x1b94a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b94ac: 0x28a2001e  slti        $v0, $a1, 0x1E
    ctx->pc = 0x1b94acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1b94b0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B94B0u;
    {
        const bool branch_taken_0x1b94b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94B0u;
        // 0x1b94b4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94b0) {
            ctx->pc = 0x1B94BCu;
            goto label_1b94bc;
        }
    }
    ctx->pc = 0x1B94B8u;
    // 0x1b94b8: 0x24a3ffe2  addiu       $v1, $a1, -0x1E
    ctx->pc = 0x1b94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967266));
label_1b94bc:
    // 0x1b94bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b94bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b94c0: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x1b94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x1b94c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b94c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b94c8: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x1b94c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x1b94cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b94ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b94d0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b94d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1b94d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b94d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b94d8: 0x28a1000f  slti        $at, $a1, 0xF
    ctx->pc = 0x1b94d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1b94dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b94dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b94e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b94e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b94e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b94e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b94e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b94e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b94ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b94ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b94f0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1b94f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b94f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b94f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b94f8: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B94F8u;
    {
        const bool branch_taken_0x1b94f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94F8u;
        // 0x1b94fc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94f8) {
            ctx->pc = 0x1B9584u;
            goto label_1b9584;
        }
    }
    ctx->pc = 0x1B9500u;
    // 0x1b9500: 0x0  nop
    ctx->pc = 0x1b9500u;
    // NOP
    // 0x1b9504: 0x0  nop
    ctx->pc = 0x1b9504u;
    // NOP
    // 0x1b9508: 0x4602a303  div.s       $f12, $f20, $f2
    ctx->pc = 0x1b9508u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
    // 0x1b950c: 0x0  nop
    ctx->pc = 0x1b950cu;
    // NOP
    // 0x1b9510: 0x0  nop
    ctx->pc = 0x1b9510u;
    // NOP
    // 0x1b9514: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9514u;
    SET_GPR_U32(ctx, 31, 0x1B951Cu);
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9514u, 0x1B951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B951Cu;
label_1b951c:
    // 0x1b951c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1b951cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1b9520: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b9520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b9524: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b9524u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1b9528: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1B9528u;
    SET_GPR_U32(ctx, 31, 0x1B9530u);
    ctx->pc = 0x1B952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9528u;
    // 0x1b952c: 0x24a52f00  addiu       $a1, $a1, 0x2F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1B9528u, 0x1B9530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9530u;
label_1b9530:
    // 0x1b9530: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b9530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9534: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b9534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b9538: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b953c: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1B953Cu;
    SET_GPR_U32(ctx, 31, 0x1B9544u);
    ctx->pc = 0x1B9540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B953Cu;
    // 0x1b9540: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1B953Cu, 0x1B9544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9544u;
label_1b9544:
    // 0x1b9544: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1b9544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1b9548: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1b9548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b954c: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1B954Cu;
    SET_GPR_U32(ctx, 31, 0x1B9554u);
    ctx->pc = 0x1B9550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B954Cu;
    // 0x1b9550: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1B954Cu, 0x1B9554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9554u;
label_1b9554:
    // 0x1b9554: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9554u;
    SET_GPR_U32(ctx, 31, 0x1B955Cu);
    ctx->pc = 0x1B9558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9554u;
    // 0x1b9558: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9554u, 0x1B955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B955Cu;
label_1b955c:
    // 0x1b955c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b955cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9560: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1b9560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1b9564: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9568: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b9568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b956c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b956cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b9570: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1B9570u;
    SET_GPR_U32(ctx, 31, 0x1B9578u);
    ctx->pc = 0x1B9574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9570u;
    // 0x1b9574: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1B9570u, 0x1B9578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9578u;
label_1b9578:
    // 0x1b9578: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b957c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B957Cu;
    {
        const bool branch_taken_0x1b957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B957Cu;
        // 0x1b9580: 0xae0300bc  sw          $v1, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b957c) {
            ctx->pc = 0x1B95B0u;
            goto label_1b95b0;
        }
    }
    ctx->pc = 0x1B9584u;
label_1b9584:
    // 0x1b9584: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9584u;
    SET_GPR_U32(ctx, 31, 0x1B958Cu);
    ctx->pc = 0x1B9588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9584u;
    // 0x1b9588: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9584u, 0x1B958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B958Cu;
label_1b958c:
    // 0x1b958c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b958cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9590: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1b9590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1b9594: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9598: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b9598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b959c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b959cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b95a0: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1B95A0u;
    SET_GPR_U32(ctx, 31, 0x1B95A8u);
    ctx->pc = 0x1B95A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95A0u;
    // 0x1b95a4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1B95A0u, 0x1B95A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B95A8u;
label_1b95a8:
    // 0x1b95a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b95a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b95ac: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x1b95acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_1b95b0:
    // 0x1b95b0: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1b95b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b95b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b95b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b95b8: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1b95b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x1b95bc: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1b95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b95c0: 0x2863003c  slti        $v1, $v1, 0x3C
    ctx->pc = 0x1b95c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1b95c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B95C4u;
    {
        const bool branch_taken_0x1b95c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b95c4) {
            ctx->pc = 0x1B95D4u;
            goto label_1b95d4;
        }
    }
    ctx->pc = 0x1B95CCu;
    // 0x1b95cc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1b95ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b95d0: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1b95d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
label_1b95d4:
    // 0x1b95d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b95d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b95d8:
    // 0x1b95d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b95d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b95dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b95dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b95e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B95E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95E0u;
        // 0x1b95e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B95E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B95E8u;
}
