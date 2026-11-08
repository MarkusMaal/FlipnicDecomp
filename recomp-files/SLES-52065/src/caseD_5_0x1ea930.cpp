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

// Function: caseD_5
// Address: 0x1ea930 - 0x1ea960
void caseD_5_0x1ea930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1ea930");
#endif

    switch (ctx->pc) {
        case 0x1ea93cu: goto label_1ea93c;
        case 0x1ea948u: goto label_1ea948;
        case 0x1ea954u: goto label_1ea954;
        default: break;
    }

    ctx->pc = 0x1ea930u;

    // 0x1ea930: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea934: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA934u;
    SET_GPR_U32(ctx, 31, 0x1EA93Cu);
    ctx->pc = 0x1EA938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA934u;
    // 0x1ea938: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA934u, 0x1EA93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA93Cu;
label_1ea93c:
    // 0x1ea93c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea940: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EA940u;
    SET_GPR_U32(ctx, 31, 0x1EA948u);
    ctx->pc = 0x1EA944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA940u;
    // 0x1ea944: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA940u, 0x1EA948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA948u;
label_1ea948:
    // 0x1ea948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea94c: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EA94Cu;
    SET_GPR_U32(ctx, 31, 0x1EA954u);
    ctx->pc = 0x1EA950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA94Cu;
    // 0x1ea950: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA94Cu, 0x1EA954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA954u;
label_1ea954:
    // 0x1ea954: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea958: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1EA958u;
    {
        const bool branch_taken_0x1ea958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA958u;
        // 0x1ea95c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea958) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EA960u;
}
