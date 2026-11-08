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

// Function: entry_00206060
// Address: 0x206060 - 0x206074
void entry_00206060_0x206060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206060_0x206060");
#endif

    switch (ctx->pc) {
        case 0x206070u: goto label_206070;
        default: break;
    }

    ctx->pc = 0x206060u;

    // 0x206060: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x206060u;
    {
        const bool branch_taken_0x206060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206060) {
            ctx->pc = 0x206064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206060u;
            // 0x206064: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206074u;
            return;
        }
    }
    ctx->pc = 0x206068u;
    // 0x206068: 0xc07f5b0  jal         func_1FD6C0
    ctx->pc = 0x206068u;
    SET_GPR_U32(ctx, 31, 0x206070u);
    ctx->pc = 0x20606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206068u;
    // 0x20606c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x206068u, 0x206070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206070u;
label_206070:
    // 0x206070: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x206070u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x206074u;
}
