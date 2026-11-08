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

// Function: entry_001027e8
// Address: 0x1027e8 - 0x102814
void entry_001027e8_0x1027e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001027e8_0x1027e8");
#endif

    switch (ctx->pc) {
        case 0x1027fcu: goto label_1027fc;
        default: break;
    }

    ctx->pc = 0x1027e8u;

    // 0x1027e8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1027e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1027ec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1027ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1027f0: 0x24a5e018  addiu       $a1, $a1, -0x1FE8
    ctx->pc = 0x1027f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959128));
    // 0x1027f4: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1027F4u;
    SET_GPR_U32(ctx, 31, 0x1027FCu);
    ctx->pc = 0x1027F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027F4u;
    // 0x1027f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1027F4u, 0x1027FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027FCu;
label_1027fc:
    // 0x1027fc: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1027FCu;
    {
        const bool branch_taken_0x1027fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1027fc) {
            ctx->pc = 0x102858u;
            return;
        }
    }
    ctx->pc = 0x102804u;
    // 0x102804: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102804u;
    {
        const bool branch_taken_0x102804 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x102808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102804u;
        // 0x102808: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102804) {
            ctx->pc = 0x102814u;
            return;
        }
    }
    ctx->pc = 0x10280Cu;
    // 0x10280c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10280Cu;
    {
        const bool branch_taken_0x10280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10280Cu;
        // 0x102810: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10280c) {
            ctx->pc = 0x102830u;
            return;
        }
    }
    ctx->pc = 0x102814u;
}
