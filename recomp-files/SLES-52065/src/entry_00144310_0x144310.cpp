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

// Function: entry_00144310
// Address: 0x144310 - 0x144324
void entry_00144310_0x144310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144310_0x144310");
#endif

    ctx->pc = 0x144310u;

    // 0x144310: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x144310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x144314: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x144314u;
    {
        const bool branch_taken_0x144314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x144314) {
            ctx->pc = 0x144324u;
            return;
        }
    }
    ctx->pc = 0x14431Cu;
    // 0x14431c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14431Cu;
    SET_GPR_U32(ctx, 31, 0x144324u);
    ctx->pc = 0x144320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14431Cu;
    // 0x144320: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14431Cu, 0x144324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144324u;
}
