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

// Function: entry_002011c4
// Address: 0x2011c4 - 0x2011dc
void entry_002011c4_0x2011c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002011c4_0x2011c4");
#endif

    ctx->pc = 0x2011c4u;

    // 0x2011c4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2011c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2011c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2011C8u;
    {
        const bool branch_taken_0x2011c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011C8u;
        // 0x2011cc: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011c8) {
            ctx->pc = 0x2011DCu;
            return;
        }
    }
    ctx->pc = 0x2011D0u;
    // 0x2011d0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2011d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2011d4: 0xc07f9c0  jal         func_1FE700
    ctx->pc = 0x2011D4u;
    SET_GPR_U32(ctx, 31, 0x2011DCu);
    ctx->pc = 0x2011D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011D4u;
    // 0x2011d8: 0x24a510a8  addiu       $a1, $a1, 0x10A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE700u, 0x2011D4u, 0x2011DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011DCu;
}
