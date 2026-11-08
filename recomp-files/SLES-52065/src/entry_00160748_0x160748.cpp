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

// Function: entry_00160748
// Address: 0x160748 - 0x16087c
void entry_00160748_0x160748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160748_0x160748");
#endif

    ctx->pc = 0x160748u;

label_160748:
    // 0x160748: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x160748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16074c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x16074cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x160750: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x160750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160754: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x160754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x160758: 0x24c60280  addiu       $a2, $a2, 0x280
    ctx->pc = 0x160758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 640));
    // 0x16075c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16075cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160760: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x160760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x160764: 0xc4e10024  lwc1        $f1, 0x24($a3)
    ctx->pc = 0x160764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160768: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x160768u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16076c: 0xe4e10024  swc1        $f1, 0x24($a3)
    ctx->pc = 0x16076cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x160770: 0xc4e10028  lwc1        $f1, 0x28($a3)
    ctx->pc = 0x160770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160774: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x160774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160778: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x160778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x16077c: 0xc4e10070  lwc1        $f1, 0x70($a3)
    ctx->pc = 0x16077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160780: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x160780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160784: 0xe4e10070  swc1        $f1, 0x70($a3)
    ctx->pc = 0x160784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 112), bits); }
    // 0x160788: 0xc4e10074  lwc1        $f1, 0x74($a3)
    ctx->pc = 0x160788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16078c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16078cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160790: 0xe4e10074  swc1        $f1, 0x74($a3)
    ctx->pc = 0x160790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 116), bits); }
    // 0x160794: 0xc4e10078  lwc1        $f1, 0x78($a3)
    ctx->pc = 0x160794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160798: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x160798u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16079c: 0xe4e10078  swc1        $f1, 0x78($a3)
    ctx->pc = 0x16079cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 120), bits); }
    // 0x1607a0: 0xc4e100c0  lwc1        $f1, 0xC0($a3)
    ctx->pc = 0x1607a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1607a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1607a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1607a8: 0xe4e100c0  swc1        $f1, 0xC0($a3)
    ctx->pc = 0x1607a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 192), bits); }
    // 0x1607ac: 0xc4e100c4  lwc1        $f1, 0xC4($a3)
    ctx->pc = 0x1607acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1607b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1607b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1607b4: 0xe4e100c4  swc1        $f1, 0xC4($a3)
    ctx->pc = 0x1607b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 196), bits); }
    // 0x1607b8: 0xc4e100c8  lwc1        $f1, 0xC8($a3)
    ctx->pc = 0x1607b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1607bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1607bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1607c0: 0xe4e100c8  swc1        $f1, 0xC8($a3)
    ctx->pc = 0x1607c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 200), bits); }
    // 0x1607c4: 0xc4e10110  lwc1        $f1, 0x110($a3)
    ctx->pc = 0x1607c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1607c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1607c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1607cc: 0xe4e10110  swc1        $f1, 0x110($a3)
    ctx->pc = 0x1607ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 272), bits); }
    // 0x1607d0: 0xc4e10114  lwc1        $f1, 0x114($a3)
    ctx->pc = 0x1607d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1607d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1607d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1607d8: 0xe4e10114  swc1        $f1, 0x114($a3)
    ctx->pc = 0x1607d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 276), bits); }
    // 0x1607dc: 0xc4e10118  lwc1        $f1, 0x118($a3)
    ctx->pc = 0x1607dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1607e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1607e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1607e4: 0xe4e10118  swc1        $f1, 0x118($a3)
    ctx->pc = 0x1607e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 280), bits); }
    // 0x1607e8: 0xc4e10160  lwc1        $f1, 0x160($a3)
    ctx->pc = 0x1607e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1607ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1607ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1607f0: 0xe4e10160  swc1        $f1, 0x160($a3)
    ctx->pc = 0x1607f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 352), bits); }
    // 0x1607f4: 0xc4e10164  lwc1        $f1, 0x164($a3)
    ctx->pc = 0x1607f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1607f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1607f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1607fc: 0xe4e10164  swc1        $f1, 0x164($a3)
    ctx->pc = 0x1607fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 356), bits); }
    // 0x160800: 0xc4e10168  lwc1        $f1, 0x168($a3)
    ctx->pc = 0x160800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160804: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x160804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160808: 0xe4e10168  swc1        $f1, 0x168($a3)
    ctx->pc = 0x160808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 360), bits); }
    // 0x16080c: 0xc4e101b0  lwc1        $f1, 0x1B0($a3)
    ctx->pc = 0x16080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160810: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x160810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160814: 0xe4e101b0  swc1        $f1, 0x1B0($a3)
    ctx->pc = 0x160814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 432), bits); }
    // 0x160818: 0xc4e101b4  lwc1        $f1, 0x1B4($a3)
    ctx->pc = 0x160818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16081c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16081cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160820: 0xe4e101b4  swc1        $f1, 0x1B4($a3)
    ctx->pc = 0x160820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 436), bits); }
    // 0x160824: 0xc4e101b8  lwc1        $f1, 0x1B8($a3)
    ctx->pc = 0x160824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160828: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x160828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16082c: 0xe4e101b8  swc1        $f1, 0x1B8($a3)
    ctx->pc = 0x16082cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 440), bits); }
    // 0x160830: 0xc4e10200  lwc1        $f1, 0x200($a3)
    ctx->pc = 0x160830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160834: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x160834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160838: 0xe4e10200  swc1        $f1, 0x200($a3)
    ctx->pc = 0x160838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 512), bits); }
    // 0x16083c: 0xc4e10204  lwc1        $f1, 0x204($a3)
    ctx->pc = 0x16083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160840: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x160840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160844: 0xe4e10204  swc1        $f1, 0x204($a3)
    ctx->pc = 0x160844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 516), bits); }
    // 0x160848: 0xc4e10208  lwc1        $f1, 0x208($a3)
    ctx->pc = 0x160848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16084c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16084cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160850: 0xe4e10208  swc1        $f1, 0x208($a3)
    ctx->pc = 0x160850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 520), bits); }
    // 0x160854: 0xc4e10250  lwc1        $f1, 0x250($a3)
    ctx->pc = 0x160854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160858: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x160858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16085c: 0xe4e10250  swc1        $f1, 0x250($a3)
    ctx->pc = 0x16085cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 592), bits); }
    // 0x160860: 0xc4e10254  lwc1        $f1, 0x254($a3)
    ctx->pc = 0x160860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160864: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x160864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160868: 0xe4e10254  swc1        $f1, 0x254($a3)
    ctx->pc = 0x160868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 596), bits); }
    // 0x16086c: 0xc4e10258  lwc1        $f1, 0x258($a3)
    ctx->pc = 0x16086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160870: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x160870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160874: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x160874u;
    {
        const bool branch_taken_0x160874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160874u;
        // 0x160878: 0xe4e10258  swc1        $f1, 0x258($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 600), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160874) {
            ctx->pc = 0x160748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160748;
        }
    }
    ctx->pc = 0x16087Cu;
}
