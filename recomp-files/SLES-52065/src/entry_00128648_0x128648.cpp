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

// Function: entry_00128648
// Address: 0x128648 - 0x128674
void entry_00128648_0x128648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128648_0x128648");
#endif

    switch (ctx->pc) {
        case 0x128654u: goto label_128654;
        default: break;
    }

    ctx->pc = 0x128648u;

    // 0x128648: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12864c: 0xc05f770  jal         func_17DDC0
    ctx->pc = 0x12864Cu;
    SET_GPR_U32(ctx, 31, 0x128654u);
    ctx->pc = 0x128650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12864Cu;
    // 0x128650: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DDC0u, 0x12864Cu, 0x128654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128654u;
label_128654:
    // 0x128654: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x128654u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x128658: 0x12000148  beqz        $s0, . + 4 + (0x148 << 2)
    ctx->pc = 0x128658u;
    {
        const bool branch_taken_0x128658 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x128658) {
            ctx->pc = 0x128B7Cu;
            return;
        }
    }
    ctx->pc = 0x128660u;
    // 0x128660: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x128660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x128664: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x128664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x128668: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x128668u;
    {
        const bool branch_taken_0x128668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128668u;
        // 0x12866c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128668) {
            ctx->pc = 0x128674u;
            return;
        }
    }
    ctx->pc = 0x128670u;
    // 0x128670: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x128670u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x128674u;
}
