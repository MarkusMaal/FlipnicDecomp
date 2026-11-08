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

// Function: entry_001b8df0
// Address: 0x1b8df0 - 0x1b8ec4
void entry_001b8df0_0x1b8df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8df0_0x1b8df0");
#endif

    switch (ctx->pc) {
        case 0x1b8ea4u: goto label_1b8ea4;
        case 0x1b8ebcu: goto label_1b8ebc;
        default: break;
    }

    ctx->pc = 0x1b8df0u;

label_1b8df0:
    // 0x1b8df0: 0xc6840040  lwc1        $f4, 0x40($s4)
    ctx->pc = 0x1b8df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b8df4:
    // 0x1b8df4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8df8:
    // 0x1b8df8: 0xc6830090  lwc1        $f3, 0x90($s4)
    ctx->pc = 0x1b8df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b8dfc:
    // 0x1b8dfc: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x1b8dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_1b8e00:
    // 0x1b8e00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8e00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8e04:
    // 0x1b8e04: 0xc68200b0  lwc1        $f2, 0xB0($s4)
    ctx->pc = 0x1b8e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8e08:
    // 0x1b8e08: 0xc425f440  lwc1        $f5, -0xBC0($at)
    ctx->pc = 0x1b8e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1b8e0c:
    // 0x1b8e0c: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x1b8e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1b8e10:
    // 0x1b8e10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b8e10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8e14:
    // 0x1b8e14: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1b8e14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1b8e18:
    // 0x1b8e18: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1b8e18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1b8e1c:
    // 0x1b8e1c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1b8e1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_1b8e20:
    // 0x1b8e20: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1b8e20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1b8e24:
    // 0x1b8e24: 0xc6840044  lwc1        $f4, 0x44($s4)
    ctx->pc = 0x1b8e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b8e28:
    // 0x1b8e28: 0xc6830094  lwc1        $f3, 0x94($s4)
    ctx->pc = 0x1b8e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b8e2c:
    // 0x1b8e2c: 0xc68200b4  lwc1        $f2, 0xB4($s4)
    ctx->pc = 0x1b8e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8e30:
    // 0x1b8e30: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1b8e30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1b8e34:
    // 0x1b8e34: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1b8e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1b8e38:
    // 0x1b8e38: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1b8e38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_1b8e3c:
    // 0x1b8e3c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1b8e3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1b8e40:
    // 0x1b8e40: 0xc6840048  lwc1        $f4, 0x48($s4)
    ctx->pc = 0x1b8e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b8e44:
    // 0x1b8e44: 0xc6830098  lwc1        $f3, 0x98($s4)
    ctx->pc = 0x1b8e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b8e48:
    // 0x1b8e48: 0xc68200b8  lwc1        $f2, 0xB8($s4)
    ctx->pc = 0x1b8e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8e4c:
    // 0x1b8e4c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1b8e4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1b8e50:
    // 0x1b8e50: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1b8e50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1b8e54:
    // 0x1b8e54: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1b8e54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_1b8e58:
    // 0x1b8e58: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1b8e58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1b8e5c:
    // 0x1b8e5c: 0xc684004c  lwc1        $f4, 0x4C($s4)
    ctx->pc = 0x1b8e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b8e60:
    // 0x1b8e60: 0xc683009c  lwc1        $f3, 0x9C($s4)
    ctx->pc = 0x1b8e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b8e64:
    // 0x1b8e64: 0xc68200bc  lwc1        $f2, 0xBC($s4)
    ctx->pc = 0x1b8e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8e68:
    // 0x1b8e68: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1b8e68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1b8e6c:
    // 0x1b8e6c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1b8e6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1b8e70:
    // 0x1b8e70: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b8e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b8e74:
    // 0x1b8e74: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b8e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b8e78:
    // 0x1b8e78: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1b8e78u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_1b8e7c:
    // 0x1b8e7c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b8e7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8e80:
    // 0x1b8e80: 0x0  nop
    ctx->pc = 0x1b8e80u;
    // NOP
label_1b8e84:
    // 0x1b8e84: 0x450100a7  bc1t        . + 4 + (0xA7 << 2)
label_1b8e88:
    if (ctx->pc == 0x1B8E88u) {
        ctx->pc = 0x1B8E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E84u;
        // 0x1b8e88: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E8Cu;
        goto label_1b8e8c;
    }
    ctx->pc = 0x1B8E84u;
    {
        const bool branch_taken_0x1b8e84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E84u;
        // 0x1b8e88: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e84) {
            ctx->pc = 0x1B9124u;
            return;
        }
    }
    ctx->pc = 0x1B8E8Cu;
label_1b8e8c:
    // 0x1b8e8c: 0x9022f280  lbu         $v0, -0xD80($at)
    ctx->pc = 0x1b8e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294963840)));
label_1b8e90:
    // 0x1b8e90: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1b8e94:
    if (ctx->pc == 0x1B8E94u) {
        ctx->pc = 0x1B8E98u;
        goto label_1b8e98;
    }
    ctx->pc = 0x1B8E90u;
    {
        const bool branch_taken_0x1b8e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8e90) {
            ctx->pc = 0x1B8EC4u;
            return;
        }
    }
    ctx->pc = 0x1B8E98u;
label_1b8e98:
    // 0x1b8e98: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x1b8e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1b8e9c:
    // 0x1b8e9c: 0xc0485c8  jal         func_121720
label_1b8ea0:
    if (ctx->pc == 0x1B8EA0u) {
        ctx->pc = 0x1B8EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E9Cu;
        // 0x1b8ea0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EA4u;
        goto label_1b8ea4;
    }
    ctx->pc = 0x1B8E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B8EA4u);
    ctx->pc = 0x1B8EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E9Cu;
    // 0x1b8ea0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121720u, 0x1B8E9Cu, 0x1B8EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8EA4u;
label_1b8ea4:
    // 0x1b8ea4: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1b8ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1b8ea8:
    // 0x1b8ea8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b8ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b8eac:
    // 0x1b8eac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b8eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8eb0:
    // 0x1b8eb0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b8eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b8eb4:
    // 0x1b8eb4: 0x320f809  jalr        $t9
label_1b8eb8:
    if (ctx->pc == 0x1B8EB8u) {
        ctx->pc = 0x1B8EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EB4u;
        // 0x1b8eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EBCu;
        goto label_1b8ebc;
    }
    ctx->pc = 0x1B8EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B8EBCu);
        ctx->pc = 0x1B8EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EB4u;
        // 0x1b8eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8EB4u, 0x1B8EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8EBCu;
label_1b8ebc:
    // 0x1b8ebc: 0x10000038  b           . + 4 + (0x38 << 2)
label_1b8ec0:
    if (ctx->pc == 0x1B8EC0u) {
        ctx->pc = 0x1B8EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EBCu;
        // 0x1b8ec0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EC4u;
        goto label_fallthrough_0x1b8ebc;
    }
    ctx->pc = 0x1B8EBCu;
    {
        const bool branch_taken_0x1b8ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EBCu;
        // 0x1b8ec0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ebc) {
            ctx->pc = 0x1B8FA0u;
            return;
        }
    }
label_fallthrough_0x1b8ebc:
    ctx->pc = 0x1B8EC4u;
}
