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

// Function: entry_0016060c
// Address: 0x16060c - 0x160660
void entry_0016060c_0x16060c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016060c_0x16060c");
#endif

    ctx->pc = 0x16060cu;

    // 0x16060c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x16060Cu;
    {
        const bool branch_taken_0x16060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16060c) {
            ctx->pc = 0x1606B8u;
            return;
        }
    }
    ctx->pc = 0x160614u;
    // 0x160614: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x160614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160618: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x160618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16061c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x160620: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x160620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x160624: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x160624u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x160628: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x160628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16062c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x160630: 0x2464003f  addiu       $a0, $v1, 0x3F
    ctx->pc = 0x160630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x160634: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x160634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x160638: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x160638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16063c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16063cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160640: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x160640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160644: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x160644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160648: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160648u;
    {
        const bool branch_taken_0x160648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160648) {
            ctx->pc = 0x160660u;
            return;
        }
    }
    ctx->pc = 0x160650u;
    // 0x160650: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x160650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x160654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160658: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x160658u;
    {
        const bool branch_taken_0x160658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160658u;
        // 0x16065c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160658) {
            ctx->pc = 0x160664u;
            return;
        }
    }
    ctx->pc = 0x160660u;
}
