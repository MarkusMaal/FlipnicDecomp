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

// Function: entry_001291c8
// Address: 0x1291c8 - 0x1292bc
void entry_001291c8_0x1291c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001291c8_0x1291c8");
#endif

    switch (ctx->pc) {
        case 0x1291d0u: goto label_1291d0;
        case 0x1291dcu: goto label_1291dc;
        case 0x1291e4u: goto label_1291e4;
        case 0x1291f4u: goto label_1291f4;
        case 0x129204u: goto label_129204;
        case 0x12925cu: goto label_12925c;
        case 0x1292b4u: goto label_1292b4;
        default: break;
    }

    ctx->pc = 0x1291c8u;

    // 0x1291c8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1291C8u;
    SET_GPR_U32(ctx, 31, 0x1291D0u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1291C8u, 0x1291D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291D0u;
label_1291d0:
    // 0x1291d0: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1291d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1291d4: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x1291D4u;
    SET_GPR_U32(ctx, 31, 0x1291DCu);
    ctx->pc = 0x1291D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291D4u;
    // 0x1291d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x1291D4u, 0x1291DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291DCu;
label_1291dc:
    // 0x1291dc: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1291DCu;
    SET_GPR_U32(ctx, 31, 0x1291E4u);
    ctx->pc = 0x1291E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291DCu;
    // 0x1291e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1291DCu, 0x1291E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291E4u;
label_1291e4:
    // 0x1291e4: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1291e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1291e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1291e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291ec: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x1291ECu;
    SET_GPR_U32(ctx, 31, 0x1291F4u);
    ctx->pc = 0x1291F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291ECu;
    // 0x1291f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x1291ECu, 0x1291F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291F4u;
label_1291f4:
    // 0x1291f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1291f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291f8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1291f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1291fc: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x1291FCu;
    SET_GPR_U32(ctx, 31, 0x129204u);
    ctx->pc = 0x129200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291FCu;
    // 0x129200: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x1291FCu, 0x129204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129204u;
label_129204:
    // 0x129204: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x129204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x129208: 0x7ba30280  lq          $v1, 0x280($sp)
    ctx->pc = 0x129208u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x12920c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x12920cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x129210: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x129210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x129214: 0xc7a202a0  lwc1        $f2, 0x2A0($sp)
    ctx->pc = 0x129214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129218: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x129218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x12921c: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x12921cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x129220: 0xc7a102a4  lwc1        $f1, 0x2A4($sp)
    ctx->pc = 0x129220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129224: 0x46141801  sub.s       $f0, $f3, $f20
    ctx->pc = 0x129224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x129228: 0x260600e0  addiu       $a2, $s0, 0xE0
    ctx->pc = 0x129228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x12922c: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x12922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x129230: 0xe7a20150  swc1        $f2, 0x150($sp)
    ctx->pc = 0x129230u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x129234: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x129234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x129238: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x129238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x12923c: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x12923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x129240: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x129240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129244: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x129244u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x129248: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x129248u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x12924c: 0x0  nop
    ctx->pc = 0x12924cu;
    // NOP
    // 0x129250: 0x0  nop
    ctx->pc = 0x129250u;
    // NOP
    // 0x129254: 0xc049860  jal         func_126180
    ctx->pc = 0x129254u;
    SET_GPR_U32(ctx, 31, 0x12925Cu);
    ctx->pc = 0x126180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126180u, 0x129254u, 0x12925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12925Cu;
label_12925c:
    // 0x12925c: 0x7ba302b0  lq          $v1, 0x2B0($sp)
    ctx->pc = 0x12925cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x129260: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x129260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x129264: 0x7ba202c0  lq          $v0, 0x2C0($sp)
    ctx->pc = 0x129264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x129268: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x129268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x12926c: 0x27a80184  addiu       $t0, $sp, 0x184
    ctx->pc = 0x12926cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x129270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129274: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x129274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x129278: 0x7fa30160  sq          $v1, 0x160($sp)
    ctx->pc = 0x129278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 3));
    // 0x12927c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12927cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x129280: 0xc7a002d0  lwc1        $f0, 0x2D0($sp)
    ctx->pc = 0x129280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129284: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x129284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x129288: 0xc7a002d4  lwc1        $f0, 0x2D4($sp)
    ctx->pc = 0x129288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12928c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x12928cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x129290: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x129290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x129294: 0x7fa202e0  sq          $v0, 0x2E0($sp)
    ctx->pc = 0x129294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
    // 0x129298: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x129298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12929c: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x12929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
    // 0x1292a0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1292a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1292a4: 0xe7a00300  swc1        $f0, 0x300($sp)
    ctx->pc = 0x1292a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    // 0x1292a8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1292a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1292ac: 0xc049948  jal         func_126520
    ctx->pc = 0x1292ACu;
    SET_GPR_U32(ctx, 31, 0x1292B4u);
    ctx->pc = 0x1292B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292ACu;
    // 0x1292b0: 0xe7a00304  swc1        $f0, 0x304($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 772), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x1292ACu, 0x1292B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292B4u;
label_1292b4:
    // 0x1292b4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1292B4u;
    {
        const bool branch_taken_0x1292b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292b4) {
            ctx->pc = 0x129408u;
            return;
        }
    }
    ctx->pc = 0x1292BCu;
}
