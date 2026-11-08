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

// Function: entry_001288a4
// Address: 0x1288a4 - 0x128968
void entry_001288a4_0x1288a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001288a4_0x1288a4");
#endif

    switch (ctx->pc) {
        case 0x1288b0u: goto label_1288b0;
        case 0x1288ecu: goto label_1288ec;
        case 0x12893cu: goto label_12893c;
        default: break;
    }

    ctx->pc = 0x1288a4u;

    // 0x1288a4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1288a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1288a8: 0xc0498ac  jal         func_1262B0
    ctx->pc = 0x1288A8u;
    SET_GPR_U32(ctx, 31, 0x1288B0u);
    ctx->pc = 0x1288ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1288A8u;
    // 0x1288ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1262B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1262B0u, 0x1288A8u, 0x1288B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288B0u;
label_1288b0:
    // 0x1288b0: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x1288b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1288b4: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x1288b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1288b8: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1288b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1288bc: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1288bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1288c0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1288c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1288c4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1288c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1288c8: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1288c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x1288cc: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x1288ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1288d0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1288d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1288d4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1288d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1288d8: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1288d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1288dc: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x1288dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1288e0: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x1288e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1288e4: 0xc0498c4  jal         func_126310
    ctx->pc = 0x1288E4u;
    SET_GPR_U32(ctx, 31, 0x1288ECu);
    ctx->pc = 0x1288E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1288E4u;
    // 0x1288e8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126310u, 0x1288E4u, 0x1288ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288ECu;
label_1288ec:
    // 0x1288ec: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x1288ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1288f0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1288f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1288f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1288f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1288f8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1288f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1288fc: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x1288fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x128900: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x128900u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x128904: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x128904u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128908: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x128908u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x12890c: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x12890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128910: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x128910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x128914: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x128914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128918: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x128918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x12891c: 0xc68c0134  lwc1        $f12, 0x134($s4)
    ctx->pc = 0x12891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128920: 0x460c6832  c.eq.s      $f13, $f12
    ctx->pc = 0x128920u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128924: 0x0  nop
    ctx->pc = 0x128924u;
    // NOP
    // 0x128928: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x128928u;
    {
        const bool branch_taken_0x128928 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128928u;
        // 0x12892c: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128928) {
            ctx->pc = 0x128968u;
            return;
        }
    }
    ctx->pc = 0x128930u;
    // 0x128930: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x128930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x128934: 0xc0498c4  jal         func_126310
    ctx->pc = 0x128934u;
    SET_GPR_U32(ctx, 31, 0x12893Cu);
    ctx->pc = 0x128938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128934u;
    // 0x128938: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126310u, 0x128934u, 0x12893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12893Cu;
label_12893c:
    // 0x12893c: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x12893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x128940: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x128940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128944: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x128944u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128948: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x128948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x12894c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x12894cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x128950: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x128950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128954: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x128954u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x128958: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x128958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12895c: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x12895cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x128960: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x128960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128964: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x128964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->pc = 0x128968u;
}
