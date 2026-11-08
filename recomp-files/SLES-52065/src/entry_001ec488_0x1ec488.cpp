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

// Function: entry_001ec488
// Address: 0x1ec488 - 0x1ec4b8
void entry_001ec488_0x1ec488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec488_0x1ec488");
#endif

    switch (ctx->pc) {
        case 0x1ec4a0u: goto label_1ec4a0;
        case 0x1ec4a8u: goto label_1ec4a8;
        case 0x1ec4b4u: goto label_1ec4b4;
        default: break;
    }

    ctx->pc = 0x1ec488u;

    // 0x1ec488: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ec488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ec48c: 0x2443be58  addiu       $v1, $v0, -0x41A8
    ctx->pc = 0x1ec48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950488));
    // 0x1ec490: 0xac40be58  sw          $zero, -0x41A8($v0)
    ctx->pc = 0x1ec490u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38BE58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38BE58u, _value); } while (0);
    // 0x1ec494: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1ec494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec498: 0xc07ad10  jal         func_1EB440
    ctx->pc = 0x1EC498u;
    SET_GPR_U32(ctx, 31, 0x1EC4A0u);
    ctx->pc = 0x1EC49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC498u;
    // 0x1ec49c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB440u, 0x1EC498u, 0x1EC4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4A0u;
label_1ec4a0:
    // 0x1ec4a0: 0xc07ad44  jal         func_1EB510
    ctx->pc = 0x1EC4A0u;
    SET_GPR_U32(ctx, 31, 0x1EC4A8u);
    ctx->pc = 0x1EB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB510u, 0x1EC4A0u, 0x1EC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4A8u;
label_1ec4a8:
    // 0x1ec4a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ec4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4ac: 0xc07ad2c  jal         func_1EB4B0
    ctx->pc = 0x1EC4ACu;
    SET_GPR_U32(ctx, 31, 0x1EC4B4u);
    ctx->pc = 0x1EC4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC4ACu;
    // 0x1ec4b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB4B0u, 0x1EC4ACu, 0x1EC4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4B4u;
label_1ec4b4:
    // 0x1ec4b4: 0x8e02a3b8  lw          $v0, -0x5C48($s0)
    ctx->pc = 0x1ec4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943672)));
    ctx->pc = 0x1ec4b8u;
}
