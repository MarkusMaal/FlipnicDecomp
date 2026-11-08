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

// Function: FUN_00126310
// Address: 0x126310 - 0x126514
void FUN_00126310_0x126310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00126310_0x126310");
#endif

    switch (ctx->pc) {
        case 0x126440u: goto label_126440;
        case 0x126450u: goto label_126450;
        case 0x126460u: goto label_126460;
        case 0x126470u: goto label_126470;
        case 0x126480u: goto label_126480;
        case 0x126494u: goto label_126494;
        default: break;
    }

    ctx->pc = 0x126310u;

    // 0x126310: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x126310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x126314: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x126314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x126318: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x126318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12631c: 0x460d6842  mul.s       $f1, $f13, $f13
    ctx->pc = 0x12631cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x126320: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x126320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x126324: 0x27a70094  addiu       $a3, $sp, 0x94
    ctx->pc = 0x126324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x126328: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x126328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12632c: 0x27a90098  addiu       $t1, $sp, 0x98
    ctx->pc = 0x12632cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x126330: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x126330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x126334: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x126334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126338: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x126338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12633c: 0x27ab009c  addiu       $t3, $sp, 0x9C
    ctx->pc = 0x12633cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x126340: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x126340u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x126344: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x126344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126348: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x126348u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x12634c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x12634cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x126350: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x126350u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x126354: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x126354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x126358: 0x27a800a4  addiu       $t0, $sp, 0xA4
    ctx->pc = 0x126358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x12635c: 0x27aa00a8  addiu       $t2, $sp, 0xA8
    ctx->pc = 0x12635cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x126360: 0x27ac00ac  addiu       $t4, $sp, 0xAC
    ctx->pc = 0x126360u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x126364: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x126364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126368: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x126368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12636c: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x12636cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x126370: 0x460e7002  mul.s       $f0, $f14, $f14
    ctx->pc = 0x126370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x126374: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x126374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x126378: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x126378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x12637c: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x12637cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x126380: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x126380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x126384: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x126384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126388: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x126388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x12638c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12638cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x126390: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x126390u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x126394: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x126394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x126398: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x126398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12639c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x12639cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1263a0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1263a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1263a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1263a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1263a8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1263a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1263ac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1263acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1263b0: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x1263b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1263b4: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1263b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1263b8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1263b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1263bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1263bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1263c0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1263c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1263c4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1263c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1263c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1263c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1263cc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1263ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1263d0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1263d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1263d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1263d4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1263d8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1263d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1263dc: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x1263dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1263e0: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1263e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1263e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1263e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1263e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1263e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1263ec: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x1263ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1263f0: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x1263f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1263f4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1263f4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1263f8: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1263f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1263fc: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x1263fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126400: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x126400u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x126404: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x126404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x126408: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x126408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12640c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x12640cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x126410: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x126410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x126414: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x126414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x126418: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x126418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x12641c: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x12641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126420: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x126420u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x126424: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x126424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x126428: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x126428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12642c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x12642cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x126430: 0x0  nop
    ctx->pc = 0x126430u;
    // NOP
    // 0x126434: 0x0  nop
    ctx->pc = 0x126434u;
    // NOP
    // 0x126438: 0xc07d376  jal         func_1F4DD8
    ctx->pc = 0x126438u;
    SET_GPR_U32(ctx, 31, 0x126440u);
    ctx->pc = 0x12643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126438u;
    // 0x12643c: 0xe5800000  swc1        $f0, 0x0($t4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DD8u, 0x126438u, 0x126440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126440u;
label_126440:
    // 0x126440: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x126440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x126444: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x126444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126448: 0xc07d376  jal         func_1F4DD8
    ctx->pc = 0x126448u;
    SET_GPR_U32(ctx, 31, 0x126450u);
    ctx->pc = 0x12644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126448u;
    // 0x12644c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DD8u, 0x126448u, 0x126450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126450u;
label_126450:
    // 0x126450: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x126450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x126454: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x126454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x126458: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x126458u;
    SET_GPR_U32(ctx, 31, 0x126460u);
    ctx->pc = 0x12645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126458u;
    // 0x12645c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x126458u, 0x126460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126460u;
label_126460:
    // 0x126460: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x126460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x126464: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x126464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126468: 0xc07d376  jal         func_1F4DD8
    ctx->pc = 0x126468u;
    SET_GPR_U32(ctx, 31, 0x126470u);
    ctx->pc = 0x12646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126468u;
    // 0x12646c: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DD8u, 0x126468u, 0x126470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126470u;
label_126470:
    // 0x126470: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x126470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x126474: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x126474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x126478: 0xc07d376  jal         func_1F4DD8
    ctx->pc = 0x126478u;
    SET_GPR_U32(ctx, 31, 0x126480u);
    ctx->pc = 0x12647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126478u;
    // 0x12647c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DD8u, 0x126478u, 0x126480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126480u;
label_126480:
    // 0x126480: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x126480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x126484: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x126484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x126488: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x126488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12648c: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x12648Cu;
    SET_GPR_U32(ctx, 31, 0x126494u);
    ctx->pc = 0x126490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12648Cu;
    // 0x126490: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x12648Cu, 0x126494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126494u;
label_126494:
    // 0x126494: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x126494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x126498: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x126498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x12649c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12649cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1264a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1264a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1264a4: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1264a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1264a8: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x1264a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x1264ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1264acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1264b0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1264b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1264b4: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x1264b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x1264b8: 0x4614001c  madd.s      $f0, $f0, $f20
    ctx->pc = 0x1264b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x1264bc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1264bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1264c0: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x1264c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1264c4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1264c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1264c8: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x1264c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x1264cc: 0x4602001c  madd.s      $f0, $f0, $f2
    ctx->pc = 0x1264ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x1264d0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1264d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1264d4: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x1264d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1264d8: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x1264d8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    // 0x1264dc: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x1264dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1264e0: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x1264e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
    // 0x1264e4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1264e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1264e8: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1264e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1264ec: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1264ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1264f0: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1264f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1264f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1264f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1264f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1264f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1264fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1264fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126500: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x126500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126504: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x126504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126508: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x126508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12650c: 0x3e00008  jr          $ra
    ctx->pc = 0x12650Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12650Cu;
        // 0x126510: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12650Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126514u;
}
