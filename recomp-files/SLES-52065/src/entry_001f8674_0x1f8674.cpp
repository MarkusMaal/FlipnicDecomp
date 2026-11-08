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

// Function: entry_001f8674
// Address: 0x1f8674 - 0x1f86bc
void entry_001f8674_0x1f8674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8674_0x1f8674");
#endif

    switch (ctx->pc) {
        case 0x1f86a4u: goto label_1f86a4;
        default: break;
    }

    ctx->pc = 0x1f8674u;

    // 0x1f8674: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f8674u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f8678: 0xacf01680  sw          $s0, 0x1680($a3)
    ctx->pc = 0x1f8678u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5760), GPR_U32(ctx, 16));
    // 0x1f867c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f867cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8680: 0x24e71680  addiu       $a3, $a3, 0x1680
    ctx->pc = 0x1f8680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5760));
    // 0x1f8684: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f8684u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f8688: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f868c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8690: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8694: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f8694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8698: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f8698u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f869c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F869Cu;
    SET_GPR_U32(ctx, 31, 0x1F86A4u);
    ctx->pc = 0x1F86A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F869Cu;
    // 0x1f86a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F869Cu, 0x1F86A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F86A4u;
label_1f86a4:
    // 0x1f86a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f86a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86a8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F86A8u;
    {
        const bool branch_taken_0x1f86a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86A8u;
        // 0x1f86ac: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86a8) {
            ctx->pc = 0x1F86BCu;
            return;
        }
    }
    ctx->pc = 0x1F86B0u;
    // 0x1f86b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f86b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F86B4u;
    {
        const bool branch_taken_0x1f86b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86B4u;
        // 0x1f86b8: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86b4) {
            ctx->pc = 0x1F86C4u;
            return;
        }
    }
    ctx->pc = 0x1F86BCu;
}
