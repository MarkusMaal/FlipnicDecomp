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

// Function: entry_001b7994
// Address: 0x1b7994 - 0x1b79c8
void entry_001b7994_0x1b7994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7994_0x1b7994");
#endif

    switch (ctx->pc) {
        case 0x1b79a4u: goto label_1b79a4;
        case 0x1b79b0u: goto label_1b79b0;
        default: break;
    }

    ctx->pc = 0x1b7994u;

    // 0x1b7994: 0x0  nop
    ctx->pc = 0x1b7994u;
    // NOP
    // 0x1b7998: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1b7998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b799c: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1B799Cu;
    SET_GPR_U32(ctx, 31, 0x1B79A4u);
    ctx->pc = 0x1B79A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B799Cu;
    // 0x1b79a0: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1B799Cu, 0x1B79A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79A4u;
label_1b79a4:
    // 0x1b79a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b79a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b79a8: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1B79A8u;
    SET_GPR_U32(ctx, 31, 0x1B79B0u);
    ctx->pc = 0x1B79ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B79A8u;
    // 0x1b79ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1B79A8u, 0x1B79B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79B0u;
label_1b79b0:
    // 0x1b79b0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1b79b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b79b4: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1b79b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b79b8: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1b79b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b79bc: 0x8fa70084  lw          $a3, 0x84($sp)
    ctx->pc = 0x1b79bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1b79c0: 0xc06e990  jal         func_1BA640
    ctx->pc = 0x1B79C0u;
    SET_GPR_U32(ctx, 31, 0x1B79C8u);
    ctx->pc = 0x1B79C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B79C0u;
    // 0x1b79c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA640u, 0x1B79C0u, 0x1B79C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79C8u;
}
