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

// Function: entry_001e38c8
// Address: 0x1e38c8 - 0x1e38f4
void entry_001e38c8_0x1e38c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e38c8_0x1e38c8");
#endif

    switch (ctx->pc) {
        case 0x1e38ecu: goto label_1e38ec;
        default: break;
    }

    ctx->pc = 0x1e38c8u;

    // 0x1e38c8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1e38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1e38cc: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1e38ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1e38d0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1e38d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1e38d4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1e38d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1e38d8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1e38d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x1e38dc: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1e38dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x1e38e0: 0xa2400040  sb          $zero, 0x40($s2)
    ctx->pc = 0x1e38e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e38e4: 0xc07f88a  jal         func_1FE228
    ctx->pc = 0x1E38E4u;
    SET_GPR_U32(ctx, 31, 0x1E38ECu);
    ctx->pc = 0x1E38E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38E4u;
    // 0x1e38e8: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x1E38E4u, 0x1E38ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38ECu;
label_1e38ec:
    // 0x1e38ec: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x1e38ecu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x1e38f0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1e38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1e38f4u;
}
