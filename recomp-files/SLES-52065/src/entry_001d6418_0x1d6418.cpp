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

// Function: entry_001d6418
// Address: 0x1d6418 - 0x1d6438
void entry_001d6418_0x1d6418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6418_0x1d6418");
#endif

    switch (ctx->pc) {
        case 0x1d6430u: goto label_1d6430;
        default: break;
    }

    ctx->pc = 0x1d6418u;

    // 0x1d6418: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6418u;
    {
        const bool branch_taken_0x1d6418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6418) {
            ctx->pc = 0x1D641Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6418u;
            // 0x1d641c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6438u;
            return;
        }
    }
    ctx->pc = 0x1D6420u;
    // 0x1d6420: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d6420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d6424: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6428: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6428u;
    SET_GPR_U32(ctx, 31, 0x1D6430u);
    ctx->pc = 0x1D642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6428u;
    // 0x1d642c: 0x24a53620  addiu       $a1, $a1, 0x3620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6428u, 0x1D6430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6430u;
label_1d6430:
    // 0x1d6430: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D6430u;
    {
        const bool branch_taken_0x1d6430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6430u;
        // 0x1d6434: 0x8ea80258  lw          $t0, 0x258($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6430) {
            ctx->pc = 0x1D6468u;
            return;
        }
    }
    ctx->pc = 0x1D6438u;
}
