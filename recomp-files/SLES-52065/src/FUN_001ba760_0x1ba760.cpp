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

// Function: FUN_001ba760
// Address: 0x1ba760 - 0x1ba8e0
void FUN_001ba760_0x1ba760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ba760_0x1ba760");
#endif

    switch (ctx->pc) {
        case 0x1ba8d8u: goto label_1ba8d8;
        default: break;
    }

    ctx->pc = 0x1ba760u;

    // 0x1ba760: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x1ba760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1ba764: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA764u;
    {
        const bool branch_taken_0x1ba764 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ba764) {
            ctx->pc = 0x1BA778u;
            goto label_1ba778;
        }
    }
    ctx->pc = 0x1BA76Cu;
    // 0x1ba76c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ba76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ba770: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1BA770u;
    {
        const bool branch_taken_0x1ba770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA770u;
        // 0x1ba774: 0xac8300f0  sw          $v1, 0xF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba770) {
            ctx->pc = 0x1BA8D8u;
            goto label_1ba8d8;
        }
    }
    ctx->pc = 0x1BA778u;
label_1ba778:
    // 0x1ba778: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x1ba778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x1ba77c: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x1ba77cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ba780: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x1BA780u;
    {
        const bool branch_taken_0x1ba780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA780u;
        // 0x1ba784: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba780) {
            ctx->pc = 0x1BA8BCu;
            goto label_1ba8bc;
        }
    }
    ctx->pc = 0x1BA788u;
    // 0x1ba788: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ba788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ba78c: 0x24a51050  addiu       $a1, $a1, 0x1050
    ctx->pc = 0x1ba78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4176));
    // 0x1ba790: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ba790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ba794: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ba794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ba798: 0x600008  jr          $v1
    ctx->pc = 0x1BA798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA7A0u: goto label_1ba7a0;
            case 0x1BA7C4u: goto label_1ba7c4;
            case 0x1BA7E8u: goto label_1ba7e8;
            case 0x1BA80Cu: goto label_1ba80c;
            case 0x1BA830u: goto label_1ba830;
            case 0x1BA854u: goto label_1ba854;
            case 0x1BA878u: goto label_1ba878;
            case 0x1BA89Cu: goto label_1ba89c;
            case 0x1BA8BCu: goto label_1ba8bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA798u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BA7A0u;
label_1ba7a0:
    // 0x1ba7a0: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7a4: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba7a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba7ac: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ba7b0: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7b4: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x1ba7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba7b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba7bc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1BA7BCu;
    {
        const bool branch_taken_0x1ba7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7BCu;
        // 0x1ba7c0: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7bc) {
            ctx->pc = 0x1BA8BCu;
            goto label_1ba8bc;
        }
    }
    ctx->pc = 0x1BA7C4u;
label_1ba7c4:
    // 0x1ba7c4: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7c8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba7cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba7ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba7d0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ba7d4: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7d8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x1ba7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba7dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba7dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba7e0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1BA7E0u;
    {
        const bool branch_taken_0x1ba7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7E0u;
        // 0x1ba7e4: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7e0) {
            ctx->pc = 0x1BA8BCu;
            goto label_1ba8bc;
        }
    }
    ctx->pc = 0x1BA7E8u;
label_1ba7e8:
    // 0x1ba7e8: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7ec: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba7f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba7f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba7f4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ba7f8: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7fc: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x1ba7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba800: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba804: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1BA804u;
    {
        const bool branch_taken_0x1ba804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA804u;
        // 0x1ba808: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba804) {
            ctx->pc = 0x1BA8BCu;
            goto label_1ba8bc;
        }
    }
    ctx->pc = 0x1BA80Cu;
label_1ba80c:
    // 0x1ba80c: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba810: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba814: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba818: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ba81c: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba820: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x1ba820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba824: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba828: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1BA828u;
    {
        const bool branch_taken_0x1ba828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA828u;
        // 0x1ba82c: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba828) {
            ctx->pc = 0x1BA8BCu;
            goto label_1ba8bc;
        }
    }
    ctx->pc = 0x1BA830u;
label_1ba830:
    // 0x1ba830: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba834: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba838: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba83c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba840: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba844: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1ba844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba848: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba84c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1BA84Cu;
    {
        const bool branch_taken_0x1ba84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA84Cu;
        // 0x1ba850: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba84c) {
            ctx->pc = 0x1BA8BCu;
            goto label_1ba8bc;
        }
    }
    ctx->pc = 0x1BA854u;
label_1ba854:
    // 0x1ba854: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba858: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba85c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba85cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba860: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba864: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba868: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1ba868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba86c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba86cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba870: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BA870u;
    {
        const bool branch_taken_0x1ba870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA870u;
        // 0x1ba874: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba870) {
            ctx->pc = 0x1BA8BCu;
            goto label_1ba8bc;
        }
    }
    ctx->pc = 0x1BA878u;
label_1ba878:
    // 0x1ba878: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba87c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba880: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba884: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba888: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba88c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1ba88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba890: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba894: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA894u;
    {
        const bool branch_taken_0x1ba894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA894u;
        // 0x1ba898: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba894) {
            ctx->pc = 0x1BA8BCu;
            goto label_1ba8bc;
        }
    }
    ctx->pc = 0x1BA89Cu;
label_1ba89c:
    // 0x1ba89c: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba8a0: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba8a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba8a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba8a8: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba8ac: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba8b0: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1ba8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba8b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba8b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba8b8: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x1ba8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_1ba8bc:
    // 0x1ba8bc: 0x8c8300ec  lw          $v1, 0xEC($a0)
    ctx->pc = 0x1ba8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1ba8c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ba8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ba8c4: 0xac8300ec  sw          $v1, 0xEC($a0)
    ctx->pc = 0x1ba8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
    // 0x1ba8c8: 0x8c8300ec  lw          $v1, 0xEC($a0)
    ctx->pc = 0x1ba8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1ba8cc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA8CCu;
    {
        const bool branch_taken_0x1ba8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba8cc) {
            ctx->pc = 0x1BA8D8u;
            goto label_1ba8d8;
        }
    }
    ctx->pc = 0x1BA8D4u;
    // 0x1ba8d4: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x1ba8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
label_1ba8d8:
    // 0x1ba8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA8E0u;
}
