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

// Function: caseD_c
// Address: 0x1e9a04 - 0x1e9a50
void caseD_c_0x1e9a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1e9a04");
#endif

    ctx->pc = 0x1e9a04u;

    // 0x1e9a04: 0x0  nop
    ctx->pc = 0x1e9a04u;
    // NOP
    // 0x1e9a08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e9a0c: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x1e9a0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e9a10: 0x24440005  addiu       $a0, $v0, 0x5
    ctx->pc = 0x1e9a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1e9a14: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1e9a14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1e9a18: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1e9a18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e9a1c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1e9a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1e9a20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1e9a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1e9a24: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x1e9a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9a28: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1e9a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1e9a2c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1e9a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1e9a30: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1e9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1e9a34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e9a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e9a38: 0xafa20390  sw          $v0, 0x390($sp)
    ctx->pc = 0x1e9a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
    // 0x1e9a3c: 0x8fa20390  lw          $v0, 0x390($sp)
    ctx->pc = 0x1e9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1e9a40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9A40u;
    {
        const bool branch_taken_0x1e9a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a40) {
            ctx->pc = 0x1E9A50u;
            return;
        }
    }
    ctx->pc = 0x1E9A48u;
    // 0x1e9a48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9A48u;
    {
        const bool branch_taken_0x1e9a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A48u;
        // 0x1e9a4c: 0xafa20390  sw          $v0, 0x390($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a48) {
            ctx->pc = 0x1E9A58u;
            return;
        }
    }
    ctx->pc = 0x1E9A50u;
}
