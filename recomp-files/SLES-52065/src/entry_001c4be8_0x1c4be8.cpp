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

// Function: entry_001c4be8
// Address: 0x1c4be8 - 0x1c4ca4
void entry_001c4be8_0x1c4be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4be8_0x1c4be8");
#endif

    switch (ctx->pc) {
        case 0x1c4c08u: goto label_1c4c08;
        case 0x1c4c14u: goto label_1c4c14;
        case 0x1c4c2cu: goto label_1c4c2c;
        case 0x1c4c44u: goto label_1c4c44;
        case 0x1c4c4cu: goto label_1c4c4c;
        case 0x1c4c54u: goto label_1c4c54;
        case 0x1c4c68u: goto label_1c4c68;
        case 0x1c4c78u: goto label_1c4c78;
        default: break;
    }

    ctx->pc = 0x1c4be8u;

    // 0x1c4be8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1c4be8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4bec: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x1c4becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c4bf0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1c4bf0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4bf4: 0x0  nop
    ctx->pc = 0x1c4bf4u;
    // NOP
    // 0x1c4bf8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c4bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c4bfc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c4bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c4c00: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C4C00u;
    SET_GPR_U32(ctx, 31, 0x1C4C08u);
    ctx->pc = 0x1C4C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C00u;
    // 0x1c4c04: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C4C00u, 0x1C4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C08u;
label_1c4c08:
    // 0x1c4c08: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1c4c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c4c0c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1C4C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C4C14u);
    ctx->pc = 0x1C4C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C0Cu;
    // 0x1c4c10: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1C4C0Cu, 0x1C4C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C14u;
label_1c4c14:
    // 0x1c4c14: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1c4c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4c18: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x1c4c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4c1c: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x1c4c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c4c20: 0xc7af005c  lwc1        $f15, 0x5C($sp)
    ctx->pc = 0x1c4c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c4c24: 0xc062860  jal         func_18A180
    ctx->pc = 0x1C4C24u;
    SET_GPR_U32(ctx, 31, 0x1C4C2Cu);
    ctx->pc = 0x1C4C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C24u;
    // 0x1c4c28: 0x8e640068  lw          $a0, 0x68($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1C4C24u, 0x1C4C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C2Cu;
label_1c4c2c:
    // 0x1c4c2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4c30: 0xc42cf820  lwc1        $f12, -0x7E0($at)
    ctx->pc = 0x1c4c30u;
    { uint32_t bits = FAST_READ32(0x36F820u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4c34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4c38: 0xc42df830  lwc1        $f13, -0x7D0($at)
    ctx->pc = 0x1c4c38u;
    { uint32_t bits = FAST_READ32(0x36F830u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4c3c: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1C4C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C4C44u);
    ctx->pc = 0x1C4C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C3Cu;
    // 0x1c4c40: 0x8e640068  lw          $a0, 0x68($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1C4C3Cu, 0x1C4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C44u;
label_1c4c44:
    // 0x1c4c44: 0xc073120  jal         func_1CC480
    ctx->pc = 0x1C4C44u;
    SET_GPR_U32(ctx, 31, 0x1C4C4Cu);
    ctx->pc = 0x1CC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC480u, 0x1C4C44u, 0x1C4C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C4Cu;
label_1c4c4c:
    // 0x1c4c4c: 0xc073134  jal         func_1CC4D0
    ctx->pc = 0x1C4C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C4C54u);
    ctx->pc = 0x1C4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C4Cu;
    // 0x1c4c50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC4D0u, 0x1C4C4Cu, 0x1C4C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C54u;
label_1c4c54:
    // 0x1c4c54: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x1c4c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c4c58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c4c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c4c5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c4c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c60: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1C4C60u;
    SET_GPR_U32(ctx, 31, 0x1C4C68u);
    ctx->pc = 0x1C4C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C60u;
    // 0x1c4c64: 0x24a51ee0  addiu       $a1, $a1, 0x1EE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1C4C60u, 0x1C4C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C68u;
label_1c4c68:
    // 0x1c4c68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c4c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4c70: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4C70u;
    SET_GPR_U32(ctx, 31, 0x1C4C78u);
    ctx->pc = 0x1C4C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C70u;
    // 0x1c4c74: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4C70u, 0x1C4C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C78u;
label_1c4c78:
    // 0x1c4c78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4c80: 0x8022f848  lb          $v0, -0x7B8($at)
    ctx->pc = 0x1c4c80u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F848u));
    // 0x1c4c84: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4C84u;
    {
        const bool branch_taken_0x1c4c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c84) {
            ctx->pc = 0x1C4CA4u;
            return;
        }
    }
    ctx->pc = 0x1C4C8Cu;
    // 0x1c4c8c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1c4c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c4c90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4c94: 0xac23f840  sw          $v1, -0x7C0($at)
    ctx->pc = 0x1c4c94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F840u, _value); } while (0);
    // 0x1c4c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4c9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4ca0: 0xa022f848  sb          $v0, -0x7B8($at)
    ctx->pc = 0x1c4ca0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F848u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F848u, _value); } while (0);
    ctx->pc = 0x1c4ca4u;
}
