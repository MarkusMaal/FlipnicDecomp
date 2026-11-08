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

// Function: entry_0010bc2c
// Address: 0x10bc2c - 0x10bc5c
void entry_0010bc2c_0x10bc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bc2c_0x10bc2c");
#endif

    switch (ctx->pc) {
        case 0x10bc50u: goto label_10bc50;
        default: break;
    }

    ctx->pc = 0x10bc2cu;

    // 0x10bc2c: 0x8e0543dc  lw          $a1, 0x43DC($s0)
    ctx->pc = 0x10bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17372)));
    // 0x10bc30: 0x4a00013  bltz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x10BC30u;
    {
        const bool branch_taken_0x10bc30 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10bc30) {
            ctx->pc = 0x10BC80u;
            return;
        }
    }
    ctx->pc = 0x10BC38u;
    // 0x10bc38: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
    // 0x10bc3c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10bc40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10bc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10bc44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10bc48: 0xc046744  jal         func_119D10
    ctx->pc = 0x10BC48u;
    SET_GPR_U32(ctx, 31, 0x10BC50u);
    ctx->pc = 0x10BC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC48u;
    // 0x10bc4c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10BC48u, 0x10BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC50u;
label_10bc50:
    // 0x10bc50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10bc54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10BC54u;
    {
        const bool branch_taken_0x10bc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC54u;
        // 0x10bc58: 0xae0343dc  sw          $v1, 0x43DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc54) {
            ctx->pc = 0x10BC80u;
            return;
        }
    }
    ctx->pc = 0x10BC5Cu;
}
