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

// Function: entry_0016e0a0
// Address: 0x16e0a0 - 0x16e0ec
void entry_0016e0a0_0x16e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e0a0_0x16e0a0");
#endif

    switch (ctx->pc) {
        case 0x16e0b4u: goto label_16e0b4;
        default: break;
    }

    ctx->pc = 0x16e0a0u;

    // 0x16e0a0: 0x86660214  lh          $a2, 0x214($s3)
    ctx->pc = 0x16e0a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 532)));
    // 0x16e0a4: 0x266401e0  addiu       $a0, $s3, 0x1E0
    ctx->pc = 0x16e0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
    // 0x16e0a8: 0x8e650210  lw          $a1, 0x210($s3)
    ctx->pc = 0x16e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x16e0ac: 0xc054980  jal         func_152600
    ctx->pc = 0x16E0ACu;
    SET_GPR_U32(ctx, 31, 0x16E0B4u);
    ctx->pc = 0x16E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E0ACu;
    // 0x16e0b0: 0x24070090  addiu       $a3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152600u, 0x16E0ACu, 0x16E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0B4u;
label_16e0b4:
    // 0x16e0b4: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x16e0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e0b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16e0b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16e0bc: 0xe6600200  swc1        $f0, 0x200($s3)
    ctx->pc = 0x16e0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 512), bits); }
    // 0x16e0c0: 0xa26001d3  sb          $zero, 0x1D3($s3)
    ctx->pc = 0x16e0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 467), (uint8_t)GPR_U32(ctx, 0));
    // 0x16e0c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x16e0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16e0c8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16e0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16e0cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16e0ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16e0d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16e0d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16e0d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e0d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16e0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e0dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16e0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e0e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16e0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x16E0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0E4u;
        // 0x16e0e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E0ECu;
}
