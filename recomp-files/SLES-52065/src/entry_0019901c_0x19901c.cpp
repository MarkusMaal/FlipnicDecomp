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

// Function: entry_0019901c
// Address: 0x19901c - 0x19904c
void entry_0019901c_0x19901c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019901c_0x19901c");
#endif

    switch (ctx->pc) {
        case 0x199044u: goto label_199044;
        default: break;
    }

    ctx->pc = 0x19901cu;

    // 0x19901c: 0x0  nop
    ctx->pc = 0x19901cu;
    // NOP
    // 0x199020: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x199020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x199024: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x199024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x199028: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x199028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19902c: 0x1062ffc2  beq         $v1, $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x19902Cu;
    {
        const bool branch_taken_0x19902c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19902c) {
            ctx->pc = 0x198F38u;
            return;
        }
    }
    ctx->pc = 0x199034u;
    // 0x199034: 0x8e820688  lw          $v0, 0x688($s4)
    ctx->pc = 0x199034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x199038: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19903c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19903Cu;
    SET_GPR_U32(ctx, 31, 0x199044u);
    ctx->pc = 0x199040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19903Cu;
    // 0x199040: 0xae82068c  sw          $v0, 0x68C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1676), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19903Cu, 0x199044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199044u;
label_199044:
    // 0x199044: 0x1000023d  b           . + 4 + (0x23D << 2)
    ctx->pc = 0x199044u;
    {
        const bool branch_taken_0x199044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199044) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x19904Cu;
}
