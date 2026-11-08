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

// Function: entry_00128a68
// Address: 0x128a68 - 0x128b74
void entry_00128a68_0x128a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128a68_0x128a68");
#endif

    switch (ctx->pc) {
        case 0x128a70u: goto label_128a70;
        case 0x128a7cu: goto label_128a7c;
        case 0x128a84u: goto label_128a84;
        case 0x128a98u: goto label_128a98;
        case 0x128aacu: goto label_128aac;
        case 0x128afcu: goto label_128afc;
        case 0x128b54u: goto label_128b54;
        default: break;
    }

    ctx->pc = 0x128a68u;

    // 0x128a68: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128A68u;
    SET_GPR_U32(ctx, 31, 0x128A70u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128A68u, 0x128A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A70u;
label_128a70:
    // 0x128a70: 0x8e850118  lw          $a1, 0x118($s4)
    ctx->pc = 0x128a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x128a74: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x128A74u;
    SET_GPR_U32(ctx, 31, 0x128A7Cu);
    ctx->pc = 0x128A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A74u;
    // 0x128a78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x128A74u, 0x128A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A7Cu;
label_128a7c:
    // 0x128a7c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128A7Cu;
    SET_GPR_U32(ctx, 31, 0x128A84u);
    ctx->pc = 0x128A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A7Cu;
    // 0x128a80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128A7Cu, 0x128A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A84u;
label_128a84:
    // 0x128a84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x128a8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x128a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x128a90: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x128A90u;
    SET_GPR_U32(ctx, 31, 0x128A98u);
    ctx->pc = 0x128A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A90u;
    // 0x128a94: 0x8e850118  lw          $a1, 0x118($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x128A90u, 0x128A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A98u;
label_128a98:
    // 0x128a98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x128a9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128aa0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x128aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x128aa4: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x128AA4u;
    SET_GPR_U32(ctx, 31, 0x128AACu);
    ctx->pc = 0x128AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AA4u;
    // 0x128aa8: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x128AA4u, 0x128AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AACu;
label_128aac:
    // 0x128aac: 0x7ba30250  lq          $v1, 0x250($sp)
    ctx->pc = 0x128aacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x128ab0: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x128ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128ab4: 0x7ba20260  lq          $v0, 0x260($sp)
    ctx->pc = 0x128ab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x128ab8: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x128ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128abc: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x128abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x128ac0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x128ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x128ac4: 0x268600e0  addiu       $a2, $s4, 0xE0
    ctx->pc = 0x128ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x128ac8: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x128ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x128acc: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x128accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x128ad0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x128ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x128ad4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x128ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x128ad8: 0xc6810110  lwc1        $f1, 0x110($s4)
    ctx->pc = 0x128ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128adc: 0xc6800114  lwc1        $f0, 0x114($s4)
    ctx->pc = 0x128adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128ae0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x128ae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x128ae4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x128ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x128ae8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x128ae8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x128aec: 0x0  nop
    ctx->pc = 0x128aecu;
    // NOP
    // 0x128af0: 0x0  nop
    ctx->pc = 0x128af0u;
    // NOP
    // 0x128af4: 0xc049860  jal         func_126180
    ctx->pc = 0x128AF4u;
    SET_GPR_U32(ctx, 31, 0x128AFCu);
    ctx->pc = 0x126180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126180u, 0x128AF4u, 0x128AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AFCu;
label_128afc:
    // 0x128afc: 0x7ba30280  lq          $v1, 0x280($sp)
    ctx->pc = 0x128afcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x128b00: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x128b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x128b04: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x128b04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x128b08: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x128b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x128b0c: 0x27a80154  addiu       $t0, $sp, 0x154
    ctx->pc = 0x128b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x128b10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b14: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x128b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x128b18: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x128b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x128b1c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x128b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x128b20: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x128b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b24: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x128b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x128b28: 0xc7a002a4  lwc1        $f0, 0x2A4($sp)
    ctx->pc = 0x128b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b2c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x128b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x128b30: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x128b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x128b34: 0x7fa202b0  sq          $v0, 0x2B0($sp)
    ctx->pc = 0x128b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 2));
    // 0x128b38: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x128b38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x128b3c: 0x7fa202c0  sq          $v0, 0x2C0($sp)
    ctx->pc = 0x128b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
    // 0x128b40: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x128b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b44: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x128b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x128b48: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x128b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b4c: 0xc049948  jal         func_126520
    ctx->pc = 0x128B4Cu;
    SET_GPR_U32(ctx, 31, 0x128B54u);
    ctx->pc = 0x128B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B4Cu;
    // 0x128b50: 0xe7a002d4  swc1        $f0, 0x2D4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x128B4Cu, 0x128B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B54u;
label_128b54:
    // 0x128b54: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x128b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x128b58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x128b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x128b5c: 0xae830110  sw          $v1, 0x110($s4)
    ctx->pc = 0x128b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 3));
    // 0x128b60: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x128b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x128b64: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128B64u;
    {
        const bool branch_taken_0x128b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x128b64) {
            ctx->pc = 0x128B7Cu;
            return;
        }
    }
    ctx->pc = 0x128B6Cu;
    // 0x128b6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128B6Cu;
    {
        const bool branch_taken_0x128b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B6Cu;
        // 0x128b70: 0xae8000a0  sw          $zero, 0xA0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b6c) {
            ctx->pc = 0x128B7Cu;
            return;
        }
    }
    ctx->pc = 0x128B74u;
}
