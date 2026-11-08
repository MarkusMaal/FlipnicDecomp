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

// Function: entry_0010d0c4
// Address: 0x10d0c4 - 0x10d0ec
void entry_0010d0c4_0x10d0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d0c4_0x10d0c4");
#endif

    ctx->pc = 0x10d0c4u;

    // 0x10d0c4: 0x0  nop
    ctx->pc = 0x10d0c4u;
    // NOP
    // 0x10d0c8: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10D0C8u;
    {
        const bool branch_taken_0x10d0c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x10D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D0C8u;
        // 0x10d0cc: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0c8) {
            ctx->pc = 0x10D0ECu;
            return;
        }
    }
    ctx->pc = 0x10D0D0u;
    // 0x10d0d0: 0x26060370  addiu       $a2, $s0, 0x370
    ctx->pc = 0x10d0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x10d0d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10d0d8: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x10d0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x10d0dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10d0e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10d0e4: 0xc05eb14  jal         func_17AC50
    ctx->pc = 0x10D0E4u;
    SET_GPR_U32(ctx, 31, 0x10D0ECu);
    ctx->pc = 0x10D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0E4u;
    // 0x10d0e8: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC50u, 0x10D0E4u, 0x10D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0ECu;
}
