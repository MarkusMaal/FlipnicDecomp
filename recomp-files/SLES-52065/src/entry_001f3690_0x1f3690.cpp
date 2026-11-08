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

// Function: entry_001f3690
// Address: 0x1f3690 - 0x1f36e4
void entry_001f3690_0x1f3690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3690_0x1f3690");
#endif

    switch (ctx->pc) {
        case 0x1f36d0u: goto label_1f36d0;
        default: break;
    }

    ctx->pc = 0x1f3690u;

    // 0x1f3690: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F3690u;
    {
        const bool branch_taken_0x1f3690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3690u;
        // 0x1f3694: 0x3c110039  lui         $s1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3690) {
            ctx->pc = 0x1F3714u;
            return;
        }
    }
    ctx->pc = 0x1F3698u;
    // 0x1f3698: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f3698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f369c: 0x2622fb80  addiu       $v0, $s1, -0x480
    ctx->pc = 0x1f369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966144));
    // 0x1f36a0: 0xae33fb80  sw          $s3, -0x480($s1)
    ctx->pc = 0x1f36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966144), GPR_U32(ctx, 19));
    // 0x1f36a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f36a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36a8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1f36a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1f36ac: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x1f36acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
    // 0x1f36b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f36b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f36b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f36b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f36b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f36b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36bc: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1f36bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f36c0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f36c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36c4: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1f36c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f36c8: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F36C8u;
    SET_GPR_U32(ctx, 31, 0x1F36D0u);
    ctx->pc = 0x1F36CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F36C8u;
    // 0x1f36cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F36C8u, 0x1F36D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36D0u;
label_1f36d0:
    // 0x1f36d0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F36D0u;
    {
        const bool branch_taken_0x1f36d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f36d0) {
            ctx->pc = 0x1F36E4u;
            return;
        }
    }
    ctx->pc = 0x1F36D8u;
    // 0x1f36d8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f36dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F36DCu;
    {
        const bool branch_taken_0x1f36dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36DCu;
        // 0x1f36e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36dc) {
            ctx->pc = 0x1F3728u;
            return;
        }
    }
    ctx->pc = 0x1F36E4u;
}
