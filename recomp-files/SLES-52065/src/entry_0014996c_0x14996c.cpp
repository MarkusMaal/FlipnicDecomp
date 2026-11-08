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

// Function: entry_0014996c
// Address: 0x14996c - 0x149990
void entry_0014996c_0x14996c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014996c_0x14996c");
#endif

    switch (ctx->pc) {
        case 0x149984u: goto label_149984;
        default: break;
    }

    ctx->pc = 0x14996cu;

    // 0x14996c: 0x0  nop
    ctx->pc = 0x14996cu;
    // NOP
    // 0x149970: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149974: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x149974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x149978: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x149978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14997c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14997Cu;
    SET_GPR_U32(ctx, 31, 0x149984u);
    ctx->pc = 0x149980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14997Cu;
    // 0x149980: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14997Cu, 0x149984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149984u;
label_149984:
    // 0x149984: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x149984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x149988: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x149988u;
    {
        const bool branch_taken_0x149988 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149988u;
        // 0x14998c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149988) {
            ctx->pc = 0x14993Cu;
            return;
        }
    }
    ctx->pc = 0x149990u;
}
