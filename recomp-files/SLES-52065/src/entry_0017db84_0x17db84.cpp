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

// Function: entry_0017db84
// Address: 0x17db84 - 0x17dbb0
void entry_0017db84_0x17db84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017db84_0x17db84");
#endif

    switch (ctx->pc) {
        case 0x17db94u: goto label_17db94;
        case 0x17dba8u: goto label_17dba8;
        default: break;
    }

    ctx->pc = 0x17db84u;

    // 0x17db84: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x17db84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x17db88: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x17db88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17db8c: 0xc05f3dc  jal         func_17CF70
    ctx->pc = 0x17DB8Cu;
    SET_GPR_U32(ctx, 31, 0x17DB94u);
    ctx->pc = 0x17DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB8Cu;
    // 0x17db90: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF70u, 0x17DB8Cu, 0x17DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB94u;
label_17db94:
    // 0x17db94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DB94u;
    {
        const bool branch_taken_0x17db94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17db94) {
            ctx->pc = 0x17DBB0u;
            return;
        }
    }
    ctx->pc = 0x17DB9Cu;
    // 0x17db9c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x17db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17dba0: 0xc05f3dc  jal         func_17CF70
    ctx->pc = 0x17DBA0u;
    SET_GPR_U32(ctx, 31, 0x17DBA8u);
    ctx->pc = 0x17DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DBA0u;
    // 0x17dba4: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF70u, 0x17DBA0u, 0x17DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DBA8u;
label_17dba8:
    // 0x17dba8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x17dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17dbac: 0xa0400034  sb          $zero, 0x34($v0)
    ctx->pc = 0x17dbacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x17dbb0u;
}
