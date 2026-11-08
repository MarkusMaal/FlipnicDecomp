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

// Function: entry_001eed60
// Address: 0x1eed60 - 0x1eed90
void entry_001eed60_0x1eed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eed60_0x1eed60");
#endif

    switch (ctx->pc) {
        case 0x1eed80u: goto label_1eed80;
        default: break;
    }

    ctx->pc = 0x1eed60u;

label_1eed60:
    // 0x1eed60: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1eed60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1eed64: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x1eed64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1eed68: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1eed68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1eed6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eed6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed70: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1eed70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1eed74: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1eed74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed78: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EED78u;
    SET_GPR_U32(ctx, 31, 0x1EED80u);
    ctx->pc = 0x1EED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED78u;
    // 0x1eed7c: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EED78u, 0x1EED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED80u;
label_1eed80:
    // 0x1eed80: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EED80u;
    {
        const bool branch_taken_0x1eed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED80u;
        // 0x1eed84: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed80) {
            ctx->pc = 0x1EED60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eed60;
        }
    }
    ctx->pc = 0x1EED88u;
    // 0x1eed88: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1EED88u;
    {
        const bool branch_taken_0x1eed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED88u;
        // 0x1eed8c: 0xdfb40060  ld          $s4, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed88) {
            ctx->pc = 0x1EEE3Cu;
            return;
        }
    }
    ctx->pc = 0x1EED90u;
}
