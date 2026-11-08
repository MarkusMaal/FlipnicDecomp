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

// Function: entry_0010ba44
// Address: 0x10ba44 - 0x10ba6c
void entry_0010ba44_0x10ba44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ba44_0x10ba44");
#endif

    ctx->pc = 0x10ba44u;

    // 0x10ba44: 0x0  nop
    ctx->pc = 0x10ba44u;
    // NOP
    // 0x10ba48: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x10ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x10ba4c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x10ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10ba50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10ba54: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x10ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x10ba58: 0x8c632710  lw          $v1, 0x2710($v1)
    ctx->pc = 0x10ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10000)));
    // 0x10ba5c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BA5Cu;
    {
        const bool branch_taken_0x10ba5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ba5c) {
            ctx->pc = 0x10BA6Cu;
            return;
        }
    }
    ctx->pc = 0x10BA64u;
    // 0x10ba64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10BA64u;
    {
        const bool branch_taken_0x10ba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA64u;
        // 0x10ba68: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba64) {
            ctx->pc = 0x10BA84u;
            return;
        }
    }
    ctx->pc = 0x10BA6Cu;
}
