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

// Function: entry_001fdd88
// Address: 0x1fdd88 - 0x1fdda4
void entry_001fdd88_0x1fdd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdd88_0x1fdd88");
#endif

    switch (ctx->pc) {
        case 0x1fdd9cu: goto label_1fdd9c;
        default: break;
    }

    ctx->pc = 0x1fdd88u;

    // 0x1fdd88: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1fdd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1fdd8c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDD8Cu;
    {
        const bool branch_taken_0x1fdd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd8c) {
            ctx->pc = 0x1FDD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDD8Cu;
            // 0x1fdd90: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDDA4u;
            return;
        }
    }
    ctx->pc = 0x1FDD94u;
    // 0x1fdd94: 0xc07f5b0  jal         func_1FD6C0
    ctx->pc = 0x1FDD94u;
    SET_GPR_U32(ctx, 31, 0x1FDD9Cu);
    ctx->pc = 0x1FDD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDD94u;
    // 0x1fdd98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x1FDD94u, 0x1FDD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD9Cu;
label_1fdd9c:
    // 0x1fdd9c: 0x8e110054  lw          $s1, 0x54($s0)
    ctx->pc = 0x1fdd9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1fdda0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1fdda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1fdda4u;
}
