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

// Function: entry_00172634
// Address: 0x172634 - 0x172648
void entry_00172634_0x172634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172634_0x172634");
#endif

    ctx->pc = 0x172634u;

    // 0x172634: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x172634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x172638: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x172638u;
    {
        const bool branch_taken_0x172638 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172638u;
        // 0x17263c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172638) {
            ctx->pc = 0x17264Cu;
            return;
        }
    }
    ctx->pc = 0x172640u;
    // 0x172640: 0xc0401a4  jal         func_100690
    ctx->pc = 0x172640u;
    SET_GPR_U32(ctx, 31, 0x172648u);
    ctx->pc = 0x172644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172640u;
    // 0x172644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x172640u, 0x172648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172648u;
}
