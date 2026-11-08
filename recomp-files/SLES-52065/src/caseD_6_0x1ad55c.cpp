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

// Function: caseD_6
// Address: 0x1ad55c - 0x1ad598
void caseD_6_0x1ad55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1ad55c");
#endif

    switch (ctx->pc) {
        case 0x1ad570u: goto label_1ad570;
        case 0x1ad590u: goto label_1ad590;
        default: break;
    }

    ctx->pc = 0x1ad55cu;

    // 0x1ad55c: 0x8e2206b4  lw          $v0, 0x6B4($s1)
    ctx->pc = 0x1ad55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1716)));
    // 0x1ad560: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ad560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1ad564: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ad568: 0xc06b724  jal         func_1ADC90
    ctx->pc = 0x1AD568u;
    SET_GPR_U32(ctx, 31, 0x1AD570u);
    ctx->pc = 0x1AD56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD568u;
    // 0x1ad56c: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADC90u, 0x1AD568u, 0x1AD570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD570u;
label_1ad570:
    // 0x1ad570: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x1AD570u;
    {
        const bool branch_taken_0x1ad570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad570) {
            ctx->pc = 0x1ADAB0u;
            return;
        }
    }
    ctx->pc = 0x1AD578u;
    // 0x1ad578: 0xae2006c8  sw          $zero, 0x6C8($s1)
    ctx->pc = 0x1ad578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 0));
    // 0x1ad57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad580: 0xae2006d4  sw          $zero, 0x6D4($s1)
    ctx->pc = 0x1ad580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1748), GPR_U32(ctx, 0));
    // 0x1ad584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad588: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AD588u;
    SET_GPR_U32(ctx, 31, 0x1AD590u);
    ctx->pc = 0x1AD58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD588u;
    // 0x1ad58c: 0xa22206c0  sb          $v0, 0x6C0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD588u, 0x1AD590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD590u;
label_1ad590:
    // 0x1ad590: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x1AD590u;
    {
        const bool branch_taken_0x1ad590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad590) {
            ctx->pc = 0x1ADAB0u;
            return;
        }
    }
    ctx->pc = 0x1AD598u;
}
