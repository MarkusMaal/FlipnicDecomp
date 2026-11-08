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

// Function: FUN_001d0690
// Address: 0x1d0690 - 0x1d0998
void FUN_001d0690_0x1d0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d0690_0x1d0690");
#endif

    switch (ctx->pc) {
        case 0x1d076cu: goto label_1d076c;
        case 0x1d0784u: goto label_1d0784;
        case 0x1d079cu: goto label_1d079c;
        case 0x1d0840u: goto label_1d0840;
        case 0x1d0864u: goto label_1d0864;
        case 0x1d0884u: goto label_1d0884;
        case 0x1d08c8u: goto label_1d08c8;
        case 0x1d08f8u: goto label_1d08f8;
        case 0x1d0908u: goto label_1d0908;
        case 0x1d0970u: goto label_1d0970;
        default: break;
    }

    ctx->pc = 0x1d0690u;

    // 0x1d0690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d0690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d0694: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0698: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d0698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d069c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d06a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d06a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d06a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d06a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d06a8: 0x8022fbf0  lb          $v0, -0x410($at)
    ctx->pc = 0x1d06a8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FBF0u));
    // 0x1d06ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D06ACu;
    {
        const bool branch_taken_0x1d06ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06ACu;
        // 0x1d06b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06ac) {
            ctx->pc = 0x1D06CCu;
            goto label_1d06cc;
        }
    }
    ctx->pc = 0x1D06B4u;
    // 0x1d06b4: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x1d06b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1d06b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d06b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d06bc: 0xac23fbe8  sw          $v1, -0x418($at)
    ctx->pc = 0x1d06bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FBE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FBE8u, _value); } while (0);
    // 0x1d06c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d06c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d06c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d06c8: 0xa022fbf0  sb          $v0, -0x410($at)
    ctx->pc = 0x1d06c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FBF0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FBF0u, _value); } while (0);
label_1d06cc:
    // 0x1d06cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d06ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d06d0: 0x8022fc00  lb          $v0, -0x400($at)
    ctx->pc = 0x1d06d0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FC00u));
    // 0x1d06d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D06D4u;
    {
        const bool branch_taken_0x1d06d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d06d4) {
            ctx->pc = 0x1D06F4u;
            goto label_1d06f4;
        }
    }
    ctx->pc = 0x1D06DCu;
    // 0x1d06dc: 0x2403017c  addiu       $v1, $zero, 0x17C
    ctx->pc = 0x1d06dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    // 0x1d06e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d06e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d06e4: 0xac23fbf8  sw          $v1, -0x408($at)
    ctx->pc = 0x1d06e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FBF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FBF8u, _value); } while (0);
    // 0x1d06e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d06ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d06ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d06f0: 0xa022fc00  sb          $v0, -0x400($at)
    ctx->pc = 0x1d06f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FC00u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FC00u, _value); } while (0);
label_1d06f4:
    // 0x1d06f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d06f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d06f8: 0x8022fc10  lb          $v0, -0x3F0($at)
    ctx->pc = 0x1d06f8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FC10u));
    // 0x1d06fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D06FCu;
    {
        const bool branch_taken_0x1d06fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d06fc) {
            ctx->pc = 0x1D0720u;
            goto label_1d0720;
        }
    }
    ctx->pc = 0x1D0704u;
    // 0x1d0704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0708: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d070c: 0xa022fc10  sb          $v0, -0x3F0($at)
    ctx->pc = 0x1d070cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FC10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FC10u, _value); } while (0);
    // 0x1d0710: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x1d0710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x1d0714: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x1d0714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1d0718: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d071c: 0xac22fc08  sw          $v0, -0x3F8($at)
    ctx->pc = 0x1d071cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FC08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FC08u, _value); } while (0);
label_1d0720:
    // 0x1d0720: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0724: 0x8022fc20  lb          $v0, -0x3E0($at)
    ctx->pc = 0x1d0724u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FC20u));
    // 0x1d0728: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0728u;
    {
        const bool branch_taken_0x1d0728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0728) {
            ctx->pc = 0x1D0748u;
            goto label_1d0748;
        }
    }
    ctx->pc = 0x1D0730u;
    // 0x1d0730: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d0730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0734: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0738: 0xac23fc18  sw          $v1, -0x3E8($at)
    ctx->pc = 0x1d0738u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FC18u, _value); } while (0);
    // 0x1d073c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0740: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0744: 0xa022fc20  sb          $v0, -0x3E0($at)
    ctx->pc = 0x1d0744u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FC20u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FC20u, _value); } while (0);
label_1d0748:
    // 0x1d0748: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d074c: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1d074cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1d0750: 0xc421fbe8  lwc1        $f1, -0x418($at)
    ctx->pc = 0x1d0750u;
    { uint32_t bits = FAST_READ32(0x36FBE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0754: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1d0754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1d0758: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d075c: 0xc420fbf8  lwc1        $f0, -0x408($at)
    ctx->pc = 0x1d075cu;
    { uint32_t bits = FAST_READ32(0x36FBF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0760: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d0760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d0764: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1D0764u;
    SET_GPR_U32(ctx, 31, 0x1D076Cu);
    ctx->pc = 0x1D0768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0764u;
    // 0x1d0768: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1D0764u, 0x1D076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D076Cu;
label_1d076c:
    // 0x1d076c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d076cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0770: 0xc42cfc08  lwc1        $f12, -0x3F8($at)
    ctx->pc = 0x1d0770u;
    { uint32_t bits = FAST_READ32(0x36FC08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d0774: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0778: 0xc42dfc18  lwc1        $f13, -0x3E8($at)
    ctx->pc = 0x1d0778u;
    { uint32_t bits = FAST_READ32(0x36FC18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d077c: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1D077Cu;
    SET_GPR_U32(ctx, 31, 0x1D0784u);
    ctx->pc = 0x1D0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D077Cu;
    // 0x1d0780: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1D077Cu, 0x1D0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0784u;
label_1d0784:
    // 0x1d0784: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d0784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d078c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1d078cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1d0790: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d0790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1d0794: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d0794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d0798: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d0798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d079c:
    // 0x1d079c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d079cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d07a0: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x1d07a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1d07a4: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1d07a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d07a8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d07a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d07ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d07acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d07b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d07b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d07b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1d07b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d07b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d07b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d07bc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1d07bcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1d07c0: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x1d07c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x1d07c4: 0xc42199c0  lwc1        $f1, -0x6640($at)
    ctx->pc = 0x1d07c4u;
    { uint32_t bits = FAST_READ32(0x2199C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d07c8: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x1d07c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d07cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d07ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d07d0: 0x0  nop
    ctx->pc = 0x1d07d0u;
    // NOP
    // 0x1d07d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D07D4u;
    {
        const bool branch_taken_0x1d07d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07D4u;
        // 0x1d07d8: 0x24c30014  addiu       $v1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07d4) {
            ctx->pc = 0x1D07E4u;
            goto label_1d07e4;
        }
    }
    ctx->pc = 0x1D07DCu;
    // 0x1d07dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D07DCu;
    {
        const bool branch_taken_0x1d07dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07DCu;
        // 0x1d07e0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07dc) {
            ctx->pc = 0x1D07F0u;
            goto label_1d07f0;
        }
    }
    ctx->pc = 0x1D07E4u;
label_1d07e4:
    // 0x1d07e4: 0x0  nop
    ctx->pc = 0x1d07e4u;
    // NOP
    // 0x1d07e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d07ec: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x1d07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
label_1d07f0:
    // 0x1d07f0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d07f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d07f4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d07f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d07f8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1d07f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d07fc: 0xc42099c8  lwc1        $f0, -0x6638($at)
    ctx->pc = 0x1d07fcu;
    { uint32_t bits = FAST_READ32(0x2199C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0800: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d0800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0804: 0x0  nop
    ctx->pc = 0x1d0804u;
    // NOP
    // 0x1d0808: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0808u;
    {
        const bool branch_taken_0x1d0808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0808) {
            ctx->pc = 0x1D0818u;
            goto label_1d0818;
        }
    }
    ctx->pc = 0x1D0810u;
    // 0x1d0810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0810u;
    {
        const bool branch_taken_0x1d0810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0810u;
        // 0x1d0814: 0x24c20014  addiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0810) {
            ctx->pc = 0x1D0820u;
            goto label_1d0820;
        }
    }
    ctx->pc = 0x1D0818u;
label_1d0818:
    // 0x1d0818: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d0818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d081c: 0x244299c8  addiu       $v0, $v0, -0x6638
    ctx->pc = 0x1d081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941128));
label_1d0820:
    // 0x1d0820: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d0820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d0824: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d0824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0828: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d0828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d082c: 0x2882000b  slti        $v0, $a0, 0xB
    ctx->pc = 0x1d082cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d0830: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D0830u;
    {
        const bool branch_taken_0x1d0830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0830u;
        // 0x1d0834: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0830) {
            ctx->pc = 0x1D079Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d079c;
        }
    }
    ctx->pc = 0x1D0838u;
    // 0x1d0838: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d0838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d083c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d083cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0840:
    // 0x1d0840: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1d0840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d0844: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d0844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0848: 0xc44f0014  lwc1        $f15, 0x14($v0)
    ctx->pc = 0x1d0848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d084c: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1d084cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1d0850: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d0850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0854: 0x0  nop
    ctx->pc = 0x1d0854u;
    // NOP
    // 0x1d0858: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d0858u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1d085c: 0xc062860  jal         func_18A180
    ctx->pc = 0x1D085Cu;
    SET_GPR_U32(ctx, 31, 0x1D0864u);
    ctx->pc = 0x1D0860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D085Cu;
    // 0x1d0860: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1D085Cu, 0x1D0864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0864u;
label_1d0864:
    // 0x1d0864: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d0864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d0868: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d0868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d086c: 0x8c2299b8  lw          $v0, -0x6648($at)
    ctx->pc = 0x1d086cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2199B8u));
    // 0x1d0870: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1d0870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1d0874: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d0874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d0878: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1d0878u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d087c: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1D087Cu;
    SET_GPR_U32(ctx, 31, 0x1D0884u);
    ctx->pc = 0x1D0880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D087Cu;
    // 0x1d0880: 0x24a531f8  addiu       $a1, $a1, 0x31F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1D087Cu, 0x1D0884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0884u;
label_1d0884:
    // 0x1d0884: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d0884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d0888: 0x2a22000b  slti        $v0, $s1, 0xB
    ctx->pc = 0x1d0888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d088c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D088Cu;
    {
        const bool branch_taken_0x1d088c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D088Cu;
        // 0x1d0890: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d088c) {
            ctx->pc = 0x1D0840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0840;
        }
    }
    ctx->pc = 0x1D0894u;
    // 0x1d0894: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d0894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d0898: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D0898u;
    {
        const bool branch_taken_0x1d0898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0898) {
            ctx->pc = 0x1D08C8u;
            goto label_1d08c8;
        }
    }
    ctx->pc = 0x1D08A0u;
    // 0x1d08a0: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x1d08a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x1d08a4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1d08a8: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1d08a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1d08ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d08acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d08b0: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x1d08b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x1d08b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1d08b8: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x1d08b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x1d08bc: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x1d08bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x1d08c0: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1D08C0u;
    SET_GPR_U32(ctx, 31, 0x1D08C8u);
    ctx->pc = 0x1D08C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D08C0u;
    // 0x1d08c4: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1D08C0u, 0x1D08C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D08C8u;
label_1d08c8:
    // 0x1d08c8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1d08c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d08cc: 0x240200b3  addiu       $v0, $zero, 0xB3
    ctx->pc = 0x1d08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x1d08d0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D08D0u;
    {
        const bool branch_taken_0x1d08d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08D0u;
        // 0x1d08d4: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08d0) {
            ctx->pc = 0x1D08FCu;
            goto label_1d08fc;
        }
    }
    ctx->pc = 0x1D08D8u;
    // 0x1d08d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d08d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d08dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d08e0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1d08e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1d08e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d08e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d08e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d08e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1d08ec: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1d08ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d08f0: 0xc053c00  jal         func_14F000
    ctx->pc = 0x1D08F0u;
    SET_GPR_U32(ctx, 31, 0x1D08F8u);
    ctx->pc = 0x1D08F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D08F0u;
    // 0x1d08f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x1D08F0u, 0x1D08F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D08F8u;
label_1d08f8:
    // 0x1d08f8: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x1d08f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1d08fc:
    // 0x1d08fc: 0x26460060  addiu       $a2, $s2, 0x60
    ctx->pc = 0x1d08fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1d0900: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1D0900u;
    SET_GPR_U32(ctx, 31, 0x1D0908u);
    ctx->pc = 0x1D0904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0900u;
    // 0x1d0904: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1D0900u, 0x1D0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0908u;
label_1d0908:
    // 0x1d0908: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x1d0908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d090c: 0x3c023e27  lui         $v0, 0x3E27
    ctx->pc = 0x1d090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15911 << 16));
    // 0x1d0910: 0x344240db  ori         $v0, $v0, 0x40DB
    ctx->pc = 0x1d0910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16603);
    // 0x1d0914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0918: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d0918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d091c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d091cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d0920: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x1d0920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x1d0924: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x1d0924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0928: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1d0928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d092c: 0x0  nop
    ctx->pc = 0x1d092cu;
    // NOP
    // 0x1d0930: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0930u;
    {
        const bool branch_taken_0x1d0930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0930) {
            ctx->pc = 0x1D0958u;
            goto label_1d0958;
        }
    }
    ctx->pc = 0x1D0938u;
    // 0x1d0938: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x1d0938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d093c: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x1d093cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
    // 0x1d0940: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d0940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1d0944: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d0948: 0x0  nop
    ctx->pc = 0x1d0948u;
    // NOP
    // 0x1d094c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d094cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d0950: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x1d0950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x1d0954: 0xe6420054  swc1        $f2, 0x54($s2)
    ctx->pc = 0x1d0954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_1d0958:
    // 0x1d0958: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d0958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d095c: 0x284100f1  slti        $at, $v0, 0xF1
    ctx->pc = 0x1d095cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x1d0960: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0960u;
    {
        const bool branch_taken_0x1d0960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0960u;
        // 0x1d0964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0960) {
            ctx->pc = 0x1D0970u;
            goto label_1d0970;
        }
    }
    ctx->pc = 0x1D0968u;
    // 0x1d0968: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x1D0968u;
    SET_GPR_U32(ctx, 31, 0x1D0970u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x1D0968u, 0x1D0970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0970u;
label_1d0970:
    // 0x1d0970: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1d0970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d0974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0978: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d0978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d097c: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1d097cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x1d0980: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d0980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d098c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d098cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0990: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0990u;
        // 0x1d0994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0998u;
}
