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

// Function: entry_001bcfc4
// Address: 0x1bcfc4 - 0x1bcfdc
void entry_001bcfc4_0x1bcfc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcfc4_0x1bcfc4");
#endif

    switch (ctx->pc) {
        case 0x1bcfccu: goto label_1bcfcc;
        default: break;
    }

    ctx->pc = 0x1bcfc4u;

    // 0x1bcfc4: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCFC4u;
    SET_GPR_U32(ctx, 31, 0x1BCFCCu);
    ctx->pc = 0x1BCFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCFC4u;
    // 0x1bcfc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCFC4u, 0x1BCFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCFCCu;
label_1bcfcc:
    // 0x1bcfcc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BCFCCu;
    {
        const bool branch_taken_0x1bcfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfcc) {
            ctx->pc = 0x1BD000u;
            return;
        }
    }
    ctx->pc = 0x1BCFD4u;
    // 0x1bcfd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCFD4u;
    {
        const bool branch_taken_0x1bcfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfd4) {
            ctx->pc = 0x1BCFE4u;
            return;
        }
    }
    ctx->pc = 0x1BCFDCu;
}
