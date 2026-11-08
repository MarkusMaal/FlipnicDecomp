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

// Function: entry_00109350
// Address: 0x109350 - 0x10936c
void entry_00109350_0x109350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109350_0x109350");
#endif

    switch (ctx->pc) {
        case 0x109364u: goto label_109364;
        default: break;
    }

    ctx->pc = 0x109350u;

    // 0x109350: 0x844201f0  lh          $v0, 0x1F0($v0)
    ctx->pc = 0x109350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x109354: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109354u;
    {
        const bool branch_taken_0x109354 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x109354) {
            ctx->pc = 0x10936Cu;
            return;
        }
    }
    ctx->pc = 0x10935Cu;
    // 0x10935c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x10935Cu;
    SET_GPR_U32(ctx, 31, 0x109364u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x10935Cu, 0x109364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109364u;
label_109364:
    // 0x109364: 0xc049f30  jal         func_127CC0
    ctx->pc = 0x109364u;
    SET_GPR_U32(ctx, 31, 0x10936Cu);
    ctx->pc = 0x109368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109364u;
    // 0x109368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CC0u, 0x109364u, 0x10936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10936Cu;
}
