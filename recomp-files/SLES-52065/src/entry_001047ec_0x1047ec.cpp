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

// Function: entry_001047ec
// Address: 0x1047ec - 0x104810
void entry_001047ec_0x1047ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001047ec_0x1047ec");
#endif

    switch (ctx->pc) {
        case 0x1047f4u: goto label_1047f4;
        case 0x104804u: goto label_104804;
        default: break;
    }

    ctx->pc = 0x1047ecu;

    // 0x1047ec: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1047ECu;
    SET_GPR_U32(ctx, 31, 0x1047F4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1047ECu, 0x1047F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047F4u;
label_1047f4:
    // 0x1047f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1047F4u;
    {
        const bool branch_taken_0x1047f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1047F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047F4u;
        // 0x1047f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047f4) {
            ctx->pc = 0x104810u;
            return;
        }
    }
    ctx->pc = 0x1047FCu;
    // 0x1047fc: 0xc056360  jal         func_158D80
    ctx->pc = 0x1047FCu;
    SET_GPR_U32(ctx, 31, 0x104804u);
    ctx->pc = 0x104800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047FCu;
    // 0x104800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1047FCu, 0x104804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104804u;
label_104804:
    // 0x104804: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104808: 0x24427bd0  addiu       $v0, $v0, 0x7BD0
    ctx->pc = 0x104808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31696));
    // 0x10480c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10480cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104810u;
}
