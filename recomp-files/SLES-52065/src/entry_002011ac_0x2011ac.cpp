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

// Function: entry_002011ac
// Address: 0x2011ac - 0x2011c4
void entry_002011ac_0x2011ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002011ac_0x2011ac");
#endif

    switch (ctx->pc) {
        case 0x2011c0u: goto label_2011c0;
        default: break;
    }

    ctx->pc = 0x2011acu;

    // 0x2011ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2011acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2011b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2011B0u;
    {
        const bool branch_taken_0x2011b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2011b0) {
            ctx->pc = 0x2011B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2011B0u;
            // 0x2011b4: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2011C4u;
            return;
        }
    }
    ctx->pc = 0x2011B8u;
    // 0x2011b8: 0xc07fa3a  jal         func_1FE8E8
    ctx->pc = 0x2011B8u;
    SET_GPR_U32(ctx, 31, 0x2011C0u);
    ctx->pc = 0x2011BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011B8u;
    // 0x2011bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8E8u, 0x2011B8u, 0x2011C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011C0u;
label_2011c0:
    // 0x2011c0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2011c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x2011c4u;
}
