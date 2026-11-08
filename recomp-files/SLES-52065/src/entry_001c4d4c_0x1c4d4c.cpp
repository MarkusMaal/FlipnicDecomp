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

// Function: entry_001c4d4c
// Address: 0x1c4d4c - 0x1c4e64
void entry_001c4d4c_0x1c4d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4d4c_0x1c4d4c");
#endif

    switch (ctx->pc) {
        case 0x1c4d64u: goto label_1c4d64;
        case 0x1c4d84u: goto label_1c4d84;
        case 0x1c4d90u: goto label_1c4d90;
        case 0x1c4da8u: goto label_1c4da8;
        case 0x1c4dc8u: goto label_1c4dc8;
        case 0x1c4dfcu: goto label_1c4dfc;
        case 0x1c4e1cu: goto label_1c4e1c;
        case 0x1c4e30u: goto label_1c4e30;
        case 0x1c4e40u: goto label_1c4e40;
        case 0x1c4e58u: goto label_1c4e58;
        case 0x1c4e60u: goto label_1c4e60;
        default: break;
    }

    ctx->pc = 0x1c4d4cu;

    // 0x1c4d4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d50: 0xc42cf860  lwc1        $f12, -0x7A0($at)
    ctx->pc = 0x1c4d50u;
    { uint32_t bits = FAST_READ32(0x36F860u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4d54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d58: 0xc42df870  lwc1        $f13, -0x790($at)
    ctx->pc = 0x1c4d58u;
    { uint32_t bits = FAST_READ32(0x36F870u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4d5c: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1C4D5Cu;
    SET_GPR_U32(ctx, 31, 0x1C4D64u);
    ctx->pc = 0x1C4D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D5Cu;
    // 0x1c4d60: 0x8e640068  lw          $a0, 0x68($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1C4D5Cu, 0x1C4D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D64u;
label_1c4d64:
    // 0x1c4d64: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1c4d64u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4d68: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x1c4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c4d6c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1c4d6cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4d70: 0x0  nop
    ctx->pc = 0x1c4d70u;
    // NOP
    // 0x1c4d74: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c4d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c4d78: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c4d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c4d7c: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C4D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C4D84u);
    ctx->pc = 0x1C4D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D7Cu;
    // 0x1c4d80: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C4D7Cu, 0x1C4D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D84u;
label_1c4d84:
    // 0x1c4d84: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1c4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c4d88: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1C4D88u;
    SET_GPR_U32(ctx, 31, 0x1C4D90u);
    ctx->pc = 0x1C4D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D88u;
    // 0x1c4d8c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1C4D88u, 0x1C4D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D90u;
label_1c4d90:
    // 0x1c4d90: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x1c4d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4d94: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x1c4d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4d98: 0xc7ae0068  lwc1        $f14, 0x68($sp)
    ctx->pc = 0x1c4d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c4d9c: 0xc7af006c  lwc1        $f15, 0x6C($sp)
    ctx->pc = 0x1c4d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c4da0: 0xc062860  jal         func_18A180
    ctx->pc = 0x1C4DA0u;
    SET_GPR_U32(ctx, 31, 0x1C4DA8u);
    ctx->pc = 0x1C4DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4DA0u;
    // 0x1c4da4: 0x8e640068  lw          $a0, 0x68($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1C4DA0u, 0x1C4DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DA8u;
label_1c4da8:
    // 0x1c4da8: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x1c4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c4dac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4db0: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x1c4db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c4db4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c4db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c4db8: 0x8c27f7e0  lw          $a3, -0x820($at)
    ctx->pc = 0x1c4db8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x36F7E0u));
    // 0x1c4dbc: 0x24a51ee8  addiu       $a1, $a1, 0x1EE8
    ctx->pc = 0x1c4dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7912));
    // 0x1c4dc0: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1C4DC0u;
    SET_GPR_U32(ctx, 31, 0x1C4DC8u);
    ctx->pc = 0x1C4DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4DC0u;
    // 0x1c4dc4: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1C4DC0u, 0x1C4DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DC8u;
label_1c4dc8:
    // 0x1c4dc8: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x1c4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c4dcc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4dd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4dd4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c4dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c4dd8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c4dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c4ddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4de0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c4de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4de4: 0x266a0060  addiu       $t2, $s3, 0x60
    ctx->pc = 0x1c4de4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x1c4de8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c4de8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4dec: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x1c4decu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x1c4df0: 0x8c22f7e0  lw          $v0, -0x820($at)
    ctx->pc = 0x1c4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F7E0u));
    // 0x1c4df4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C4DF4u;
    SET_GPR_U32(ctx, 31, 0x1C4DFCu);
    ctx->pc = 0x1C4DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4DF4u;
    // 0x1c4df8: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C4DF4u, 0x1C4DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DFCu;
label_1c4dfc:
    // 0x1c4dfc: 0x8e660060  lw          $a2, 0x60($s3)
    ctx->pc = 0x1c4dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c4e00: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x1c4e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1c4e04: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C4E04u;
    {
        const bool branch_taken_0x1c4e04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E04u;
        // 0x1c4e08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e04) {
            ctx->pc = 0x1C4E8Cu;
            return;
        }
    }
    ctx->pc = 0x1C4E0Cu;
    // 0x1c4e0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c4e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c4e14: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4E14u;
    SET_GPR_U32(ctx, 31, 0x1C4E1Cu);
    ctx->pc = 0x1C4E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E14u;
    // 0x1c4e18: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4E14u, 0x1C4E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E1Cu;
label_1c4e1c:
    // 0x1c4e1c: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c4e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c4e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e24: 0x8e660064  lw          $a2, 0x64($s3)
    ctx->pc = 0x1c4e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1c4e28: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4E28u;
    SET_GPR_U32(ctx, 31, 0x1C4E30u);
    ctx->pc = 0x1C4E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E28u;
    // 0x1c4e2c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4E28u, 0x1C4E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E30u;
label_1c4e30:
    // 0x1c4e30: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c4e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4e34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e38: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C4E38u;
    SET_GPR_U32(ctx, 31, 0x1C4E40u);
    ctx->pc = 0x1C4E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E38u;
    // 0x1c4e3c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C4E38u, 0x1C4E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E40u;
label_1c4e40:
    // 0x1c4e40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4E40u;
    {
        const bool branch_taken_0x1c4e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E40u;
        // 0x1c4e44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e40) {
            ctx->pc = 0x1C4E64u;
            return;
        }
    }
    ctx->pc = 0x1C4E48u;
    // 0x1c4e48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c4e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4e4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e50: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4E50u;
    SET_GPR_U32(ctx, 31, 0x1C4E58u);
    ctx->pc = 0x1C4E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E50u;
    // 0x1c4e54: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4E50u, 0x1C4E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E58u;
label_1c4e58:
    // 0x1c4e58: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C4E58u;
    SET_GPR_U32(ctx, 31, 0x1C4E60u);
    ctx->pc = 0x1C4E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E58u;
    // 0x1c4e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C4E58u, 0x1C4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E60u;
label_1c4e60:
    // 0x1c4e60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c4e64u;
}
