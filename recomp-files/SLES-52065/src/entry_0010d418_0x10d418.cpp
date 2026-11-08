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

// Function: entry_0010d418
// Address: 0x10d418 - 0x10d62c
void entry_0010d418_0x10d418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d418_0x10d418");
#endif

    switch (ctx->pc) {
        case 0x10d418u: goto label_10d418;
        case 0x10d41cu: goto label_10d41c;
        case 0x10d420u: goto label_10d420;
        case 0x10d424u: goto label_10d424;
        case 0x10d428u: goto label_10d428;
        case 0x10d42cu: goto label_10d42c;
        case 0x10d430u: goto label_10d430;
        case 0x10d434u: goto label_10d434;
        case 0x10d438u: goto label_10d438;
        case 0x10d43cu: goto label_10d43c;
        case 0x10d440u: goto label_10d440;
        case 0x10d444u: goto label_10d444;
        case 0x10d448u: goto label_10d448;
        case 0x10d44cu: goto label_10d44c;
        case 0x10d450u: goto label_10d450;
        case 0x10d454u: goto label_10d454;
        case 0x10d458u: goto label_10d458;
        case 0x10d45cu: goto label_10d45c;
        case 0x10d460u: goto label_10d460;
        case 0x10d464u: goto label_10d464;
        case 0x10d468u: goto label_10d468;
        case 0x10d46cu: goto label_10d46c;
        case 0x10d470u: goto label_10d470;
        case 0x10d474u: goto label_10d474;
        case 0x10d478u: goto label_10d478;
        case 0x10d47cu: goto label_10d47c;
        case 0x10d480u: goto label_10d480;
        case 0x10d484u: goto label_10d484;
        case 0x10d488u: goto label_10d488;
        case 0x10d48cu: goto label_10d48c;
        case 0x10d490u: goto label_10d490;
        case 0x10d494u: goto label_10d494;
        case 0x10d498u: goto label_10d498;
        case 0x10d49cu: goto label_10d49c;
        case 0x10d4a0u: goto label_10d4a0;
        case 0x10d4a4u: goto label_10d4a4;
        case 0x10d4a8u: goto label_10d4a8;
        case 0x10d4acu: goto label_10d4ac;
        case 0x10d4b0u: goto label_10d4b0;
        case 0x10d4b4u: goto label_10d4b4;
        case 0x10d4b8u: goto label_10d4b8;
        case 0x10d4bcu: goto label_10d4bc;
        case 0x10d4c0u: goto label_10d4c0;
        case 0x10d4c4u: goto label_10d4c4;
        case 0x10d4c8u: goto label_10d4c8;
        case 0x10d4ccu: goto label_10d4cc;
        case 0x10d4d0u: goto label_10d4d0;
        case 0x10d4d4u: goto label_10d4d4;
        case 0x10d4d8u: goto label_10d4d8;
        case 0x10d4dcu: goto label_10d4dc;
        case 0x10d4e0u: goto label_10d4e0;
        case 0x10d4e4u: goto label_10d4e4;
        case 0x10d4e8u: goto label_10d4e8;
        case 0x10d4ecu: goto label_10d4ec;
        case 0x10d4f0u: goto label_10d4f0;
        case 0x10d4f4u: goto label_10d4f4;
        case 0x10d4f8u: goto label_10d4f8;
        case 0x10d4fcu: goto label_10d4fc;
        case 0x10d500u: goto label_10d500;
        case 0x10d504u: goto label_10d504;
        case 0x10d508u: goto label_10d508;
        case 0x10d50cu: goto label_10d50c;
        case 0x10d510u: goto label_10d510;
        case 0x10d514u: goto label_10d514;
        case 0x10d518u: goto label_10d518;
        case 0x10d51cu: goto label_10d51c;
        case 0x10d520u: goto label_10d520;
        case 0x10d524u: goto label_10d524;
        case 0x10d528u: goto label_10d528;
        case 0x10d52cu: goto label_10d52c;
        case 0x10d530u: goto label_10d530;
        case 0x10d534u: goto label_10d534;
        case 0x10d538u: goto label_10d538;
        case 0x10d53cu: goto label_10d53c;
        case 0x10d540u: goto label_10d540;
        case 0x10d544u: goto label_10d544;
        case 0x10d548u: goto label_10d548;
        case 0x10d54cu: goto label_10d54c;
        case 0x10d550u: goto label_10d550;
        case 0x10d554u: goto label_10d554;
        case 0x10d558u: goto label_10d558;
        case 0x10d55cu: goto label_10d55c;
        case 0x10d560u: goto label_10d560;
        case 0x10d564u: goto label_10d564;
        case 0x10d568u: goto label_10d568;
        case 0x10d56cu: goto label_10d56c;
        case 0x10d570u: goto label_10d570;
        case 0x10d574u: goto label_10d574;
        case 0x10d578u: goto label_10d578;
        case 0x10d57cu: goto label_10d57c;
        case 0x10d580u: goto label_10d580;
        case 0x10d584u: goto label_10d584;
        case 0x10d588u: goto label_10d588;
        case 0x10d58cu: goto label_10d58c;
        case 0x10d590u: goto label_10d590;
        case 0x10d594u: goto label_10d594;
        case 0x10d598u: goto label_10d598;
        case 0x10d59cu: goto label_10d59c;
        case 0x10d5a0u: goto label_10d5a0;
        case 0x10d5a4u: goto label_10d5a4;
        case 0x10d5a8u: goto label_10d5a8;
        case 0x10d5acu: goto label_10d5ac;
        case 0x10d5b0u: goto label_10d5b0;
        case 0x10d5b4u: goto label_10d5b4;
        case 0x10d5b8u: goto label_10d5b8;
        case 0x10d5bcu: goto label_10d5bc;
        case 0x10d5c0u: goto label_10d5c0;
        case 0x10d5c4u: goto label_10d5c4;
        case 0x10d5c8u: goto label_10d5c8;
        case 0x10d5ccu: goto label_10d5cc;
        case 0x10d5d0u: goto label_10d5d0;
        case 0x10d5d4u: goto label_10d5d4;
        case 0x10d5d8u: goto label_10d5d8;
        case 0x10d5dcu: goto label_10d5dc;
        case 0x10d5e0u: goto label_10d5e0;
        case 0x10d5e4u: goto label_10d5e4;
        case 0x10d5e8u: goto label_10d5e8;
        case 0x10d5ecu: goto label_10d5ec;
        case 0x10d5f0u: goto label_10d5f0;
        case 0x10d5f4u: goto label_10d5f4;
        case 0x10d5f8u: goto label_10d5f8;
        case 0x10d5fcu: goto label_10d5fc;
        case 0x10d600u: goto label_10d600;
        case 0x10d604u: goto label_10d604;
        case 0x10d608u: goto label_10d608;
        case 0x10d60cu: goto label_10d60c;
        case 0x10d610u: goto label_10d610;
        case 0x10d614u: goto label_10d614;
        case 0x10d618u: goto label_10d618;
        case 0x10d61cu: goto label_10d61c;
        case 0x10d620u: goto label_10d620;
        case 0x10d624u: goto label_10d624;
        case 0x10d628u: goto label_10d628;
        default: break;
    }

    ctx->pc = 0x10d418u;

label_10d418:
    // 0x10d418: 0xc6202304  lwc1        $f0, 0x2304($s1)
    ctx->pc = 0x10d418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d41c:
    // 0x10d41c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x10d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_10d420:
    // 0x10d420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10d420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d424:
    // 0x10d424: 0x0  nop
    ctx->pc = 0x10d424u;
    // NOP
label_10d428:
    // 0x10d428: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x10d428u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_10d42c:
    // 0x10d42c: 0x0  nop
    ctx->pc = 0x10d42cu;
    // NOP
label_10d430:
    // 0x10d430: 0x0  nop
    ctx->pc = 0x10d430u;
    // NOP
label_10d434:
    // 0x10d434: 0xc0802aa  jal         func_200AA8
label_10d438:
    if (ctx->pc == 0x10D438u) {
        ctx->pc = 0x10D43Cu;
        goto label_10d43c;
    }
    ctx->pc = 0x10D434u;
    SET_GPR_U32(ctx, 31, 0x10D43Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10D434u, 0x10D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D43Cu;
label_10d43c:
    // 0x10d43c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x10d43cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d440:
    // 0x10d440: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x10d440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_10d444:
    // 0x10d444: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x10d444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10d448:
    // 0x10d448: 0xc6202304  lwc1        $f0, 0x2304($s1)
    ctx->pc = 0x10d448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d44c:
    // 0x10d44c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10d44cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10d450:
    // 0x10d450: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x10d450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_10d454:
    // 0x10d454: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10d454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_10d458:
    // 0x10d458: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10d458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d45c:
    // 0x10d45c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10d45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_10d460:
    // 0x10d460: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10d460u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10d464:
    // 0x10d464: 0x46801860  cvt.s.w     $f1, $f3
    ctx->pc = 0x10d464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10d468:
    // 0x10d468: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x10d468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_10d46c:
    // 0x10d46c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x10d46cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_10d470:
    // 0x10d470: 0x0  nop
    ctx->pc = 0x10d470u;
    // NOP
label_10d474:
    // 0x10d474: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10d474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10d478:
    // 0x10d478: 0xc0802aa  jal         func_200AA8
label_10d47c:
    if (ctx->pc == 0x10D47Cu) {
        ctx->pc = 0x10D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D478u;
        // 0x10d47c: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D480u;
        goto label_10d480;
    }
    ctx->pc = 0x10D478u;
    SET_GPR_U32(ctx, 31, 0x10D480u);
    ctx->pc = 0x10D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D478u;
    // 0x10d47c: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10D478u, 0x10D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D480u;
label_10d480:
    // 0x10d480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d484:
    // 0x10d484: 0x0  nop
    ctx->pc = 0x10d484u;
    // NOP
label_10d488:
    // 0x10d488: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10d488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_10d48c:
    // 0x10d48c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x10d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_10d490:
    // 0x10d490: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x10d490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10d494:
    // 0x10d494: 0x0  nop
    ctx->pc = 0x10d494u;
    // NOP
label_10d498:
    // 0x10d498: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x10d498u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_10d49c:
    // 0x10d49c: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x10d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
label_10d4a0:
    // 0x10d4a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d4a4:
    // 0x10d4a4: 0x0  nop
    ctx->pc = 0x10d4a4u;
    // NOP
label_10d4a8:
    // 0x10d4a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10d4a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10d4ac:
    // 0x10d4ac: 0x0  nop
    ctx->pc = 0x10d4acu;
    // NOP
label_10d4b0:
    // 0x10d4b0: 0x0  nop
    ctx->pc = 0x10d4b0u;
    // NOP
label_10d4b4:
    // 0x10d4b4: 0xc0802aa  jal         func_200AA8
label_10d4b8:
    if (ctx->pc == 0x10D4B8u) {
        ctx->pc = 0x10D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4B4u;
        // 0x10d4b8: 0x46020581  sub.s       $f22, $f0, $f2 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D4BCu;
        goto label_10d4bc;
    }
    ctx->pc = 0x10D4B4u;
    SET_GPR_U32(ctx, 31, 0x10D4BCu);
    ctx->pc = 0x10D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D4B4u;
    // 0x10d4b8: 0x46020581  sub.s       $f22, $f0, $f2 (Delay Slot)
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10D4B4u, 0x10D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D4BCu;
label_10d4bc:
    // 0x10d4bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d4c0:
    // 0x10d4c0: 0x3c034e80  lui         $v1, 0x4E80
    ctx->pc = 0x10d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20096 << 16));
label_10d4c4:
    // 0x10d4c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x10d4c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10d4c8:
    // 0x10d4c8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x10d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_10d4cc:
    // 0x10d4cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10d4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_10d4d0:
    // 0x10d4d0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x10d4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d4d4:
    // 0x10d4d4: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x10d4d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_10d4d8:
    // 0x10d4d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10d4dc:
    // 0x10d4dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10d4dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d4e0:
    // 0x10d4e0: 0x0  nop
    ctx->pc = 0x10d4e0u;
    // NOP
label_10d4e4:
    // 0x10d4e4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x10d4e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_10d4e8:
    // 0x10d4e8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x10d4e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_10d4ec:
    // 0x10d4ec: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x10d4ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_10d4f0:
    // 0x10d4f0: 0xe6200230  swc1        $f0, 0x230($s1)
    ctx->pc = 0x10d4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 560), bits); }
label_10d4f4:
    // 0x10d4f4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x10d4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d4f8:
    // 0x10d4f8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x10d4f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_10d4fc:
    // 0x10d4fc: 0xe6200234  swc1        $f0, 0x234($s1)
    ctx->pc = 0x10d4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
label_10d500:
    // 0x10d500: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x10d500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d504:
    // 0x10d504: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x10d504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_10d508:
    // 0x10d508: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10d508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_10d50c:
    // 0x10d50c: 0xe6200238  swc1        $f0, 0x238($s1)
    ctx->pc = 0x10d50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
label_10d510:
    // 0x10d510: 0xc0802aa  jal         func_200AA8
label_10d514:
    if (ctx->pc == 0x10D514u) {
        ctx->pc = 0x10D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D510u;
        // 0x10d514: 0xae22023c  sw          $v0, 0x23C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D518u;
        goto label_10d518;
    }
    ctx->pc = 0x10D510u;
    SET_GPR_U32(ctx, 31, 0x10D518u);
    ctx->pc = 0x10D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D510u;
    // 0x10d514: 0xae22023c  sw          $v0, 0x23C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10D510u, 0x10D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D518u;
label_10d518:
    // 0x10d518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10d518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d51c:
    // 0x10d51c: 0x0  nop
    ctx->pc = 0x10d51cu;
    // NOP
label_10d520:
    // 0x10d520: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10d520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10d524:
    // 0x10d524: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x10d524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_10d528:
    // 0x10d528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d52c:
    // 0x10d52c: 0x0  nop
    ctx->pc = 0x10d52cu;
    // NOP
label_10d530:
    // 0x10d530: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x10d530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10d534:
    // 0x10d534: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x10d534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_10d538:
    // 0x10d538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d53c:
    // 0x10d53c: 0x0  nop
    ctx->pc = 0x10d53cu;
    // NOP
label_10d540:
    // 0x10d540: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10d540u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10d544:
    // 0x10d544: 0x0  nop
    ctx->pc = 0x10d544u;
    // NOP
label_10d548:
    // 0x10d548: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10d548u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_10d54c:
    // 0x10d54c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x10d54cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_10d550:
    // 0x10d550: 0x0  nop
    ctx->pc = 0x10d550u;
    // NOP
label_10d554:
    // 0x10d554: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_10d558:
    if (ctx->pc == 0x10D558u) {
        ctx->pc = 0x10D55Cu;
        goto label_10d55c;
    }
    ctx->pc = 0x10D554u;
    {
        const bool branch_taken_0x10d554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d554) {
            ctx->pc = 0x10D62Cu;
            return;
        }
    }
    ctx->pc = 0x10D55Cu;
label_10d55c:
    // 0x10d55c: 0xc0802aa  jal         func_200AA8
label_10d560:
    if (ctx->pc == 0x10D560u) {
        ctx->pc = 0x10D564u;
        goto label_10d564;
    }
    ctx->pc = 0x10D55Cu;
    SET_GPR_U32(ctx, 31, 0x10D564u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10D55Cu, 0x10D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D564u;
label_10d564:
    // 0x10d564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d568:
    // 0x10d568: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x10d568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_10d56c:
    // 0x10d56c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x10d56cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d570:
    // 0x10d570: 0x26250230  addiu       $a1, $s1, 0x230
    ctx->pc = 0x10d570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
label_10d574:
    // 0x10d574: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x10d574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_10d578:
    // 0x10d578: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x10d578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_10d57c:
    // 0x10d57c: 0x3446cccd  ori         $a2, $v0, 0xCCCD
    ctx->pc = 0x10d57cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_10d580:
    // 0x10d580: 0x3c023eae  lui         $v0, 0x3EAE
    ctx->pc = 0x10d580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
label_10d584:
    // 0x10d584: 0x3443147b  ori         $v1, $v0, 0x147B
    ctx->pc = 0x10d584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_10d588:
    // 0x10d588: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x10d588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_10d58c:
    // 0x10d58c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x10d58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_10d590:
    // 0x10d590: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x10d590u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10d594:
    // 0x10d594: 0xc620230c  lwc1        $f0, 0x230C($s1)
    ctx->pc = 0x10d594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d598:
    // 0x10d598: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x10d598u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_10d59c:
    // 0x10d59c: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x10d59cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_10d5a0:
    // 0x10d5a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10d5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d5a4:
    // 0x10d5a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x10d5a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10d5a8:
    // 0x10d5a8: 0x0  nop
    ctx->pc = 0x10d5a8u;
    // NOP
label_10d5ac:
    // 0x10d5ac: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x10d5acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_10d5b0:
    // 0x10d5b0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x10d5b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_10d5b4:
    // 0x10d5b4: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x10d5b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10d5b8:
    // 0x10d5b8: 0x7a260230  lq          $a2, 0x230($s1)
    ctx->pc = 0x10d5b8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 560)));
label_10d5bc:
    // 0x10d5bc: 0x7e260230  sq          $a2, 0x230($s1)
    ctx->pc = 0x10d5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), GPR_VEC(ctx, 6));
label_10d5c0:
    // 0x10d5c0: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x10d5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_10d5c4:
    // 0x10d5c4: 0x7a260060  lq          $a2, 0x60($s1)
    ctx->pc = 0x10d5c4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 96)));
label_10d5c8:
    // 0x10d5c8: 0x7e260220  sq          $a2, 0x220($s1)
    ctx->pc = 0x10d5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 544), GPR_VEC(ctx, 6));
label_10d5cc:
    // 0x10d5cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10d5ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d5d0:
    // 0x10d5d0: 0xc6210234  lwc1        $f1, 0x234($s1)
    ctx->pc = 0x10d5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10d5d4:
    // 0x10d5d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10d5d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_10d5d8:
    // 0x10d5d8: 0xc0433dc  jal         func_10CF70
label_10d5dc:
    if (ctx->pc == 0x10D5DCu) {
        ctx->pc = 0x10D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5D8u;
        // 0x10d5dc: 0xe6200234  swc1        $f0, 0x234($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D5E0u;
        goto label_10d5e0;
    }
    ctx->pc = 0x10D5D8u;
    SET_GPR_U32(ctx, 31, 0x10D5E0u);
    ctx->pc = 0x10D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D5D8u;
    // 0x10d5dc: 0xe6200234  swc1        $f0, 0x234($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x10D5D8u, 0x10D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D5E0u;
label_10d5e0:
    // 0x10d5e0: 0xe6200240  swc1        $f0, 0x240($s1)
    ctx->pc = 0x10d5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
label_10d5e4:
    // 0x10d5e4: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x10d5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10d5e8:
    // 0x10d5e8: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x10d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d5ec:
    // 0x10d5ec: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x10d5ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_10d5f0:
    // 0x10d5f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10d5f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10d5f4:
    // 0x10d5f4: 0xe6200248  swc1        $f0, 0x248($s1)
    ctx->pc = 0x10d5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
label_10d5f8:
    // 0x10d5f8: 0xae200244  sw          $zero, 0x244($s1)
    ctx->pc = 0x10d5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 0));
label_10d5fc:
    // 0x10d5fc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x10d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10d600:
    // 0x10d600: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10d600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10d604:
    // 0x10d604: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x10d604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_10d608:
    // 0x10d608: 0x320f809  jalr        $t9
label_10d60c:
    if (ctx->pc == 0x10D60Cu) {
        ctx->pc = 0x10D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D608u;
        // 0x10d60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D610u;
        goto label_10d610;
    }
    ctx->pc = 0x10D608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10D610u);
        ctx->pc = 0x10D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D608u;
        // 0x10d60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D608u, 0x10D610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10D610u;
label_10d610:
    // 0x10d610: 0xa220007a  sb          $zero, 0x7A($s1)
    ctx->pc = 0x10d610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 0));
label_10d614:
    // 0x10d614: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10d614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d618:
    // 0x10d618: 0xa2240078  sb          $a0, 0x78($s1)
    ctx->pc = 0x10d618u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 4));
label_10d61c:
    // 0x10d61c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10d620:
    // 0x10d620: 0xa624024e  sh          $a0, 0x24E($s1)
    ctx->pc = 0x10d620u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 4));
label_10d624:
    // 0x10d624: 0x1000006a  b           . + 4 + (0x6A << 2)
label_10d628:
    if (ctx->pc == 0x10D628u) {
        ctx->pc = 0x10D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D624u;
        // 0x10d628: 0xa623024e  sh          $v1, 0x24E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D62Cu;
        goto label_fallthrough_0x10d624;
    }
    ctx->pc = 0x10D624u;
    {
        const bool branch_taken_0x10d624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D624u;
        // 0x10d628: 0xa623024e  sh          $v1, 0x24E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d624) {
            ctx->pc = 0x10D7D0u;
            return;
        }
    }
label_fallthrough_0x10d624:
    ctx->pc = 0x10D62Cu;
}
