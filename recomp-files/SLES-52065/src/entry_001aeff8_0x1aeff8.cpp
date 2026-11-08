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

// Function: entry_001aeff8
// Address: 0x1aeff8 - 0x1af044
void entry_001aeff8_0x1aeff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aeff8_0x1aeff8");
#endif

    switch (ctx->pc) {
        case 0x1af00cu: goto label_1af00c;
        default: break;
    }

    ctx->pc = 0x1aeff8u;

label_1aeff8:
    // 0x1aeff8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1aeff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1aeffc: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x1aeffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1af000: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1af000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af004: 0xc05704c  jal         func_15C130
    ctx->pc = 0x1AF004u;
    SET_GPR_U32(ctx, 31, 0x1AF00Cu);
    ctx->pc = 0x1AF008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF004u;
    // 0x1af008: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x1AF004u, 0x1AF00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF00Cu;
label_1af00c:
    // 0x1af00c: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1af00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1af010: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1af010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1af014: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1af014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1af018: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x1af018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1af01c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1af01cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1af020: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1af020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1af024: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1af024u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1af028: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1af028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1af02c: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1af02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1af030: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1af030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1af034: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1af034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1af038: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1af038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1af03c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1AF03Cu;
    {
        const bool branch_taken_0x1af03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF03Cu;
        // 0x1af040: 0x24870001  addiu       $a3, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af03c) {
            ctx->pc = 0x1AEFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aeff8;
        }
    }
    ctx->pc = 0x1AF044u;
}
