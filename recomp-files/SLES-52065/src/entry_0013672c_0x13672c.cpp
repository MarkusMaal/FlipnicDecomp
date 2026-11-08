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

// Function: entry_0013672c
// Address: 0x13672c - 0x13674c
void entry_0013672c_0x13672c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013672c_0x13672c");
#endif

    switch (ctx->pc) {
        case 0x13673cu: goto label_13673c;
        default: break;
    }

    ctx->pc = 0x13672cu;

    // 0x13672c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x13672cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x136730: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x136730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x136734: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x136734u;
    SET_GPR_U32(ctx, 31, 0x13673Cu);
    ctx->pc = 0x136738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136734u;
    // 0x136738: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x136734u, 0x13673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13673Cu;
label_13673c:
    // 0x13673c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13673Cu;
    {
        const bool branch_taken_0x13673c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13673Cu;
        // 0x136740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13673c) {
            ctx->pc = 0x13674Cu;
            return;
        }
    }
    ctx->pc = 0x136744u;
    // 0x136744: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x136744u;
    SET_GPR_U32(ctx, 31, 0x13674Cu);
    ctx->pc = 0x131300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131300u, 0x136744u, 0x13674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13674Cu;
}
