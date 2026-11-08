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

// Function: FUN_00129520
// Address: 0x129520 - 0x129674
void FUN_00129520_0x129520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00129520_0x129520");
#endif

    switch (ctx->pc) {
        case 0x1295bcu: goto label_1295bc;
        case 0x1295c8u: goto label_1295c8;
        case 0x1295dcu: goto label_1295dc;
        case 0x129654u: goto label_129654;
        default: break;
    }

    ctx->pc = 0x129520u;

    // 0x129520: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x129520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x129524: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x129524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x129528: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x129528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12952c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12952cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x129530: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x129530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x129534: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x129534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x129538: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x129538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x12953c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x129540: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x129540u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x129544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x129548: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x129548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12954c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x129550: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x129550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x129554: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x129554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129558: 0x269000a0  addiu       $s0, $s4, 0xA0
    ctx->pc = 0x129558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x12955c: 0xc48100a0  lwc1        $f1, 0xA0($a0)
    ctx->pc = 0x12955cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129560: 0x269100a4  addiu       $s1, $s4, 0xA4
    ctx->pc = 0x129560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 164));
    // 0x129564: 0x269200a8  addiu       $s2, $s4, 0xA8
    ctx->pc = 0x129564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 168));
    // 0x129568: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x129568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x12956c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12956cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129570: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x129570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x129574: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x129574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x129578: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x129578u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x12957c: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x12957cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x129580: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x129580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129584: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x129584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129588: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x129588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12958c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12958cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x129590: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x129590u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x129594: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x129594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x129598: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x129598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12959c: 0xc48100a8  lwc1        $f1, 0xA8($a0)
    ctx->pc = 0x12959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1295a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1295a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1295a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1295a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1295a8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1295a8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1295ac: 0x0  nop
    ctx->pc = 0x1295acu;
    // NOP
    // 0x1295b0: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x1295b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x1295b4: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x1295B4u;
    SET_GPR_U32(ctx, 31, 0x1295BCu);
    ctx->pc = 0x1295B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1295B4u;
    // 0x1295b8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x1295B4u, 0x1295BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1295BCu;
label_1295bc:
    // 0x1295bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1295bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1295c0: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1295C0u;
    SET_GPR_U32(ctx, 31, 0x1295C8u);
    ctx->pc = 0x1295C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1295C0u;
    // 0x1295c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1295C0u, 0x1295C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1295C8u;
label_1295c8:
    // 0x1295c8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1295c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1295cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1295ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1295d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1295d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1295d4: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1295D4u;
    SET_GPR_U32(ctx, 31, 0x1295DCu);
    ctx->pc = 0x1295D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1295D4u;
    // 0x1295d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1295D4u, 0x1295DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1295DCu;
label_1295dc:
    // 0x1295dc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1295dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1295e0: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1295e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1295e4: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1295e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1295e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1295e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1295ec: 0xc6800070  lwc1        $f0, 0x70($s4)
    ctx->pc = 0x1295ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1295f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1295f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1295f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1295f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1295f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1295f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1295fc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1295fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x129600: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x129600u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
    // 0x129604: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x129604u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x129608: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x129608u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x12960c: 0xe6800070  swc1        $f0, 0x70($s4)
    ctx->pc = 0x12960cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 112), bits); }
    // 0x129610: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x129610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129614: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x129614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129618: 0xc6800074  lwc1        $f0, 0x74($s4)
    ctx->pc = 0x129618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12961c: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x12961cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
    // 0x129620: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x129620u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x129624: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x129624u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x129628: 0xe6800074  swc1        $f0, 0x74($s4)
    ctx->pc = 0x129628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 116), bits); }
    // 0x12962c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x12962cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129630: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x129630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129634: 0xc6800078  lwc1        $f0, 0x78($s4)
    ctx->pc = 0x129634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129638: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x129638u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
    // 0x12963c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x12963cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x129640: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x129640u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x129644: 0x0  nop
    ctx->pc = 0x129644u;
    // NOP
    // 0x129648: 0x0  nop
    ctx->pc = 0x129648u;
    // NOP
    // 0x12964c: 0xc0497f0  jal         func_125FC0
    ctx->pc = 0x12964Cu;
    SET_GPR_U32(ctx, 31, 0x129654u);
    ctx->pc = 0x129650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12964Cu;
    // 0x129650: 0xe6800078  swc1        $f0, 0x78($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x125FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125FC0u, 0x12964Cu, 0x129654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129654u;
label_129654:
    // 0x129654: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x129654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129658: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x129658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12965c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12965cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129660: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x129660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x129664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12966c: 0x3e00008  jr          $ra
    ctx->pc = 0x12966Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12966Cu;
        // 0x129670: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12966Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129674u;
}
