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

// Function: entry_0010bb6c
// Address: 0x10bb6c - 0x10bb98
void entry_0010bb6c_0x10bb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bb6c_0x10bb6c");
#endif

    switch (ctx->pc) {
        case 0x10bb94u: goto label_10bb94;
        default: break;
    }

    ctx->pc = 0x10bb6cu;

    // 0x10bb6c: 0x0  nop
    ctx->pc = 0x10bb6cu;
    // NOP
    // 0x10bb70: 0x4e00009  bltz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x10BB70u;
    {
        const bool branch_taken_0x10bb70 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x10BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB70u;
        // 0x10bb74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb70) {
            ctx->pc = 0x10BB98u;
            return;
        }
    }
    ctx->pc = 0x10BB78u;
    // 0x10bb78: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x10bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x10bb7c: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x10bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x10bb80: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x10bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10bb84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10bb88: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10bb8c: 0xc05eb14  jal         func_17AC50
    ctx->pc = 0x10BB8Cu;
    SET_GPR_U32(ctx, 31, 0x10BB94u);
    ctx->pc = 0x10BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BB8Cu;
    // 0x10bb90: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC50u, 0x10BB8Cu, 0x10BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BB94u;
label_10bb94:
    // 0x10bb94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10bb98u;
}
