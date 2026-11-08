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

// Function: entry_00122e04
// Address: 0x122e04 - 0x122e2c
void entry_00122e04_0x122e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122e04_0x122e04");
#endif

    switch (ctx->pc) {
        case 0x122e1cu: goto label_122e1c;
        case 0x122e24u: goto label_122e24;
        default: break;
    }

    ctx->pc = 0x122e04u;

    // 0x122e04: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x122e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x122e08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x122e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x122e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x122e10: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x122e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x122e14: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x122E14u;
    SET_GPR_U32(ctx, 31, 0x122E1Cu);
    ctx->pc = 0x122E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E14u;
    // 0x122e18: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x122E14u, 0x122E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E1Cu;
label_122e1c:
    // 0x122e1c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x122E1Cu;
    SET_GPR_U32(ctx, 31, 0x122E24u);
    ctx->pc = 0x122E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E1Cu;
    // 0x122e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x122E1Cu, 0x122E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E24u;
label_122e24:
    // 0x122e24: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x122E24u;
    {
        const bool branch_taken_0x122e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E24u;
        // 0x122e28: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e24) {
            ctx->pc = 0x122E8Cu;
            return;
        }
    }
    ctx->pc = 0x122E2Cu;
}
