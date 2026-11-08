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

// Function: entry_0014ab7c
// Address: 0x14ab7c - 0x14aba0
void entry_0014ab7c_0x14ab7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ab7c_0x14ab7c");
#endif

    ctx->pc = 0x14ab7cu;

    // 0x14ab7c: 0x0  nop
    ctx->pc = 0x14ab7cu;
    // NOP
    // 0x14ab80: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x14ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14ab84: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x14ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14ab88: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14ab8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14ab90: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x14ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x14ab94: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14ab94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14ab98: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x14AB98u;
    {
        const bool branch_taken_0x14ab98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab98) {
            ctx->pc = 0x14AB4Cu;
            return;
        }
    }
    ctx->pc = 0x14ABA0u;
}
