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

// Function: FUN_00128d90
// Address: 0x128d90 - 0x128f2c
void FUN_00128d90_0x128d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128d90_0x128d90");
#endif

    switch (ctx->pc) {
        case 0x128db8u: goto label_128db8;
        case 0x128dc0u: goto label_128dc0;
        case 0x128dd0u: goto label_128dd0;
        case 0x128df4u: goto label_128df4;
        case 0x128e00u: goto label_128e00;
        case 0x128e34u: goto label_128e34;
        case 0x128e64u: goto label_128e64;
        case 0x128eb8u: goto label_128eb8;
        case 0x128ec8u: goto label_128ec8;
        default: break;
    }

    ctx->pc = 0x128d90u;

    // 0x128d90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x128d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x128d94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x128d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x128d98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x128d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x128d9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x128d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x128da0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x128da0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128da4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x128da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x128da8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x128da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128db0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128DB0u;
    SET_GPR_U32(ctx, 31, 0x128DB8u);
    ctx->pc = 0x128DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DB0u;
    // 0x128db4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128DB0u, 0x128DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DB8u;
label_128db8:
    // 0x128db8: 0xc04a050  jal         func_128140
    ctx->pc = 0x128DB8u;
    SET_GPR_U32(ctx, 31, 0x128DC0u);
    ctx->pc = 0x128DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DB8u;
    // 0x128dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128140u, 0x128DB8u, 0x128DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DC0u;
label_128dc0:
    // 0x128dc0: 0x8e700014  lw          $s0, 0x14($s3)
    ctx->pc = 0x128dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x128dc4: 0x8e710018  lw          $s1, 0x18($s3)
    ctx->pc = 0x128dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x128dc8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128DC8u;
    SET_GPR_U32(ctx, 31, 0x128DD0u);
    ctx->pc = 0x128DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DC8u;
    // 0x128dcc: 0xae930128  sw          $s3, 0x128($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128DC8u, 0x128DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DD0u;
label_128dd0:
    // 0x128dd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x128dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dd4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x128dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x128dd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128DD8u;
    {
        const bool branch_taken_0x128dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128dd8) {
            ctx->pc = 0x128DE8u;
            goto label_128de8;
        }
    }
    ctx->pc = 0x128DE0u;
    // 0x128de0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x128de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x128de4: 0xae8200a8  sw          $v0, 0xA8($s4)
    ctx->pc = 0x128de4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
label_128de8:
    // 0x128de8: 0x8e8500a8  lw          $a1, 0xA8($s4)
    ctx->pc = 0x128de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x128dec: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x128DECu;
    SET_GPR_U32(ctx, 31, 0x128DF4u);
    ctx->pc = 0x128DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DECu;
    // 0x128df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x128DECu, 0x128DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DF4u;
label_128df4:
    // 0x128df4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x128df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x128df8: 0xc0498ac  jal         func_1262B0
    ctx->pc = 0x128DF8u;
    SET_GPR_U32(ctx, 31, 0x128E00u);
    ctx->pc = 0x128DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DF8u;
    // 0x128dfc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1262B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1262B0u, 0x128DF8u, 0x128E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E00u;
label_128e00:
    // 0x128e00: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x128e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x128e04: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x128e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x128e08: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x128e08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128e0c: 0x7e8300b0  sq          $v1, 0xB0($s4)
    ctx->pc = 0x128e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 176), GPR_VEC(ctx, 3));
    // 0x128e10: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x128e10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128e14: 0x7e8200c0  sq          $v0, 0xC0($s4)
    ctx->pc = 0x128e14u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 192), GPR_VEC(ctx, 2));
    // 0x128e18: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x128e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128e1c: 0xe68000d0  swc1        $f0, 0xD0($s4)
    ctx->pc = 0x128e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 208), bits); }
    // 0x128e20: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x128e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128e24: 0xe68000d4  swc1        $f0, 0xD4($s4)
    ctx->pc = 0x128e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 212), bits); }
    // 0x128e28: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x128e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x128e2c: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x128E2Cu;
    SET_GPR_U32(ctx, 31, 0x128E34u);
    ctx->pc = 0x128E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E2Cu;
    // 0x128e30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x128E2Cu, 0x128E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E34u;
label_128e34:
    // 0x128e34: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x128e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128e38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e3c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x128e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x128e40: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x128e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128e48: 0x0  nop
    ctx->pc = 0x128e48u;
    // NOP
    // 0x128e4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x128e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x128e50: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x128e50u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x128e54: 0x0  nop
    ctx->pc = 0x128e54u;
    // NOP
    // 0x128e58: 0x0  nop
    ctx->pc = 0x128e58u;
    // NOP
    // 0x128e5c: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x128E5Cu;
    SET_GPR_U32(ctx, 31, 0x128E64u);
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x128E5Cu, 0x128E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E64u;
label_128e64:
    // 0x128e64: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x128e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128e68: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x128e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128e6c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x128e6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128e70: 0x7e8300e0  sq          $v1, 0xE0($s4)
    ctx->pc = 0x128e70u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 224), GPR_VEC(ctx, 3));
    // 0x128e74: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x128e74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128e78: 0x7e8200f0  sq          $v0, 0xF0($s4)
    ctx->pc = 0x128e78u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 240), GPR_VEC(ctx, 2));
    // 0x128e7c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x128e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128e80: 0xe6800100  swc1        $f0, 0x100($s4)
    ctx->pc = 0x128e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 256), bits); }
    // 0x128e84: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x128e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128e88: 0xe6800104  swc1        $f0, 0x104($s4)
    ctx->pc = 0x128e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 260), bits); }
    // 0x128e8c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x128e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x128e90: 0xae820118  sw          $v0, 0x118($s4)
    ctx->pc = 0x128e90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 2));
    // 0x128e94: 0xc68000a4  lwc1        $f0, 0xA4($s4)
    ctx->pc = 0x128e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128e98: 0xe680011c  swc1        $f0, 0x11C($s4)
    ctx->pc = 0x128e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 284), bits); }
    // 0x128e9c: 0x8e8200a8  lw          $v0, 0xA8($s4)
    ctx->pc = 0x128e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x128ea0: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x128ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
    // 0x128ea4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x128ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x128ea8: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x128ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
    // 0x128eac: 0x8e850118  lw          $a1, 0x118($s4)
    ctx->pc = 0x128eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x128eb0: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x128EB0u;
    SET_GPR_U32(ctx, 31, 0x128EB8u);
    ctx->pc = 0x128EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EB0u;
    // 0x128eb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x128EB0u, 0x128EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EB8u;
label_128eb8:
    // 0x128eb8: 0x8e850118  lw          $a1, 0x118($s4)
    ctx->pc = 0x128eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x128ebc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x128ebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x128ec0: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x128EC0u;
    SET_GPR_U32(ctx, 31, 0x128EC8u);
    ctx->pc = 0x128EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EC0u;
    // 0x128ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x128EC0u, 0x128EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EC8u;
label_128ec8:
    // 0x128ec8: 0x8e830118  lw          $v1, 0x118($s4)
    ctx->pc = 0x128ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x128ecc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128ed0: 0x1204000a  beq         $s0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x128ED0u;
    {
        const bool branch_taken_0x128ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x128ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128ED0u;
        // 0x128ed4: 0xae83012c  sw          $v1, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ed0) {
            ctx->pc = 0x128EFCu;
            goto label_128efc;
        }
    }
    ctx->pc = 0x128ED8u;
    // 0x128ed8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128ED8u;
    {
        const bool branch_taken_0x128ed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x128ed8) {
            ctx->pc = 0x128EE8u;
            goto label_128ee8;
        }
    }
    ctx->pc = 0x128EE0u;
    // 0x128ee0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x128EE0u;
    {
        const bool branch_taken_0x128ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EE0u;
        // 0x128ee4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ee0) {
            ctx->pc = 0x128F10u;
            goto label_128f10;
        }
    }
    ctx->pc = 0x128EE8u;
label_128ee8:
    // 0x128ee8: 0xae800110  sw          $zero, 0x110($s4)
    ctx->pc = 0x128ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 0));
    // 0x128eec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x128eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128ef0: 0xae840114  sw          $a0, 0x114($s4)
    ctx->pc = 0x128ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 4));
    // 0x128ef4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128EF4u;
    {
        const bool branch_taken_0x128ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EF4u;
        // 0x128ef8: 0xae8300a0  sw          $v1, 0xA0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ef4) {
            ctx->pc = 0x128F0Cu;
            goto label_128f0c;
        }
    }
    ctx->pc = 0x128EFCu;
label_128efc:
    // 0x128efc: 0xae910110  sw          $s1, 0x110($s4)
    ctx->pc = 0x128efcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 17));
    // 0x128f00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x128f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128f04: 0xae910114  sw          $s1, 0x114($s4)
    ctx->pc = 0x128f04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 17));
    // 0x128f08: 0xae8300a0  sw          $v1, 0xA0($s4)
    ctx->pc = 0x128f08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 3));
label_128f0c:
    // 0x128f0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x128f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_128f10:
    // 0x128f10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x128f10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128f14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x128f14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128f18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x128f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128f1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128f24: 0x3e00008  jr          $ra
    ctx->pc = 0x128F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F24u;
        // 0x128f28: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128F2Cu;
}
