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

// Function: entry_001f8450
// Address: 0x1f8450 - 0x1f849c
void entry_001f8450_0x1f8450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8450_0x1f8450");
#endif

    switch (ctx->pc) {
        case 0x1f8480u: goto label_1f8480;
        case 0x1f8494u: goto label_1f8494;
        default: break;
    }

    ctx->pc = 0x1f8450u;

    // 0x1f8450: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1f8450u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1f8454: 0x24e71680  addiu       $a3, $a3, 0x1680
    ctx->pc = 0x1f8454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5760));
    // 0x1f8458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f8458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f845c: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x1f845cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x1f8460: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1f8460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f8464: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f8468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f846c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f846cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8470: 0x26692bc0  addiu       $t1, $s3, 0x2BC0
    ctx->pc = 0x1f8470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 11200));
    // 0x1f8474: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f8474u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8478: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F8478u;
    SET_GPR_U32(ctx, 31, 0x1F8480u);
    ctx->pc = 0x1F847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8478u;
    // 0x1f847c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F8478u, 0x1F8480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8480u;
label_1f8480:
    // 0x1f8480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8484: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8484u;
    {
        const bool branch_taken_0x1f8484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8484) {
            ctx->pc = 0x1F849Cu;
            return;
        }
    }
    ctx->pc = 0x1F848Cu;
    // 0x1f848c: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F848Cu;
    SET_GPR_U32(ctx, 31, 0x1F8494u);
    ctx->pc = 0x1F8490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F848Cu;
    // 0x1f8490: 0x8e24d6bc  lw          $a0, -0x2944($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F848Cu, 0x1F8494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8494u;
label_1f8494:
    // 0x1f8494: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8494u;
    {
        const bool branch_taken_0x1f8494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8494u;
        // 0x1f8498: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8494) {
            ctx->pc = 0x1F84A8u;
            return;
        }
    }
    ctx->pc = 0x1F849Cu;
}
