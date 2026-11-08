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

// Function: entry_001ce26c
// Address: 0x1ce26c - 0x1ce368
void entry_001ce26c_0x1ce26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce26c_0x1ce26c");
#endif

    switch (ctx->pc) {
        case 0x1ce278u: goto label_1ce278;
        case 0x1ce284u: goto label_1ce284;
        case 0x1ce29cu: goto label_1ce29c;
        case 0x1ce2c0u: goto label_1ce2c0;
        case 0x1ce2e4u: goto label_1ce2e4;
        case 0x1ce2f8u: goto label_1ce2f8;
        case 0x1ce310u: goto label_1ce310;
        case 0x1ce328u: goto label_1ce328;
        case 0x1ce34cu: goto label_1ce34c;
        case 0x1ce364u: goto label_1ce364;
        default: break;
    }

    ctx->pc = 0x1ce26cu;

    // 0x1ce26c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ce26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ce270: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE270u;
    SET_GPR_U32(ctx, 31, 0x1CE278u);
    ctx->pc = 0x1CE274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE270u;
    // 0x1ce274: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE270u, 0x1CE278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE278u;
label_1ce278:
    // 0x1ce278: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1ce278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1ce27c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1CE27Cu;
    SET_GPR_U32(ctx, 31, 0x1CE284u);
    ctx->pc = 0x1CE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE27Cu;
    // 0x1ce280: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1CE27Cu, 0x1CE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE284u;
label_1ce284:
    // 0x1ce284: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce288: 0xc42cfb00  lwc1        $f12, -0x500($at)
    ctx->pc = 0x1ce288u;
    { uint32_t bits = FAST_READ32(0x36FB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce28c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce290: 0xc42dfb10  lwc1        $f13, -0x4F0($at)
    ctx->pc = 0x1ce290u;
    { uint32_t bits = FAST_READ32(0x36FB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce294: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1CE294u;
    SET_GPR_U32(ctx, 31, 0x1CE29Cu);
    ctx->pc = 0x1CE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE294u;
    // 0x1ce298: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1CE294u, 0x1CE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE29Cu;
label_1ce29c:
    // 0x1ce29c: 0x27b300c4  addiu       $s3, $sp, 0xC4
    ctx->pc = 0x1ce29cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1ce2a0: 0x27b200c8  addiu       $s2, $sp, 0xC8
    ctx->pc = 0x1ce2a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1ce2a4: 0x27b100cc  addiu       $s1, $sp, 0xCC
    ctx->pc = 0x1ce2a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x1ce2a8: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1ce2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce2ac: 0xc66d0000  lwc1        $f13, 0x0($s3)
    ctx->pc = 0x1ce2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce2b0: 0xc64e0000  lwc1        $f14, 0x0($s2)
    ctx->pc = 0x1ce2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce2b4: 0xc62f0000  lwc1        $f15, 0x0($s1)
    ctx->pc = 0x1ce2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ce2b8: 0xc062860  jal         func_18A180
    ctx->pc = 0x1CE2B8u;
    SET_GPR_U32(ctx, 31, 0x1CE2C0u);
    ctx->pc = 0x1CE2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE2B8u;
    // 0x1ce2bc: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1CE2B8u, 0x1CE2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2C0u;
label_1ce2c0:
    // 0x1ce2c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce2c4: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce2c8: 0xc421fac0  lwc1        $f1, -0x540($at)
    ctx->pc = 0x1ce2c8u;
    { uint32_t bits = FAST_READ32(0x36FAC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce2cc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ce2ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce2d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce2d4: 0xc420fad0  lwc1        $f0, -0x530($at)
    ctx->pc = 0x1ce2d4u;
    { uint32_t bits = FAST_READ32(0x36FAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce2d8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ce2d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ce2dc: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CE2DCu;
    SET_GPR_U32(ctx, 31, 0x1CE2E4u);
    ctx->pc = 0x1CE2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE2DCu;
    // 0x1ce2e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CE2DCu, 0x1CE2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2E4u;
label_1ce2e4:
    // 0x1ce2e4: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce2e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce2ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ce2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2f0: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CE2F0u;
    SET_GPR_U32(ctx, 31, 0x1CE2F8u);
    ctx->pc = 0x1CE2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE2F0u;
    // 0x1ce2f4: 0x24a52eb8  addiu       $a1, $a1, 0x2EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CE2F0u, 0x1CE2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2F8u;
label_1ce2f8:
    // 0x1ce2f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce2fc: 0xc42cfb20  lwc1        $f12, -0x4E0($at)
    ctx->pc = 0x1ce2fcu;
    { uint32_t bits = FAST_READ32(0x36FB20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce300: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce304: 0xc42dfb30  lwc1        $f13, -0x4D0($at)
    ctx->pc = 0x1ce304u;
    { uint32_t bits = FAST_READ32(0x36FB30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce308: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1CE308u;
    SET_GPR_U32(ctx, 31, 0x1CE310u);
    ctx->pc = 0x1CE30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE308u;
    // 0x1ce30c: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1CE308u, 0x1CE310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE310u;
label_1ce310:
    // 0x1ce310: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce314: 0xc64e0000  lwc1        $f14, 0x0($s2)
    ctx->pc = 0x1ce314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce318: 0xc62f0000  lwc1        $f15, 0x0($s1)
    ctx->pc = 0x1ce318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ce31c: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1ce31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce320: 0xc062860  jal         func_18A180
    ctx->pc = 0x1CE320u;
    SET_GPR_U32(ctx, 31, 0x1CE328u);
    ctx->pc = 0x1CE324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE320u;
    // 0x1ce324: 0xc66d0000  lwc1        $f13, 0x0($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1CE320u, 0x1CE328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE328u;
label_1ce328:
    // 0x1ce328: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce32c: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce330: 0xc421fae0  lwc1        $f1, -0x520($at)
    ctx->pc = 0x1ce330u;
    { uint32_t bits = FAST_READ32(0x36FAE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce334: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ce334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce338: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce33c: 0xc420faf0  lwc1        $f0, -0x510($at)
    ctx->pc = 0x1ce33cu;
    { uint32_t bits = FAST_READ32(0x36FAF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce340: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ce340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ce344: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CE344u;
    SET_GPR_U32(ctx, 31, 0x1CE34Cu);
    ctx->pc = 0x1CE348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE344u;
    // 0x1ce348: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CE344u, 0x1CE34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE34Cu;
label_1ce34c:
    // 0x1ce34c: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce350: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce354: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1ce354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1ce358: 0x24a52eb8  addiu       $a1, $a1, 0x2EB8
    ctx->pc = 0x1ce358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11960));
    // 0x1ce35c: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CE35Cu;
    SET_GPR_U32(ctx, 31, 0x1CE364u);
    ctx->pc = 0x1CE360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE35Cu;
    // 0x1ce360: 0x24c6faa0  addiu       $a2, $a2, -0x560 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CE35Cu, 0x1CE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE364u;
label_1ce364:
    // 0x1ce364: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ce368u;
}
