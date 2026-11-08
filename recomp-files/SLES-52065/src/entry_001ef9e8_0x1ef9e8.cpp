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

// Function: entry_001ef9e8
// Address: 0x1ef9e8 - 0x1efa14
void entry_001ef9e8_0x1ef9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef9e8_0x1ef9e8");
#endif

    switch (ctx->pc) {
        case 0x1ef9f4u: goto label_1ef9f4;
        case 0x1efa10u: goto label_1efa10;
        default: break;
    }

    ctx->pc = 0x1ef9e8u;

    // 0x1ef9e8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1ef9e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef9ec: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EF9ECu;
    SET_GPR_U32(ctx, 31, 0x1EF9F4u);
    ctx->pc = 0x1EF9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9ECu;
    // 0x1ef9f0: 0x8e04a468  lw          $a0, -0x5B98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EF9ECu, 0x1EF9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9F4u;
label_1ef9f4:
    // 0x1ef9f4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1ef9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ef9f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ef9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef9fc: 0x8e04a468  lw          $a0, -0x5B98($s0)
    ctx->pc = 0x1ef9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    // 0x1efa00: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x1efa00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x1efa04: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1efa04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1efa08: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EFA08u;
    SET_GPR_U32(ctx, 31, 0x1EFA10u);
    ctx->pc = 0x1EFA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA08u;
    // 0x1efa0c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EFA08u, 0x1EFA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA10u;
label_1efa10:
    // 0x1efa10: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1efa10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1efa14u;
}
