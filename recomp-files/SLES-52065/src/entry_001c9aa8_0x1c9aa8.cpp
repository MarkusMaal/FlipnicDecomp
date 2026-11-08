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

// Function: entry_001c9aa8
// Address: 0x1c9aa8 - 0x1c9ae0
void entry_001c9aa8_0x1c9aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9aa8_0x1c9aa8");
#endif

    switch (ctx->pc) {
        case 0x1c9ac0u: goto label_1c9ac0;
        case 0x1c9ad8u: goto label_1c9ad8;
        default: break;
    }

    ctx->pc = 0x1c9aa8u;

    // 0x1c9aa8: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c9aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c9aac: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1c9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1c9ab0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c9ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9ab4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c9ab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c9ab8: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C9AB8u;
    SET_GPR_U32(ctx, 31, 0x1C9AC0u);
    ctx->pc = 0x1C9ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AB8u;
    // 0x1c9abc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C9AB8u, 0x1C9AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AC0u;
label_1c9ac0:
    // 0x1c9ac0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9ac4: 0xc42cf8c0  lwc1        $f12, -0x740($at)
    ctx->pc = 0x1c9ac4u;
    { uint32_t bits = FAST_READ32(0x36F8C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9ac8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9acc: 0xc42df8d0  lwc1        $f13, -0x730($at)
    ctx->pc = 0x1c9accu;
    { uint32_t bits = FAST_READ32(0x36F8D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9ad0: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1C9AD0u;
    SET_GPR_U32(ctx, 31, 0x1C9AD8u);
    ctx->pc = 0x1C9AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AD0u;
    // 0x1c9ad4: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1C9AD0u, 0x1C9AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AD8u;
label_1c9ad8:
    // 0x1c9ad8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1C9AD8u;
    {
        const bool branch_taken_0x1c9ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AD8u;
        // 0x1c9adc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ad8) {
            ctx->pc = 0x1C9BD0u;
            return;
        }
    }
    ctx->pc = 0x1C9AE0u;
}
