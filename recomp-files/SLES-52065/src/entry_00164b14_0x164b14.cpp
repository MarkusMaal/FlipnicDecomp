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

// Function: entry_00164b14
// Address: 0x164b14 - 0x164b30
void entry_00164b14_0x164b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164b14_0x164b14");
#endif

    switch (ctx->pc) {
        case 0x164b20u: goto label_164b20;
        default: break;
    }

    ctx->pc = 0x164b14u;

    // 0x164b14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x164b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b18: 0xc058d4c  jal         func_163530
    ctx->pc = 0x164B18u;
    SET_GPR_U32(ctx, 31, 0x164B20u);
    ctx->pc = 0x164B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164B18u;
    // 0x164b1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163530u, 0x164B18u, 0x164B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B20u;
label_164b20:
    // 0x164b20: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164B20u;
    {
        const bool branch_taken_0x164b20 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x164B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B20u;
        // 0x164b24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b20) {
            ctx->pc = 0x164B30u;
            return;
        }
    }
    ctx->pc = 0x164B28u;
    // 0x164b28: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x164B28u;
    {
        const bool branch_taken_0x164b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B28u;
        // 0x164b2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b28) {
            ctx->pc = 0x164C60u;
            return;
        }
    }
    ctx->pc = 0x164B30u;
}
