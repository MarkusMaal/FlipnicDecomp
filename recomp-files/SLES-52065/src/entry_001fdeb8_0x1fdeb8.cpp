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

// Function: entry_001fdeb8
// Address: 0x1fdeb8 - 0x1fdecc
void entry_001fdeb8_0x1fdeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdeb8_0x1fdeb8");
#endif

    switch (ctx->pc) {
        case 0x1fdec8u: goto label_1fdec8;
        default: break;
    }

    ctx->pc = 0x1fdeb8u;

    // 0x1fdeb8: 0x54e00004  bnel        $a3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDEB8u;
    {
        const bool branch_taken_0x1fdeb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdeb8) {
            ctx->pc = 0x1FDEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDEB8u;
            // 0x1fdebc: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDECCu;
            return;
        }
    }
    ctx->pc = 0x1FDEC0u;
    // 0x1fdec0: 0xc07fa3a  jal         func_1FE8E8
    ctx->pc = 0x1FDEC0u;
    SET_GPR_U32(ctx, 31, 0x1FDEC8u);
    ctx->pc = 0x1FDEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDEC0u;
    // 0x1fdec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8E8u, 0x1FDEC0u, 0x1FDEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEC8u;
label_1fdec8:
    // 0x1fdec8: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x1fdec8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1fdeccu;
}
