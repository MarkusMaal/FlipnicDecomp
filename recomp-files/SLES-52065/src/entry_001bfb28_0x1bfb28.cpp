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

// Function: entry_001bfb28
// Address: 0x1bfb28 - 0x1bfbec
void entry_001bfb28_0x1bfb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfb28_0x1bfb28");
#endif

    switch (ctx->pc) {
        case 0x1bfb40u: goto label_1bfb40;
        case 0x1bfb64u: goto label_1bfb64;
        case 0x1bfb7cu: goto label_1bfb7c;
        case 0x1bfb88u: goto label_1bfb88;
        case 0x1bfba0u: goto label_1bfba0;
        case 0x1bfbb4u: goto label_1bfbb4;
        case 0x1bfbc8u: goto label_1bfbc8;
        case 0x1bfbd4u: goto label_1bfbd4;
        case 0x1bfbe8u: goto label_1bfbe8;
        default: break;
    }

    ctx->pc = 0x1bfb28u;

    // 0x1bfb28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb2c: 0xc42cf520  lwc1        $f12, -0xAE0($at)
    ctx->pc = 0x1bfb2cu;
    { uint32_t bits = FAST_READ32(0x36F520u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfb30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb34: 0xc42df530  lwc1        $f13, -0xAD0($at)
    ctx->pc = 0x1bfb34u;
    { uint32_t bits = FAST_READ32(0x36F530u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bfb38: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1BFB38u;
    SET_GPR_U32(ctx, 31, 0x1BFB40u);
    ctx->pc = 0x1BFB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB38u;
    // 0x1bfb3c: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1BFB38u, 0x1BFB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB40u;
label_1bfb40:
    // 0x1bfb40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb44: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1bfb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1bfb48: 0xc421f500  lwc1        $f1, -0xB00($at)
    ctx->pc = 0x1bfb48u;
    { uint32_t bits = FAST_READ32(0x36F500u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bfb4c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1bfb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bfb50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb54: 0xc420f510  lwc1        $f0, -0xAF0($at)
    ctx->pc = 0x1bfb54u;
    { uint32_t bits = FAST_READ32(0x36F510u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bfb58: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bfb58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bfb5c: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1BFB5Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB64u);
    ctx->pc = 0x1BFB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB5Cu;
    // 0x1bfb60: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1BFB5Cu, 0x1BFB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB64u;
label_1bfb64:
    // 0x1bfb64: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1bfb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1bfb68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb6c: 0x8c31ca84  lw          $s1, -0x357C($at)
    ctx->pc = 0x1bfb6cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1bfb70: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bfb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bfb74: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BFB74u;
    SET_GPR_U32(ctx, 31, 0x1BFB7Cu);
    ctx->pc = 0x1BFB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB74u;
    // 0x1bfb78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BFB74u, 0x1BFB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB7Cu;
label_1bfb7c:
    // 0x1bfb7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bfb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb80: 0xc06eb68  jal         func_1BADA0
    ctx->pc = 0x1BFB80u;
    SET_GPR_U32(ctx, 31, 0x1BFB88u);
    ctx->pc = 0x1BFB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB80u;
    // 0x1bfb84: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BADA0u, 0x1BFB80u, 0x1BFB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB88u;
label_1bfb88:
    // 0x1bfb88: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1bfb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfb8c: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x1bfb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bfb90: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x1bfb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bfb94: 0xc7af005c  lwc1        $f15, 0x5C($sp)
    ctx->pc = 0x1bfb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bfb98: 0xc062860  jal         func_18A180
    ctx->pc = 0x1BFB98u;
    SET_GPR_U32(ctx, 31, 0x1BFBA0u);
    ctx->pc = 0x1BFB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB98u;
    // 0x1bfb9c: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1BFB98u, 0x1BFBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBA0u;
label_1bfba0:
    // 0x1bfba0: 0xde260028  ld          $a2, 0x28($s1)
    ctx->pc = 0x1bfba0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1bfba4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bfba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bfba8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1bfba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bfbac: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1BFBACu;
    SET_GPR_U32(ctx, 31, 0x1BFBB4u);
    ctx->pc = 0x1BFBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBACu;
    // 0x1bfbb0: 0x24a51578  addiu       $a1, $a1, 0x1578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1BFBACu, 0x1BFBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBB4u;
label_1bfbb4:
    // 0x1bfbb4: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1bfbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1bfbb8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bfbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bfbbc: 0x24a51580  addiu       $a1, $a1, 0x1580
    ctx->pc = 0x1bfbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5504));
    // 0x1bfbc0: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1BFBC0u;
    SET_GPR_U32(ctx, 31, 0x1BFBC8u);
    ctx->pc = 0x1BFBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBC0u;
    // 0x1bfbc4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1BFBC0u, 0x1BFBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBC8u;
label_1bfbc8:
    // 0x1bfbc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbcc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BFBCCu;
    SET_GPR_U32(ctx, 31, 0x1BFBD4u);
    ctx->pc = 0x1BFBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBCCu;
    // 0x1bfbd0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BFBCCu, 0x1BFBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBD4u;
label_1bfbd4:
    // 0x1bfbd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFBD4u;
    {
        const bool branch_taken_0x1bfbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBD4u;
        // 0x1bfbd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbd4) {
            ctx->pc = 0x1BFBECu;
            return;
        }
    }
    ctx->pc = 0x1BFBDCu;
    // 0x1bfbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbe0: 0xc06ffbc  jal         func_1BFEF0
    ctx->pc = 0x1BFBE0u;
    SET_GPR_U32(ctx, 31, 0x1BFBE8u);
    ctx->pc = 0x1BFBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBE0u;
    // 0x1bfbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFEF0u, 0x1BFBE0u, 0x1BFBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBE8u;
label_1bfbe8:
    // 0x1bfbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bfbecu;
}
