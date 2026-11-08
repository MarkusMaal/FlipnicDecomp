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

// Function: entry_001f3458
// Address: 0x1f3458 - 0x1f3498
void entry_001f3458_0x1f3458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3458_0x1f3458");
#endif

    switch (ctx->pc) {
        case 0x1f3484u: goto label_1f3484;
        default: break;
    }

    ctx->pc = 0x1f3458u;

    // 0x1f3458: 0x26b0fb80  addiu       $s0, $s5, -0x480
    ctx->pc = 0x1f3458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966144));
    // 0x1f345c: 0x24a4fd80  addiu       $a0, $a1, -0x280
    ctx->pc = 0x1f345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966656));
    // 0x1f3460: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f3460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3464: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f3464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f3468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f346c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f346cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3470: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1f3470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1f3474: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f3474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3478: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1f3478u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f347c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F347Cu;
    SET_GPR_U32(ctx, 31, 0x1F3484u);
    ctx->pc = 0x1F3480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F347Cu;
    // 0x1f3480: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F347Cu, 0x1F3484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3484u;
label_1f3484:
    // 0x1f3484: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3484u;
    {
        const bool branch_taken_0x1f3484 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f3484) {
            ctx->pc = 0x1F3488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3484u;
            // 0x1f3488: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3498u;
            return;
        }
    }
    ctx->pc = 0x1F348Cu;
    // 0x1f348c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f348cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f3490: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3490u;
    {
        const bool branch_taken_0x1f3490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3490u;
        // 0x1f3494: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3490) {
            ctx->pc = 0x1F34A0u;
            return;
        }
    }
    ctx->pc = 0x1F3498u;
}
