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

// Function: entry_0010232c
// Address: 0x10232c - 0x102354
void entry_0010232c_0x10232c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010232c_0x10232c");
#endif

    switch (ctx->pc) {
        case 0x10233cu: goto label_10233c;
        default: break;
    }

    ctx->pc = 0x10232cu;

    // 0x10232c: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x10232cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x102330: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x102334: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x102334u;
    SET_GPR_U32(ctx, 31, 0x10233Cu);
    ctx->pc = 0x102338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102334u;
    // 0x102338: 0x24a5e068  addiu       $a1, $a1, -0x1F98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102334u, 0x10233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10233Cu;
label_10233c:
    // 0x10233c: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10233Cu;
    {
        const bool branch_taken_0x10233c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10233c) {
            ctx->pc = 0x102398u;
            return;
        }
    }
    ctx->pc = 0x102344u;
    // 0x102344: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102344u;
    {
        const bool branch_taken_0x102344 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x102348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102344u;
        // 0x102348: 0x8f858388  lw          $a1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102344) {
            ctx->pc = 0x102354u;
            return;
        }
    }
    ctx->pc = 0x10234Cu;
    // 0x10234c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10234Cu;
    {
        const bool branch_taken_0x10234c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10234Cu;
        // 0x102350: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10234c) {
            ctx->pc = 0x10236Cu;
            return;
        }
    }
    ctx->pc = 0x102354u;
}
