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

// Function: entry_002002ec
// Address: 0x2002ec - 0x200308
void entry_002002ec_0x2002ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002002ec_0x2002ec");
#endif

    switch (ctx->pc) {
        case 0x2002f4u: goto label_2002f4;
        default: break;
    }

    ctx->pc = 0x2002ecu;

    // 0x2002ec: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x2002ECu;
    SET_GPR_U32(ctx, 31, 0x2002F4u);
    ctx->pc = 0x2002F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002ECu;
    // 0x2002f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x2002ECu, 0x2002F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002F4u;
label_2002f4:
    // 0x2002f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2002f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002f8: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2002F8u;
    {
        const bool branch_taken_0x2002f8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2002FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002F8u;
        // 0x2002fc: 0x26a60014  addiu       $a2, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002f8) {
            ctx->pc = 0x200324u;
            return;
        }
    }
    ctx->pc = 0x200300u;
    // 0x200300: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x200300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200304: 0x0  nop
    ctx->pc = 0x200304u;
    // NOP
    ctx->pc = 0x200308u;
}
