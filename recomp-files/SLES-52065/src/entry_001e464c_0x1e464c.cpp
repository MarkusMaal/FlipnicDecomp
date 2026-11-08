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

// Function: entry_001e464c
// Address: 0x1e464c - 0x1e468c
void entry_001e464c_0x1e464c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e464c_0x1e464c");
#endif

    switch (ctx->pc) {
        case 0x1e4674u: goto label_1e4674;
        default: break;
    }

    ctx->pc = 0x1e464cu;

    // 0x1e464c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e464cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e4650: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E4650u;
    {
        const bool branch_taken_0x1e4650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4650) {
            ctx->pc = 0x1E468Cu;
            return;
        }
    }
    ctx->pc = 0x1E4658u;
    // 0x1e4658: 0x92620050  lbu         $v0, 0x50($s3)
    ctx->pc = 0x1e4658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1e465c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E465Cu;
    {
        const bool branch_taken_0x1e465c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e465c) {
            ctx->pc = 0x1E468Cu;
            return;
        }
    }
    ctx->pc = 0x1E4664u;
    // 0x1e4664: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4664u;
    {
        const bool branch_taken_0x1e4664 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1E4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4664u;
        // 0x1e4668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4664) {
            ctx->pc = 0x1E468Cu;
            return;
        }
    }
    ctx->pc = 0x1E466Cu;
    // 0x1e466c: 0xc079948  jal         func_1E6520
    ctx->pc = 0x1E466Cu;
    SET_GPR_U32(ctx, 31, 0x1E4674u);
    ctx->pc = 0x1E6520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6520u, 0x1E466Cu, 0x1E4674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4674u;
label_1e4674:
    // 0x1e4674: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4674u;
    {
        const bool branch_taken_0x1e4674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4674u;
        // 0x1e4678: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4674) {
            ctx->pc = 0x1E468Cu;
            return;
        }
    }
    ctx->pc = 0x1E467Cu;
    // 0x1e467c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e467cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4680: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e4680u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1e4684: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E4684u;
    {
        const bool branch_taken_0x1e4684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4684u;
        // 0x1e4688: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4684) {
            ctx->pc = 0x1E46E0u;
            return;
        }
    }
    ctx->pc = 0x1E468Cu;
}
