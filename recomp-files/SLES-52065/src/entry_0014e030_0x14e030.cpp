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

// Function: entry_0014e030
// Address: 0x14e030 - 0x14e04c
void entry_0014e030_0x14e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e030_0x14e030");
#endif

    switch (ctx->pc) {
        case 0x14e03cu: goto label_14e03c;
        default: break;
    }

    ctx->pc = 0x14e030u;

label_14e030:
    // 0x14e030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14e030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e034: 0xc05383c  jal         func_14E0F0
    ctx->pc = 0x14E034u;
    SET_GPR_U32(ctx, 31, 0x14E03Cu);
    ctx->pc = 0x14E038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E034u;
    // 0x14e038: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E0F0u, 0x14E034u, 0x14E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E03Cu;
label_14e03c:
    // 0x14e03c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14e03cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14e040: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x14e040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14e044: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14E044u;
    {
        const bool branch_taken_0x14e044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E044u;
        // 0x14e048: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e044) {
            ctx->pc = 0x14E030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e030;
        }
    }
    ctx->pc = 0x14E04Cu;
}
