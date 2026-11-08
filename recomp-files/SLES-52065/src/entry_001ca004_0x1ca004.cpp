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

// Function: entry_001ca004
// Address: 0x1ca004 - 0x1ca06c
void entry_001ca004_0x1ca004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca004_0x1ca004");
#endif

    switch (ctx->pc) {
        case 0x1ca014u: goto label_1ca014;
        default: break;
    }

    ctx->pc = 0x1ca004u;

    // 0x1ca004: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1ca004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1ca008: 0x244210c8  addiu       $v0, $v0, 0x10C8
    ctx->pc = 0x1ca008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
    // 0x1ca00c: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1CA00Cu;
    SET_GPR_U32(ctx, 31, 0x1CA014u);
    ctx->pc = 0x1CA010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA00Cu;
    // 0x1ca010: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1CA00Cu, 0x1CA014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA014u;
label_1ca014:
    // 0x1ca014: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ca014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca018: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ca018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ca01c: 0x24422500  addiu       $v0, $v0, 0x2500
    ctx->pc = 0x1ca01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9472));
    // 0x1ca020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca024: 0x8ea30068  lw          $v1, 0x68($s5)
    ctx->pc = 0x1ca024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x1ca028: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ca028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca02c: 0x3b8c0  sll         $s7, $v1, 3
    ctx->pc = 0x1ca02cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ca030: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1ca030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1ca034: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ca034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ca038: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ca038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca03c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ca03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ca040: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ca040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ca044: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1ca044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1ca048: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x1ca048u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1ca04c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ca04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ca050: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1ca050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1ca054: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1ca054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ca058: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1ca058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ca05c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA05Cu;
    {
        const bool branch_taken_0x1ca05c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA05Cu;
        // 0x1ca060: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca05c) {
            ctx->pc = 0x1CA06Cu;
            return;
        }
    }
    ctx->pc = 0x1CA064u;
    // 0x1ca064: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ca064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca068: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1ca068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    ctx->pc = 0x1ca06cu;
}
