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

// Function: entry_001c9cc0
// Address: 0x1c9cc0 - 0x1c9d54
void entry_001c9cc0_0x1c9cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9cc0_0x1c9cc0");
#endif

    switch (ctx->pc) {
        case 0x1c9cd8u: goto label_1c9cd8;
        case 0x1c9cf8u: goto label_1c9cf8;
        case 0x1c9d10u: goto label_1c9d10;
        case 0x1c9d2cu: goto label_1c9d2c;
        case 0x1c9d34u: goto label_1c9d34;
        default: break;
    }

    ctx->pc = 0x1c9cc0u;

    // 0x1c9cc0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9cc4: 0xc42cf920  lwc1        $f12, -0x6E0($at)
    ctx->pc = 0x1c9cc4u;
    { uint32_t bits = FAST_READ32(0x36F920u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9cc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9ccc: 0xc42df930  lwc1        $f13, -0x6D0($at)
    ctx->pc = 0x1c9cccu;
    { uint32_t bits = FAST_READ32(0x36F930u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9cd0: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1C9CD0u;
    SET_GPR_U32(ctx, 31, 0x1C9CD8u);
    ctx->pc = 0x1C9CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9CD0u;
    // 0x1c9cd4: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1C9CD0u, 0x1C9CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CD8u;
label_1c9cd8:
    // 0x1c9cd8: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1c9cd8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9cdc: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c9cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c9ce0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1c9ce0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ce4: 0x0  nop
    ctx->pc = 0x1c9ce4u;
    // NOP
    // 0x1c9ce8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c9ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c9cec: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c9cecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c9cf0: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C9CF0u;
    SET_GPR_U32(ctx, 31, 0x1C9CF8u);
    ctx->pc = 0x1C9CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9CF0u;
    // 0x1c9cf4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C9CF0u, 0x1C9CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CF8u;
label_1c9cf8:
    // 0x1c9cf8: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x1c9cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9cfc: 0xc60d0044  lwc1        $f13, 0x44($s0)
    ctx->pc = 0x1c9cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9d00: 0xc60e0048  lwc1        $f14, 0x48($s0)
    ctx->pc = 0x1c9d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c9d04: 0xc60f004c  lwc1        $f15, 0x4C($s0)
    ctx->pc = 0x1c9d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c9d08: 0xc062860  jal         func_18A180
    ctx->pc = 0x1C9D08u;
    SET_GPR_U32(ctx, 31, 0x1C9D10u);
    ctx->pc = 0x1C9D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D08u;
    // 0x1c9d0c: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1C9D08u, 0x1C9D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D10u;
label_1c9d10:
    // 0x1c9d10: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x1c9d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c9d14: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c9d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c9d18: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c9d1c: 0x24a52748  addiu       $a1, $a1, 0x2748
    ctx->pc = 0x1c9d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10056));
    // 0x1c9d20: 0x8e670070  lw          $a3, 0x70($s3)
    ctx->pc = 0x1c9d20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x1c9d24: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1C9D24u;
    SET_GPR_U32(ctx, 31, 0x1C9D2Cu);
    ctx->pc = 0x1C9D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D24u;
    // 0x1c9d28: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1C9D24u, 0x1C9D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D2Cu;
label_1c9d2c:
    // 0x1c9d2c: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C9D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D34u);
    ctx->pc = 0x1C9D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D2Cu;
    // 0x1c9d30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C9D2Cu, 0x1C9D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D34u;
label_1c9d34:
    // 0x1c9d34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c9d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9d38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c9d38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9d3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c9d3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9d40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c9d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D4Cu;
        // 0x1c9d50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9D54u;
}
