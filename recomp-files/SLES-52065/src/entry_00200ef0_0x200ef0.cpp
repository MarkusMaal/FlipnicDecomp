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

// Function: entry_00200ef0
// Address: 0x200ef0 - 0x200f14
void entry_00200ef0_0x200ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200ef0_0x200ef0");
#endif

    switch (ctx->pc) {
        case 0x200ef8u: goto label_200ef8;
        case 0x200f0cu: goto label_200f0c;
        default: break;
    }

    ctx->pc = 0x200ef0u;

    // 0x200ef0: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x200EF0u;
    SET_GPR_U32(ctx, 31, 0x200EF8u);
    ctx->pc = 0x200EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EF0u;
    // 0x200ef4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x200EF0u, 0x200EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EF8u;
label_200ef8:
    // 0x200ef8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x200ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200efc: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x200EFCu;
    {
        const bool branch_taken_0x200efc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x200efc) {
            ctx->pc = 0x200F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200EFCu;
            // 0x200f00: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200F14u;
            return;
        }
    }
    ctx->pc = 0x200F04u;
    // 0x200f04: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x200F04u;
    SET_GPR_U32(ctx, 31, 0x200F0Cu);
    ctx->pc = 0x200F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F04u;
    // 0x200f08: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x200F04u, 0x200F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F0Cu;
label_200f0c:
    // 0x200f0c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x200F0Cu;
    {
        const bool branch_taken_0x200f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F0Cu;
        // 0x200f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f0c) {
            ctx->pc = 0x201078u;
            return;
        }
    }
    ctx->pc = 0x200F14u;
}
