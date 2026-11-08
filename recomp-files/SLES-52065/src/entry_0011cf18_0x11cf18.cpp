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

// Function: entry_0011cf18
// Address: 0x11cf18 - 0x11cf7c
void entry_0011cf18_0x11cf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cf18_0x11cf18");
#endif

    switch (ctx->pc) {
        case 0x11cf74u: goto label_11cf74;
        default: break;
    }

    ctx->pc = 0x11cf18u;

    // 0x11cf18: 0x324c0  sll         $a0, $v1, 19
    ctx->pc = 0x11cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x11cf1c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x11cf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x11cf20: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11cf24: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x11cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x11cf28: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11cf2c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11cf30: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x11cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x11cf34: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x11cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11cf38: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x11cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x11cf3c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11cf40: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x11cf40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11cf44: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x11CF44u;
    {
        const bool branch_taken_0x11cf44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cf44) {
            ctx->pc = 0x11CF7Cu;
            return;
        }
    }
    ctx->pc = 0x11CF4Cu;
    // 0x11cf4c: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x11cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x11cf50: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11cf54: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11CF54u;
    {
        const bool branch_taken_0x11cf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11cf54) {
            ctx->pc = 0x11CF7Cu;
            return;
        }
    }
    ctx->pc = 0x11CF5Cu;
    // 0x11cf5c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x11cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11cf60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11cf64: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CF64u;
    {
        const bool branch_taken_0x11cf64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11cf64) {
            ctx->pc = 0x11CF7Cu;
            return;
        }
    }
    ctx->pc = 0x11CF6Cu;
    // 0x11cf6c: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11CF6Cu;
    SET_GPR_U32(ctx, 31, 0x11CF74u);
    ctx->pc = 0x11CF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF6Cu;
    // 0x11cf70: 0x262400e4  addiu       $a0, $s1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11CF6Cu, 0x11CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF74u;
label_11cf74:
    // 0x11cf74: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x11CF74u;
    {
        const bool branch_taken_0x11cf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cf74) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11CF7Cu;
}
