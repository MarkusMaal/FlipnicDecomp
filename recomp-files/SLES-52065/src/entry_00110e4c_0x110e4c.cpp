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

// Function: entry_00110e4c
// Address: 0x110e4c - 0x110e94
void entry_00110e4c_0x110e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110e4c_0x110e4c");
#endif

    ctx->pc = 0x110e4cu;

    // 0x110e4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x110e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110e50: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x110e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x110e54: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x110e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110e58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110e5c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x110e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x110e60: 0x8c492cd8  lw          $t1, 0x2CD8($v0)
    ctx->pc = 0x110e60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110e64: 0x91240224  lbu         $a0, 0x224($t1)
    ctx->pc = 0x110e64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 548)));
    // 0x110e68: 0x416fc  dsll32      $v0, $a0, 27
    ctx->pc = 0x110e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 27));
    // 0x110e6c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110e70: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x110E70u;
    {
        const bool branch_taken_0x110e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E70u;
        // 0x110e74: 0x416bc  dsll32      $v0, $a0, 26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e70) {
            ctx->pc = 0x110E94u;
            return;
        }
    }
    ctx->pc = 0x110E78u;
    // 0x110e78: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110e7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110E7Cu;
    {
        const bool branch_taken_0x110e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110e7c) {
            ctx->pc = 0x110E94u;
            return;
        }
    }
    ctx->pc = 0x110E84u;
    // 0x110e84: 0x8d220228  lw          $v0, 0x228($t1)
    ctx->pc = 0x110e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 552)));
    // 0x110e88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x110E88u;
    {
        const bool branch_taken_0x110e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E88u;
        // 0x110e8c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e88) {
            ctx->pc = 0x110E94u;
            return;
        }
    }
    ctx->pc = 0x110E90u;
    // 0x110e90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x110e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x110e94u;
}
