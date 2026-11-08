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

// Function: entry_001e4938
// Address: 0x1e4938 - 0x1e4964
void entry_001e4938_0x1e4938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4938_0x1e4938");
#endif

    switch (ctx->pc) {
        case 0x1e495cu: goto label_1e495c;
        default: break;
    }

    ctx->pc = 0x1e4938u;

    // 0x1e4938: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1e4938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1e493c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1e493cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1e4940: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1e4940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1e4944: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1e4944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1e4948: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1e4948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x1e494c: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1e494cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x1e4950: 0xa2400050  sb          $zero, 0x50($s2)
    ctx->pc = 0x1e4950u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e4954: 0xc07f88a  jal         func_1FE228
    ctx->pc = 0x1E4954u;
    SET_GPR_U32(ctx, 31, 0x1E495Cu);
    ctx->pc = 0x1E4958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4954u;
    // 0x1e4958: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x1E4954u, 0x1E495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E495Cu;
label_1e495c:
    // 0x1e495c: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x1e495cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x1e4960: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1e4960u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1e4964u;
}
