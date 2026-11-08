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

// Function: entry_00102678
// Address: 0x102678 - 0x1026c4
void entry_00102678_0x102678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102678_0x102678");
#endif

    switch (ctx->pc) {
        case 0x10268cu: goto label_10268c;
        case 0x1026b4u: goto label_1026b4;
        default: break;
    }

    ctx->pc = 0x102678u;

    // 0x102678: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x10267c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10267cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x102680: 0x24a5e028  addiu       $a1, $a1, -0x1FD8
    ctx->pc = 0x102680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959144));
    // 0x102684: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x102684u;
    SET_GPR_U32(ctx, 31, 0x10268Cu);
    ctx->pc = 0x102688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102684u;
    // 0x102688: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102684u, 0x10268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10268Cu;
label_10268c:
    // 0x10268c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10268cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102690: 0x6000011  bltz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x102690u;
    {
        const bool branch_taken_0x102690 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x102690) {
            ctx->pc = 0x1026D8u;
            return;
        }
    }
    ctx->pc = 0x102698u;
    // 0x102698: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x102698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10269c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x10269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1026a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1026a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1026a4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1026a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1026a8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1026a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1026ac: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1026ACu;
    SET_GPR_U32(ctx, 31, 0x1026B4u);
    ctx->pc = 0x1026B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026ACu;
    // 0x1026b0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1026ACu, 0x1026B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026B4u;
label_1026b4:
    // 0x1026b4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1026B4u;
    {
        const bool branch_taken_0x1026b4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1026B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026B4u;
        // 0x1026b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026b4) {
            ctx->pc = 0x1026C4u;
            return;
        }
    }
    ctx->pc = 0x1026BCu;
    // 0x1026bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1026BCu;
    {
        const bool branch_taken_0x1026bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1026C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026BCu;
        // 0x1026c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026bc) {
            ctx->pc = 0x1026D0u;
            return;
        }
    }
    ctx->pc = 0x1026C4u;
}
