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

// Function: entry_001b12f8
// Address: 0x1b12f8 - 0x1b131c
void entry_001b12f8_0x1b12f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b12f8_0x1b12f8");
#endif

    switch (ctx->pc) {
        case 0x1b130cu: goto label_1b130c;
        default: break;
    }

    ctx->pc = 0x1b12f8u;

    // 0x1b12f8: 0x8e840118  lw          $a0, 0x118($s4)
    ctx->pc = 0x1b12f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1b12fc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B12FCu;
    {
        const bool branch_taken_0x1b12fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12FCu;
        // 0x1b1300: 0x8f928714  lw          $s2, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12fc) {
            ctx->pc = 0x1B131Cu;
            return;
        }
    }
    ctx->pc = 0x1B1304u;
    // 0x1b1304: 0xc06c558  jal         func_1B1560
    ctx->pc = 0x1B1304u;
    SET_GPR_U32(ctx, 31, 0x1B130Cu);
    ctx->pc = 0x1B1308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1304u;
    // 0x1b1308: 0x8e85011c  lw          $a1, 0x11C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1560u, 0x1B1304u, 0x1B130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B130Cu;
label_1b130c:
    // 0x1b130c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B130Cu;
    {
        const bool branch_taken_0x1b130c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B130Cu;
        // 0x1b1310: 0x26840118  addiu       $a0, $s4, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b130c) {
            ctx->pc = 0x1B1320u;
            return;
        }
    }
    ctx->pc = 0x1B1314u;
    // 0x1b1314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1314u;
    {
        const bool branch_taken_0x1b1314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1314u;
        // 0x1b1318: 0x8e820118  lw          $v0, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1314) {
            ctx->pc = 0x1B1328u;
            return;
        }
    }
    ctx->pc = 0x1B131Cu;
}
