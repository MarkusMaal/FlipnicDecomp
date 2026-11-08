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

// Function: entry_001c0af0
// Address: 0x1c0af0 - 0x1c0b84
void entry_001c0af0_0x1c0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0af0_0x1c0af0");
#endif

    switch (ctx->pc) {
        case 0x1c0b08u: goto label_1c0b08;
        case 0x1c0b28u: goto label_1c0b28;
        case 0x1c0b40u: goto label_1c0b40;
        case 0x1c0b5cu: goto label_1c0b5c;
        case 0x1c0b64u: goto label_1c0b64;
        default: break;
    }

    ctx->pc = 0x1c0af0u;

    // 0x1c0af0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0af4: 0xc42cf5a0  lwc1        $f12, -0xA60($at)
    ctx->pc = 0x1c0af4u;
    { uint32_t bits = FAST_READ32(0x36F5A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0af8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0afc: 0xc42df5b0  lwc1        $f13, -0xA50($at)
    ctx->pc = 0x1c0afcu;
    { uint32_t bits = FAST_READ32(0x36F5B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c0b00: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1C0B00u;
    SET_GPR_U32(ctx, 31, 0x1C0B08u);
    ctx->pc = 0x1C0B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B00u;
    // 0x1c0b04: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1C0B00u, 0x1C0B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B08u;
label_1c0b08:
    // 0x1c0b08: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1c0b08u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0b0c: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c0b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c0b10: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1c0b10u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0b14: 0x0  nop
    ctx->pc = 0x1c0b14u;
    // NOP
    // 0x1c0b18: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c0b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c0b1c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c0b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c0b20: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C0B20u;
    SET_GPR_U32(ctx, 31, 0x1C0B28u);
    ctx->pc = 0x1C0B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B20u;
    // 0x1c0b24: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C0B20u, 0x1C0B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B28u;
label_1c0b28:
    // 0x1c0b28: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x1c0b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0b2c: 0xc60d0044  lwc1        $f13, 0x44($s0)
    ctx->pc = 0x1c0b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c0b30: 0xc60e0048  lwc1        $f14, 0x48($s0)
    ctx->pc = 0x1c0b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c0b34: 0xc60f004c  lwc1        $f15, 0x4C($s0)
    ctx->pc = 0x1c0b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c0b38: 0xc062860  jal         func_18A180
    ctx->pc = 0x1C0B38u;
    SET_GPR_U32(ctx, 31, 0x1C0B40u);
    ctx->pc = 0x1C0B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B38u;
    // 0x1c0b3c: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1C0B38u, 0x1C0B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B40u;
label_1c0b40:
    // 0x1c0b40: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x1c0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c0b44: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c0b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c0b48: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c0b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c0b4c: 0x24a517d0  addiu       $a1, $a1, 0x17D0
    ctx->pc = 0x1c0b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6096));
    // 0x1c0b50: 0x8e670070  lw          $a3, 0x70($s3)
    ctx->pc = 0x1c0b50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x1c0b54: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1C0B54u;
    SET_GPR_U32(ctx, 31, 0x1C0B5Cu);
    ctx->pc = 0x1C0B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B54u;
    // 0x1c0b58: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1C0B54u, 0x1C0B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B5Cu;
label_1c0b5c:
    // 0x1c0b5c: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C0B5Cu;
    SET_GPR_U32(ctx, 31, 0x1C0B64u);
    ctx->pc = 0x1C0B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B5Cu;
    // 0x1c0b60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C0B5Cu, 0x1C0B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B64u;
label_1c0b64:
    // 0x1c0b64: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c0b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0b68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c0b68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0b6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c0b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0b70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c0b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B7Cu;
        // 0x1c0b80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0B84u;
}
