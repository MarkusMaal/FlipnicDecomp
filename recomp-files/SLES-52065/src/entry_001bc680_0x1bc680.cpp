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

// Function: entry_001bc680
// Address: 0x1bc680 - 0x1bc6ac
void entry_001bc680_0x1bc680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc680_0x1bc680");
#endif

    switch (ctx->pc) {
        case 0x1bc688u: goto label_1bc688;
        default: break;
    }

    ctx->pc = 0x1bc680u;

    // 0x1bc680: 0xc060774  jal         func_181DD0
    ctx->pc = 0x1BC680u;
    SET_GPR_U32(ctx, 31, 0x1BC688u);
    ctx->pc = 0x181DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DD0u, 0x1BC680u, 0x1BC688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC688u;
label_1bc688:
    // 0x1bc688: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC688u;
    {
        const bool branch_taken_0x1bc688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC688u;
        // 0x1bc68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc688) {
            ctx->pc = 0x1BC6B0u;
            return;
        }
    }
    ctx->pc = 0x1BC690u;
    // 0x1bc690: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x1bc690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1bc694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc698: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC698u;
    {
        const bool branch_taken_0x1bc698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bc698) {
            ctx->pc = 0x1BC6ACu;
            return;
        }
    }
    ctx->pc = 0x1BC6A0u;
    // 0x1bc6a0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1bc6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1bc6a4: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1BC6A4u;
    SET_GPR_U32(ctx, 31, 0x1BC6ACu);
    ctx->pc = 0x1BC6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6A4u;
    // 0x1bc6a8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1BC6A4u, 0x1BC6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC6ACu;
}
