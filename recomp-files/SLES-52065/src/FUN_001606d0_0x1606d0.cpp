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

// Function: FUN_001606d0
// Address: 0x1606d0 - 0x160d68
void FUN_001606d0_0x1606d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001606d0_0x1606d0");
#endif

    switch (ctx->pc) {
        case 0x160748u: goto label_160748;
        case 0x1608a0u: goto label_1608a0;
        case 0x1608e8u: goto label_1608e8;
        case 0x160908u: goto label_160908;
        case 0x160930u: goto label_160930;
        case 0x160950u: goto label_160950;
        case 0x160968u: goto label_160968;
        case 0x16099cu: goto label_16099c;
        case 0x160a44u: goto label_160a44;
        case 0x160a84u: goto label_160a84;
        case 0x160b0cu: goto label_160b0c;
        case 0x160b30u: goto label_160b30;
        case 0x160b4cu: goto label_160b4c;
        case 0x160b8cu: goto label_160b8c;
        case 0x160bc4u: goto label_160bc4;
        case 0x160cccu: goto label_160ccc;
        case 0x160d08u: goto label_160d08;
        case 0x160d38u: goto label_160d38;
        default: break;
    }

    ctx->pc = 0x1606d0u;

    // 0x1606d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1606d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1606d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1606d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1606d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1606d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1606dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1606dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1606e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1606e4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1606e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1606e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1606e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1606ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1606ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1606f0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1606f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1606f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1606f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1606f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1606fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x160700: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x160700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160704: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x160708: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x160708u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x16070c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160714: 0xac940020  sw          $s4, 0x20($a0)
    ctx->pc = 0x160714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 20));
    // 0x160718: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x160718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x16071c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16071cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x160720: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x160720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x160724: 0x1020006c  beqz        $at, . + 4 + (0x6C << 2)
    ctx->pc = 0x160724u;
    {
        const bool branch_taken_0x160724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160724u;
        // 0x160728: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160724) {
            ctx->pc = 0x1608D8u;
            goto label_1608d8;
        }
    }
    ctx->pc = 0x16072Cu;
    // 0x16072c: 0x2a810009  slti        $at, $s4, 0x9
    ctx->pc = 0x16072cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x160730: 0x14200052  bnez        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x160730u;
    {
        const bool branch_taken_0x160730 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160730u;
        // 0x160734: 0x2684fff8  addiu       $a0, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160730) {
            ctx->pc = 0x16087Cu;
            goto label_16087c;
        }
    }
    ctx->pc = 0x160738u;
    // 0x160738: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16073c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16073cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x160740: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x160740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x160744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
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
label_16087c:
    // 0x16087c: 0x0  nop
    ctx->pc = 0x16087cu;
    // NOP
    // 0x160880: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x160880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160884: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x160884u;
    {
        const bool branch_taken_0x160884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160884u;
        // 0x160888: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160884) {
            ctx->pc = 0x1608D8u;
            goto label_1608d8;
        }
    }
    ctx->pc = 0x16088Cu;
    // 0x16088c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16088cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160890: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x160890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x160894: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x160894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x160898: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x160898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16089c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16089cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1608a0:
    // 0x1608a0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1608a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1608a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1608a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1608a8: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x1608a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1608ac: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x1608acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1608b0: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x1608b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1608b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1608b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1608b8: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x1608b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x1608bc: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x1608bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1608c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1608c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1608c4: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x1608c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x1608c8: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x1608c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1608cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1608ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1608d0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1608D0u;
    {
        const bool branch_taken_0x1608d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1608D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608D0u;
        // 0x1608d4: 0xe4c00028  swc1        $f0, 0x28($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1608d0) {
            ctx->pc = 0x1608A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1608a0;
        }
    }
    ctx->pc = 0x1608D8u;
label_1608d8:
    // 0x1608d8: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x1608d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1608dc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1608DCu;
    {
        const bool branch_taken_0x1608dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1608E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608DCu;
        // 0x1608e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1608dc) {
            ctx->pc = 0x16097Cu;
            goto label_16097c;
        }
    }
    ctx->pc = 0x1608E4u;
    // 0x1608e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1608e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1608e8:
    // 0x1608e8: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x1608e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1608ec: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1608ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1608f0: 0x2484f3f0  addiu       $a0, $a0, -0xC10
    ctx->pc = 0x1608f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964208));
    // 0x1608f4: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x1608f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1608f8: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x1608f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1608fc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1608fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x160900: 0xc080748  jal         func_201D20
    ctx->pc = 0x160900u;
    SET_GPR_U32(ctx, 31, 0x160908u);
    ctx->pc = 0x160904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160900u;
    // 0x160904: 0x2c28821  addu        $s1, $s6, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x160900u, 0x160908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160908u;
label_160908:
    // 0x160908: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x160908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16090c: 0x27b700ad  addiu       $s7, $sp, 0xAD
    ctx->pc = 0x16090cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 173));
    // 0x160910: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x160910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x160914: 0x27be00ae  addiu       $fp, $sp, 0xAE
    ctx->pc = 0x160914u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
    // 0x160918: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x160918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x16091c: 0xa3a200ac  sb          $v0, 0xAC($sp)
    ctx->pc = 0x16091cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x160920: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x160920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x160924: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x160924u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160928: 0xc07efa0  jal         func_1FBE80
    ctx->pc = 0x160928u;
    SET_GPR_U32(ctx, 31, 0x160930u);
    ctx->pc = 0x16092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160928u;
    // 0x16092c: 0xa3c00000  sb          $zero, 0x0($fp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE80u, 0x160928u, 0x160930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160930u;
label_160930:
    // 0x160930: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x160930u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x160934: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x160934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x160938: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x160938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x16093c: 0xa3a200ac  sb          $v0, 0xAC($sp)
    ctx->pc = 0x16093cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x160940: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x160940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x160944: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x160944u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160948: 0xc07efa0  jal         func_1FBE80
    ctx->pc = 0x160948u;
    SET_GPR_U32(ctx, 31, 0x160950u);
    ctx->pc = 0x16094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160948u;
    // 0x16094c: 0xa3c00000  sb          $zero, 0x0($fp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE80u, 0x160948u, 0x160950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160950u;
label_160950:
    // 0x160950: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x160950u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x160954: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x160954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x160958: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x160958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16095c: 0xa3a200ac  sb          $v0, 0xAC($sp)
    ctx->pc = 0x16095cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x160960: 0xc07efa0  jal         func_1FBE80
    ctx->pc = 0x160960u;
    SET_GPR_U32(ctx, 31, 0x160968u);
    ctx->pc = 0x160964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160960u;
    // 0x160964: 0xa2e00000  sb          $zero, 0x0($s7) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE80u, 0x160960u, 0x160968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160968u;
label_160968:
    // 0x160968: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x160968u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x16096c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16096cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x160970: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x160970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160974: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x160974u;
    {
        const bool branch_taken_0x160974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160974u;
        // 0x160978: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160974) {
            ctx->pc = 0x1608E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1608e8;
        }
    }
    ctx->pc = 0x16097Cu;
label_16097c:
    // 0x16097c: 0x0  nop
    ctx->pc = 0x16097cu;
    // NOP
    // 0x160980: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x160980u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160984: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x160984u;
    {
        const bool branch_taken_0x160984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160984u;
        // 0x160988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160984) {
            ctx->pc = 0x160A64u;
            goto label_160a64;
        }
    }
    ctx->pc = 0x16098Cu;
    // 0x16098c: 0x2a810009  slti        $at, $s4, 0x9
    ctx->pc = 0x16098cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x160990: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x160990u;
    {
        const bool branch_taken_0x160990 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160990u;
        // 0x160994: 0x2685fff8  addiu       $a1, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160990) {
            ctx->pc = 0x160A2Cu;
            goto label_160a2c;
        }
    }
    ctx->pc = 0x160998u;
    // 0x160998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16099c:
    // 0x16099c: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x16099cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1609a0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1609a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1609a4: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x1609a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1609a8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1609a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1609ac: 0x90e40041  lbu         $a0, 0x41($a3)
    ctx->pc = 0x1609acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 65)));
    // 0x1609b0: 0xa0e40042  sb          $a0, 0x42($a3)
    ctx->pc = 0x1609b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 66), (uint8_t)GPR_U32(ctx, 4));
    // 0x1609b4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x1609b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1609b8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1609b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1609bc: 0x90e40091  lbu         $a0, 0x91($a3)
    ctx->pc = 0x1609bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 145)));
    // 0x1609c0: 0xa0e40092  sb          $a0, 0x92($a3)
    ctx->pc = 0x1609c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 146), (uint8_t)GPR_U32(ctx, 4));
    // 0x1609c4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x1609c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1609c8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1609c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1609cc: 0x90e400e1  lbu         $a0, 0xE1($a3)
    ctx->pc = 0x1609ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 225)));
    // 0x1609d0: 0xa0e400e2  sb          $a0, 0xE2($a3)
    ctx->pc = 0x1609d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 226), (uint8_t)GPR_U32(ctx, 4));
    // 0x1609d4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x1609d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1609d8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1609d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1609dc: 0x90e40131  lbu         $a0, 0x131($a3)
    ctx->pc = 0x1609dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 305)));
    // 0x1609e0: 0xa0e40132  sb          $a0, 0x132($a3)
    ctx->pc = 0x1609e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 306), (uint8_t)GPR_U32(ctx, 4));
    // 0x1609e4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x1609e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1609e8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1609e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1609ec: 0x90e40181  lbu         $a0, 0x181($a3)
    ctx->pc = 0x1609ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 385)));
    // 0x1609f0: 0xa0e40182  sb          $a0, 0x182($a3)
    ctx->pc = 0x1609f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 386), (uint8_t)GPR_U32(ctx, 4));
    // 0x1609f4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x1609f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1609f8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1609f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1609fc: 0x90e401d1  lbu         $a0, 0x1D1($a3)
    ctx->pc = 0x1609fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 465)));
    // 0x160a00: 0xa0e401d2  sb          $a0, 0x1D2($a3)
    ctx->pc = 0x160a00u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 466), (uint8_t)GPR_U32(ctx, 4));
    // 0x160a04: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160a08: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x160a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160a0c: 0x90e40221  lbu         $a0, 0x221($a3)
    ctx->pc = 0x160a0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 545)));
    // 0x160a10: 0xa0e40222  sb          $a0, 0x222($a3)
    ctx->pc = 0x160a10u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 546), (uint8_t)GPR_U32(ctx, 4));
    // 0x160a14: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160a18: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x160a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160a1c: 0x90e40271  lbu         $a0, 0x271($a3)
    ctx->pc = 0x160a1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 625)));
    // 0x160a20: 0x24c60280  addiu       $a2, $a2, 0x280
    ctx->pc = 0x160a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 640));
    // 0x160a24: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x160A24u;
    {
        const bool branch_taken_0x160a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A24u;
        // 0x160a28: 0xa0e40272  sb          $a0, 0x272($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 626), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a24) {
            ctx->pc = 0x16099Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16099c;
        }
    }
    ctx->pc = 0x160A2Cu;
label_160a2c:
    // 0x160a2c: 0x0  nop
    ctx->pc = 0x160a2cu;
    // NOP
    // 0x160a30: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x160a30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160a34: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x160A34u;
    {
        const bool branch_taken_0x160a34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A34u;
        // 0x160a38: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a34) {
            ctx->pc = 0x160A64u;
            goto label_160a64;
        }
    }
    ctx->pc = 0x160A3Cu;
    // 0x160a3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160a40: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x160a40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_160a44:
    // 0x160a44: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160a48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160a4c: 0x54182a  slt         $v1, $v0, $s4
    ctx->pc = 0x160a4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160a50: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x160a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x160a54: 0x90c40041  lbu         $a0, 0x41($a2)
    ctx->pc = 0x160a54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 65)));
    // 0x160a58: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x160a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x160a5c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x160A5Cu;
    {
        const bool branch_taken_0x160a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A5Cu;
        // 0x160a60: 0xa0c40042  sb          $a0, 0x42($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 66), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a5c) {
            ctx->pc = 0x160A44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160a44;
        }
    }
    ctx->pc = 0x160A64u;
label_160a64:
    // 0x160a64: 0x0  nop
    ctx->pc = 0x160a64u;
    // NOP
    // 0x160a68: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x160a68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160a6c: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x160A6Cu;
    {
        const bool branch_taken_0x160a6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A6Cu;
        // 0x160a70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a6c) {
            ctx->pc = 0x160B28u;
            goto label_160b28;
        }
    }
    ctx->pc = 0x160A74u;
    // 0x160a74: 0x2a810009  slti        $at, $s4, 0x9
    ctx->pc = 0x160a74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x160a78: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x160A78u;
    {
        const bool branch_taken_0x160a78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A78u;
        // 0x160a7c: 0x2685fff8  addiu       $a1, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a78) {
            ctx->pc = 0x160AF4u;
            goto label_160af4;
        }
    }
    ctx->pc = 0x160A80u;
    // 0x160a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160a84:
    // 0x160a84: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160a88: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x160a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x160a8c: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x160a8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x160a90: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160a94: 0xa0800043  sb          $zero, 0x43($a0)
    ctx->pc = 0x160a94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x160a98: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160a9c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160aa0: 0xa0800093  sb          $zero, 0x93($a0)
    ctx->pc = 0x160aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 147), (uint8_t)GPR_U32(ctx, 0));
    // 0x160aa4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160aa8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160aac: 0xa08000e3  sb          $zero, 0xE3($a0)
    ctx->pc = 0x160aacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 227), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ab0: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160ab4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160ab8: 0xa0800133  sb          $zero, 0x133($a0)
    ctx->pc = 0x160ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 307), (uint8_t)GPR_U32(ctx, 0));
    // 0x160abc: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160ac0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160ac4: 0xa0800183  sb          $zero, 0x183($a0)
    ctx->pc = 0x160ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 387), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ac8: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160acc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160ad0: 0xa08001d3  sb          $zero, 0x1D3($a0)
    ctx->pc = 0x160ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 467), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ad4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160ad8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160adc: 0xa0800223  sb          $zero, 0x223($a0)
    ctx->pc = 0x160adcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 547), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ae0: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160ae4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160ae8: 0xa0800273  sb          $zero, 0x273($a0)
    ctx->pc = 0x160ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 627), (uint8_t)GPR_U32(ctx, 0));
    // 0x160aec: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x160AECu;
    {
        const bool branch_taken_0x160aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AECu;
        // 0x160af0: 0x24c60280  addiu       $a2, $a2, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160aec) {
            ctx->pc = 0x160A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160a84;
        }
    }
    ctx->pc = 0x160AF4u;
label_160af4:
    // 0x160af4: 0x0  nop
    ctx->pc = 0x160af4u;
    // NOP
    // 0x160af8: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x160af8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160afc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x160AFCu;
    {
        const bool branch_taken_0x160afc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AFCu;
        // 0x160b00: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160afc) {
            ctx->pc = 0x160B28u;
            goto label_160b28;
        }
    }
    ctx->pc = 0x160B04u;
    // 0x160b04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160b08: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x160b08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_160b0c:
    // 0x160b0c: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160b14: 0x54182a  slt         $v1, $v0, $s4
    ctx->pc = 0x160b14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160b18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x160b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x160b1c: 0xa0800043  sb          $zero, 0x43($a0)
    ctx->pc = 0x160b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b20: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x160B20u;
    {
        const bool branch_taken_0x160b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B20u;
        // 0x160b24: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b20) {
            ctx->pc = 0x160B0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160b0c;
        }
    }
    ctx->pc = 0x160B28u;
label_160b28:
    // 0x160b28: 0xc040168  jal         func_1005A0
    ctx->pc = 0x160B28u;
    SET_GPR_U32(ctx, 31, 0x160B30u);
    ctx->pc = 0x160B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B28u;
    // 0x160b2c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x160B28u, 0x160B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B30u;
label_160b30:
    // 0x160b30: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x160b30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160b34: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x160b34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
    // 0x160b38: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x160B38u;
    {
        const bool branch_taken_0x160b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B38u;
        // 0x160b3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b38) {
            ctx->pc = 0x160BA8u;
            goto label_160ba8;
        }
    }
    ctx->pc = 0x160B40u;
    // 0x160b40: 0x2a810009  slti        $at, $s4, 0x9
    ctx->pc = 0x160b40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x160b44: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x160B44u;
    {
        const bool branch_taken_0x160b44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B44u;
        // 0x160b48: 0x2685fff8  addiu       $a1, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b44) {
            ctx->pc = 0x160B7Cu;
            goto label_160b7c;
        }
    }
    ctx->pc = 0x160B4Cu;
label_160b4c:
    // 0x160b4c: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x160b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x160b50: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x160b50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b54: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x160b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x160b58: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x160b58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b5c: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x160b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x160b60: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x160b60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b64: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x160b64u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b68: 0xa0c00004  sb          $zero, 0x4($a2)
    ctx->pc = 0x160b68u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b6c: 0xa0c00005  sb          $zero, 0x5($a2)
    ctx->pc = 0x160b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b70: 0xa0c00006  sb          $zero, 0x6($a2)
    ctx->pc = 0x160b70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b74: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x160B74u;
    {
        const bool branch_taken_0x160b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B74u;
        // 0x160b78: 0xa0c00007  sb          $zero, 0x7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b74) {
            ctx->pc = 0x160B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160b4c;
        }
    }
    ctx->pc = 0x160B7Cu;
label_160b7c:
    // 0x160b7c: 0x0  nop
    ctx->pc = 0x160b7cu;
    // NOP
    // 0x160b80: 0x94082a  slt         $at, $a0, $s4
    ctx->pc = 0x160b80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160b84: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x160B84u;
    {
        const bool branch_taken_0x160b84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x160b84) {
            ctx->pc = 0x160BA8u;
            goto label_160ba8;
        }
    }
    ctx->pc = 0x160B8Cu;
label_160b8c:
    // 0x160b8c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x160b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x160b90: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x160b90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x160b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x160b98: 0x94182a  slt         $v1, $a0, $s4
    ctx->pc = 0x160b98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160b9c: 0x0  nop
    ctx->pc = 0x160b9cu;
    // NOP
    // 0x160ba0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x160BA0u;
    {
        const bool branch_taken_0x160ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160ba0) {
            ctx->pc = 0x160B8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160b8c;
        }
    }
    ctx->pc = 0x160BA8u;
label_160ba8:
    // 0x160ba8: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x160ba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160bac: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x160BACu;
    {
        const bool branch_taken_0x160bac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BACu;
        // 0x160bb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160bac) {
            ctx->pc = 0x160CF8u;
            goto label_160cf8;
        }
    }
    ctx->pc = 0x160BB4u;
    // 0x160bb4: 0x2a810009  slti        $at, $s4, 0x9
    ctx->pc = 0x160bb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x160bb8: 0x1420003e  bnez        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x160BB8u;
    {
        const bool branch_taken_0x160bb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BB8u;
        // 0x160bbc: 0x2684fff8  addiu       $a0, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160bb8) {
            ctx->pc = 0x160CB4u;
            goto label_160cb4;
        }
    }
    ctx->pc = 0x160BC0u;
    // 0x160bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160bc4:
    // 0x160bc4: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160bc8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x160bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x160bcc: 0x64302a  slt         $a2, $v1, $a0
    ctx->pc = 0x160bccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x160bd0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160bd4: 0x90e7003f  lbu         $a3, 0x3F($a3)
    ctx->pc = 0x160bd4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 63)));
    // 0x160bd8: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160bdc: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160bdcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160be0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160be4: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160be4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160be8: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160be8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160bec: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160bf0: 0x90e7008f  lbu         $a3, 0x8F($a3)
    ctx->pc = 0x160bf0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 143)));
    // 0x160bf4: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160bf8: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160bf8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160bfc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160c00: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160c00u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160c04: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160c04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160c08: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160c0c: 0x90e700df  lbu         $a3, 0xDF($a3)
    ctx->pc = 0x160c0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 223)));
    // 0x160c10: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160c14: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160c14u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160c18: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160c1c: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160c20: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160c24: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160c28: 0x90e7012f  lbu         $a3, 0x12F($a3)
    ctx->pc = 0x160c28u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 303)));
    // 0x160c2c: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160c30: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160c30u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160c34: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160c38: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160c38u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160c3c: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160c40: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160c44: 0x90e7017f  lbu         $a3, 0x17F($a3)
    ctx->pc = 0x160c44u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 383)));
    // 0x160c48: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160c4c: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160c4cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160c50: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160c54: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160c54u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160c58: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160c5c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160c60: 0x90e701cf  lbu         $a3, 0x1CF($a3)
    ctx->pc = 0x160c60u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 463)));
    // 0x160c64: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160c64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160c68: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160c68u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160c6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160c70: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160c70u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160c74: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160c74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160c78: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160c7c: 0x90e7021f  lbu         $a3, 0x21F($a3)
    ctx->pc = 0x160c7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 543)));
    // 0x160c80: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160c84: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160c84u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160c88: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160c8c: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160c90: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160c94: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160c98: 0x90e7026f  lbu         $a3, 0x26F($a3)
    ctx->pc = 0x160c98u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 623)));
    // 0x160c9c: 0x24a50280  addiu       $a1, $a1, 0x280
    ctx->pc = 0x160c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
    // 0x160ca0: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160ca4: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160ca4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160ca8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160cac: 0x14c0ffc5  bnez        $a2, . + 4 + (-0x3B << 2)
    ctx->pc = 0x160CACu;
    {
        const bool branch_taken_0x160cac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x160CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CACu;
        // 0x160cb0: 0xa1070000  sb          $a3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cac) {
            ctx->pc = 0x160BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160bc4;
        }
    }
    ctx->pc = 0x160CB4u;
label_160cb4:
    // 0x160cb4: 0x0  nop
    ctx->pc = 0x160cb4u;
    // NOP
    // 0x160cb8: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x160cb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160cbc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x160CBCu;
    {
        const bool branch_taken_0x160cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CBCu;
        // 0x160cc0: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cbc) {
            ctx->pc = 0x160CF8u;
            goto label_160cf8;
        }
    }
    ctx->pc = 0x160CC4u;
    // 0x160cc4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x160cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160cc8: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x160cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_160ccc:
    // 0x160ccc: 0x8ea5001c  lw          $a1, 0x1C($s5)
    ctx->pc = 0x160cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160cd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x160cd4: 0x74202a  slt         $a0, $v1, $s4
    ctx->pc = 0x160cd4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160cd8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x160cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x160cdc: 0x90a5003f  lbu         $a1, 0x3F($a1)
    ctx->pc = 0x160cdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 63)));
    // 0x160ce0: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x160ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x160ce4: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x160ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x160ce8: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x160ce8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x160cec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x160cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x160cf0: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x160CF0u;
    {
        const bool branch_taken_0x160cf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x160CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CF0u;
        // 0x160cf4: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cf0) {
            ctx->pc = 0x160CCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160ccc;
        }
    }
    ctx->pc = 0x160CF8u;
label_160cf8:
    // 0x160cf8: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x160cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160cfc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x160CFCu;
    {
        const bool branch_taken_0x160cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CFCu;
        // 0x160d00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cfc) {
            ctx->pc = 0x160D30u;
            goto label_160d30;
        }
    }
    ctx->pc = 0x160D04u;
    // 0x160d04: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x160d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_160d08:
    // 0x160d08: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x160d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160d0c: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x160D0Cu;
    {
        const bool branch_taken_0x160d0c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x160d0c) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160D14u;
    // 0x160d14: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x160d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x160d18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x160d1c: 0xaea30024  sw          $v1, 0x24($s5)
    ctx->pc = 0x160d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 3));
label_160d20:
    // 0x160d20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x160d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x160d24: 0x94182a  slt         $v1, $a0, $s4
    ctx->pc = 0x160d24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160d28: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x160D28u;
    {
        const bool branch_taken_0x160d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D28u;
        // 0x160d2c: 0x441821  addu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d28) {
            ctx->pc = 0x160D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160d08;
        }
    }
    ctx->pc = 0x160D30u;
label_160d30:
    // 0x160d30: 0xc04018c  jal         func_100630
    ctx->pc = 0x160D30u;
    SET_GPR_U32(ctx, 31, 0x160D38u);
    ctx->pc = 0x160D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160D30u;
    // 0x160d34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x160D30u, 0x160D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D38u;
label_160d38:
    // 0x160d38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x160d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x160d3c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x160d3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160d40: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x160d40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x160d44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x160d44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160d48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x160d48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160d4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x160d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160d50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160d54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160d58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160d60: 0x3e00008  jr          $ra
    ctx->pc = 0x160D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D60u;
        // 0x160d64: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160D68u;
}
