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

// Function: entry_001927d8
// Address: 0x1927d8 - 0x192804
void entry_001927d8_0x1927d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001927d8_0x1927d8");
#endif

    switch (ctx->pc) {
        case 0x1927ecu: goto label_1927ec;
        default: break;
    }

    ctx->pc = 0x1927d8u;

    // 0x1927d8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1927d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1927dc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1927dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1927e0: 0x24a5fe10  addiu       $a1, $a1, -0x1F0
    ctx->pc = 0x1927e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966800));
    // 0x1927e4: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x1927E4u;
    SET_GPR_U32(ctx, 31, 0x1927ECu);
    ctx->pc = 0x1927E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927E4u;
    // 0x1927e8: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x1927E4u, 0x1927ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927ECu;
label_1927ec:
    // 0x1927ec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1927ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1927f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1927f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1927f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1927f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1927f8: 0xac400450  sw          $zero, 0x450($v0)
    ctx->pc = 0x1927f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1104), GPR_U32(ctx, 0));
    // 0x1927fc: 0xac400510  sw          $zero, 0x510($v0)
    ctx->pc = 0x1927fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1296), GPR_U32(ctx, 0));
    // 0x192800: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x192800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
    ctx->pc = 0x192804u;
}
