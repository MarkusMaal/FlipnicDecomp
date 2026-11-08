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

// Function: entry_001fe014
// Address: 0x1fe014 - 0x1fe07c
void entry_001fe014_0x1fe014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe014_0x1fe014");
#endif

    switch (ctx->pc) {
        case 0x1fe074u: goto label_1fe074;
        default: break;
    }

    ctx->pc = 0x1fe014u;

    // 0x1fe014: 0x30c22000  andi        $v0, $a2, 0x2000
    ctx->pc = 0x1fe014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x1fe018: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FE018u;
    {
        const bool branch_taken_0x1fe018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe018) {
            ctx->pc = 0x1FE01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE018u;
            // 0x1fe01c: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE090u;
            return;
        }
    }
    ctx->pc = 0x1FE020u;
    // 0x1fe020: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x1fe020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1fe024: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FE024u;
    {
        const bool branch_taken_0x1fe024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe024) {
            ctx->pc = 0x1FE028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE024u;
            // 0x1fe028: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE090u;
            return;
        }
    }
    ctx->pc = 0x1FE02Cu;
    // 0x1fe02c: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1fe02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1fe030: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1fe030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1fe034: 0x242102d  daddu       $v0, $s2, $v0
    ctx->pc = 0x1fe034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1fe038: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1fe038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fe03c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FE03Cu;
    {
        const bool branch_taken_0x1fe03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE03Cu;
        // 0x1fe040: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe03c) {
            ctx->pc = 0x1FE08Cu;
            return;
        }
    }
    ctx->pc = 0x1FE044u;
    // 0x1fe044: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fe044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fe048: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fe048u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fe04c: 0x2221823  subu        $v1, $s1, $v0
    ctx->pc = 0x1fe04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fe050: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1fe050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1fe054: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1fe054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1fe058: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE058u;
    {
        const bool branch_taken_0x1fe058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE058u;
        // 0x1fe05c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe058) {
            ctx->pc = 0x1FE07Cu;
            return;
        }
    }
    ctx->pc = 0x1FE060u;
    // 0x1fe060: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1fe060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1fe064: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE064u;
    {
        const bool branch_taken_0x1fe064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fe064) {
            ctx->pc = 0x1FE068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE064u;
            // 0x1fe068: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE07Cu;
            return;
        }
    }
    ctx->pc = 0x1FE06Cu;
    // 0x1fe06c: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x1FE06Cu;
    SET_GPR_U32(ctx, 31, 0x1FE074u);
    ctx->pc = 0x1FE070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE06Cu;
    // 0x1fe070: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x1FE06Cu, 0x1FE074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE074u;
label_1fe074:
    // 0x1fe074: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x1fe074u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fe078: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1fe078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->pc = 0x1fe07cu;
}
