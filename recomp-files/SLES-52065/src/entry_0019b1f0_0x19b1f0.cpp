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

// Function: entry_0019b1f0
// Address: 0x19b1f0 - 0x19b21c
void entry_0019b1f0_0x19b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b1f0_0x19b1f0");
#endif

    switch (ctx->pc) {
        case 0x19b214u: goto label_19b214;
        default: break;
    }

    ctx->pc = 0x19b1f0u;

    // 0x19b1f0: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x19b1f4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B1F4u;
    {
        const bool branch_taken_0x19b1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19b1f4) {
            ctx->pc = 0x19B21Cu;
            return;
        }
    }
    ctx->pc = 0x19B1FCu;
    // 0x19b1fc: 0x8c820680  lw          $v0, 0x680($a0)
    ctx->pc = 0x19b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1664)));
    // 0x19b200: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B200u;
    {
        const bool branch_taken_0x19b200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B200u;
        // 0x19b204: 0x24940680  addiu       $s4, $a0, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b200) {
            ctx->pc = 0x19B21Cu;
            return;
        }
    }
    ctx->pc = 0x19B208u;
    // 0x19b208: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x19b208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x19b20c: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x19B20Cu;
    SET_GPR_U32(ctx, 31, 0x19B214u);
    ctx->pc = 0x19B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B20Cu;
    // 0x19b210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x19B20Cu, 0x19B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B214u;
label_19b214:
    // 0x19b214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b218: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x19b218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x19b21cu;
}
