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

// Function: entry_00127620
// Address: 0x127620 - 0x127640
void entry_00127620_0x127620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127620_0x127620");
#endif

    switch (ctx->pc) {
        case 0x127630u: goto label_127630;
        default: break;
    }

    ctx->pc = 0x127620u;

    // 0x127620: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x127620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127624: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x127624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x127628: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x127628u;
    SET_GPR_U32(ctx, 31, 0x127630u);
    ctx->pc = 0x12762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127628u;
    // 0x12762c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x127628u, 0x127630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127630u;
label_127630:
    // 0x127630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127630u;
    {
        const bool branch_taken_0x127630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127630u;
        // 0x127634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127630) {
            ctx->pc = 0x127640u;
            return;
        }
    }
    ctx->pc = 0x127638u;
    // 0x127638: 0xc0497a0  jal         func_125E80
    ctx->pc = 0x127638u;
    SET_GPR_U32(ctx, 31, 0x127640u);
    ctx->pc = 0x125E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E80u, 0x127638u, 0x127640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127640u;
}
