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

// Function: entry_0013cc34
// Address: 0x13cc34 - 0x13cc64
void entry_0013cc34_0x13cc34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cc34_0x13cc34");
#endif

    ctx->pc = 0x13cc34u;

    // 0x13cc34: 0x0  nop
    ctx->pc = 0x13cc34u;
    // NOP
    // 0x13cc38: 0x8ea401cc  lw          $a0, 0x1CC($s5)
    ctx->pc = 0x13cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 460)));
    // 0x13cc3c: 0x8ea301d0  lw          $v1, 0x1D0($s5)
    ctx->pc = 0x13cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 464)));
    // 0x13cc40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13cc44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13cc48: 0x1603fff7  bne         $s0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13CC48u;
    {
        const bool branch_taken_0x13cc48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x13cc48) {
            ctx->pc = 0x13CC28u;
            return;
        }
    }
    ctx->pc = 0x13CC50u;
    // 0x13cc50: 0x92a3018a  lbu         $v1, 0x18A($s5)
    ctx->pc = 0x13cc50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 394)));
    // 0x13cc54: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CC54u;
    {
        const bool branch_taken_0x13cc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC54u;
        // 0x13cc58: 0x26a400b0  addiu       $a0, $s5, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc54) {
            ctx->pc = 0x13CC64u;
            return;
        }
    }
    ctx->pc = 0x13CC5Cu;
    // 0x13cc5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13CC5Cu;
    {
        const bool branch_taken_0x13cc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC5Cu;
        // 0x13cc60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc5c) {
            ctx->pc = 0x13CC74u;
            return;
        }
    }
    ctx->pc = 0x13CC64u;
}
