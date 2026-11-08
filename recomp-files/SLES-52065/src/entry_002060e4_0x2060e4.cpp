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

// Function: entry_002060e4
// Address: 0x2060e4 - 0x2060f8
void entry_002060e4_0x2060e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002060e4_0x2060e4");
#endif

    switch (ctx->pc) {
        case 0x2060f4u: goto label_2060f4;
        default: break;
    }

    ctx->pc = 0x2060e4u;

    // 0x2060e4: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2060E4u;
    {
        const bool branch_taken_0x2060e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2060e4) {
            ctx->pc = 0x2060E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2060E4u;
            // 0x2060e8: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2060F8u;
            return;
        }
    }
    ctx->pc = 0x2060ECu;
    // 0x2060ec: 0xc07fa3a  jal         func_1FE8E8
    ctx->pc = 0x2060ECu;
    SET_GPR_U32(ctx, 31, 0x2060F4u);
    ctx->pc = 0x2060F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060ECu;
    // 0x2060f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8E8u, 0x2060ECu, 0x2060F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060F4u;
label_2060f4:
    // 0x2060f4: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2060f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x2060f8u;
}
