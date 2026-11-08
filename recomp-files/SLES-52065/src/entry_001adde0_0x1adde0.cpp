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

// Function: entry_001adde0
// Address: 0x1adde0 - 0x1ade04
void entry_001adde0_0x1adde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adde0_0x1adde0");
#endif

    switch (ctx->pc) {
        case 0x1addecu: goto label_1addec;
        default: break;
    }

    ctx->pc = 0x1adde0u;

    // 0x1adde0: 0x8e310010  lw          $s1, 0x10($s1)
    ctx->pc = 0x1adde0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1adde4: 0xc069afc  jal         func_1A6BF0
    ctx->pc = 0x1ADDE4u;
    SET_GPR_U32(ctx, 31, 0x1ADDECu);
    ctx->pc = 0x1ADDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADDE4u;
    // 0x1adde8: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1ADDE4u, 0x1ADDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADDECu;
label_1addec:
    // 0x1addec: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1addecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1addf0: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1addf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1addf4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADDF4u;
    {
        const bool branch_taken_0x1addf4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ADDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDF4u;
        // 0x1addf8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addf4) {
            ctx->pc = 0x1ADE04u;
            return;
        }
    }
    ctx->pc = 0x1ADDFCu;
    // 0x1addfc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ADDFCu;
    {
        const bool branch_taken_0x1addfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDFCu;
        // 0x1ade00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addfc) {
            ctx->pc = 0x1ADE1Cu;
            return;
        }
    }
    ctx->pc = 0x1ADE04u;
}
