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

// Function: entry_0018046c
// Address: 0x18046c - 0x18049c
void entry_0018046c_0x18046c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018046c_0x18046c");
#endif

    switch (ctx->pc) {
        case 0x180488u: goto label_180488;
        case 0x180494u: goto label_180494;
        default: break;
    }

    ctx->pc = 0x18046cu;

    // 0x18046c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x180470: 0xaf82865c  sw          $v0, -0x79A4($gp)
    ctx->pc = 0x180470u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 2));
    // 0x180474: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x180474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x180478: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180478u;
    {
        const bool branch_taken_0x180478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180478) {
            ctx->pc = 0x18049Cu;
            return;
        }
    }
    ctx->pc = 0x180480u;
    // 0x180480: 0xc060898  jal         func_182260
    ctx->pc = 0x180480u;
    SET_GPR_U32(ctx, 31, 0x180488u);
    ctx->pc = 0x182260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182260u, 0x180480u, 0x180488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180488u;
label_180488:
    // 0x180488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x180488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18048c: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x18048Cu;
    SET_GPR_U32(ctx, 31, 0x180494u);
    ctx->pc = 0x180490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18048Cu;
    // 0x180490: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x18048Cu, 0x180494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180494u;
label_180494:
    // 0x180494: 0xaf808344  sw          $zero, -0x7CBC($gp)
    ctx->pc = 0x180494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935364), GPR_U32(ctx, 0));
    // 0x180498: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x180498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    ctx->pc = 0x18049cu;
}
