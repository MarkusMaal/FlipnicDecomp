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

// Function: entry_0012c520
// Address: 0x12c520 - 0x12c544
void entry_0012c520_0x12c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c520_0x12c520");
#endif

    switch (ctx->pc) {
        case 0x12c52cu: goto label_12c52c;
        default: break;
    }

    ctx->pc = 0x12c520u;

    // 0x12c520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c524: 0xc07d84c  jal         func_1F6130
    ctx->pc = 0x12C524u;
    SET_GPR_U32(ctx, 31, 0x12C52Cu);
    ctx->pc = 0x12C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C524u;
    // 0x12c528: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6130u, 0x12C524u, 0x12C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C52Cu;
label_12c52c:
    // 0x12c52c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c530: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C530u;
    {
        const bool branch_taken_0x12c530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C530u;
        // 0x12c534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c530) {
            ctx->pc = 0x12C544u;
            return;
        }
    }
    ctx->pc = 0x12C538u;
    // 0x12c538: 0x82420066  lb          $v0, 0x66($s2)
    ctx->pc = 0x12c538u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
    // 0x12c53c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12c540: 0xa2420066  sb          $v0, 0x66($s2)
    ctx->pc = 0x12c540u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12c544u;
}
