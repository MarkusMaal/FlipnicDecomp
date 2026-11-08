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

// Function: entry_00133c38
// Address: 0x133c38 - 0x133c4c
void entry_00133c38_0x133c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133c38_0x133c38");
#endif

    ctx->pc = 0x133c38u;

    // 0x133c38: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x133c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x133c3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133C3Cu;
    {
        const bool branch_taken_0x133c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C3Cu;
        // 0x133c40: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c3c) {
            ctx->pc = 0x133C4Cu;
            return;
        }
    }
    ctx->pc = 0x133C44u;
    // 0x133c44: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x133C44u;
    SET_GPR_U32(ctx, 31, 0x133C4Cu);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x133C44u, 0x133C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C4Cu;
}
