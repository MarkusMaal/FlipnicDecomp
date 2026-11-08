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

// Function: entry_001c08d8
// Address: 0x1c08d8 - 0x1c0910
void entry_001c08d8_0x1c08d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c08d8_0x1c08d8");
#endif

    switch (ctx->pc) {
        case 0x1c08f0u: goto label_1c08f0;
        case 0x1c0908u: goto label_1c0908;
        default: break;
    }

    ctx->pc = 0x1c08d8u;

    // 0x1c08d8: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c08d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c08dc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1c08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1c08e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c08e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c08e4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c08e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c08e8: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C08E8u;
    SET_GPR_U32(ctx, 31, 0x1C08F0u);
    ctx->pc = 0x1C08ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C08E8u;
    // 0x1c08ec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C08E8u, 0x1C08F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C08F0u;
label_1c08f0:
    // 0x1c08f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08f4: 0xc42cf540  lwc1        $f12, -0xAC0($at)
    ctx->pc = 0x1c08f4u;
    { uint32_t bits = FAST_READ32(0x36F540u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c08f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08fc: 0xc42df550  lwc1        $f13, -0xAB0($at)
    ctx->pc = 0x1c08fcu;
    { uint32_t bits = FAST_READ32(0x36F550u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c0900: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1C0900u;
    SET_GPR_U32(ctx, 31, 0x1C0908u);
    ctx->pc = 0x1C0904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0900u;
    // 0x1c0904: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1C0900u, 0x1C0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0908u;
label_1c0908:
    // 0x1c0908: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1C0908u;
    {
        const bool branch_taken_0x1c0908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0908u;
        // 0x1c090c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0908) {
            ctx->pc = 0x1C0A00u;
            return;
        }
    }
    ctx->pc = 0x1C0910u;
}
