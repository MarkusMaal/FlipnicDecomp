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

// Function: entry_001432bc
// Address: 0x1432bc - 0x1432ec
void entry_001432bc_0x1432bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001432bc_0x1432bc");
#endif

    ctx->pc = 0x1432bcu;

    // 0x1432bc: 0x0  nop
    ctx->pc = 0x1432bcu;
    // NOP
    // 0x1432c0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1432c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1432c4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1432c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1432c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1432c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1432cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1432ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1432d0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1432D0u;
    {
        const bool branch_taken_0x1432d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1432d0) {
            ctx->pc = 0x1432ECu;
            return;
        }
    }
    ctx->pc = 0x1432D8u;
    // 0x1432d8: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1432d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1432dc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1432dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1432e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1432e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1432e4: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1432E4u;
    SET_GPR_U32(ctx, 31, 0x1432ECu);
    ctx->pc = 0x1432E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432E4u;
    // 0x1432e8: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1432E4u, 0x1432ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432ECu;
}
