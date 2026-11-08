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

// Function: entry_0013cc9c
// Address: 0x13cc9c - 0x13ccbc
void entry_0013cc9c_0x13cc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cc9c_0x13cc9c");
#endif

    ctx->pc = 0x13cc9cu;

    // 0x13cc9c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13CC9Cu;
    {
        const bool branch_taken_0x13cc9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc9c) {
            ctx->pc = 0x13CCE0u;
            return;
        }
    }
    ctx->pc = 0x13CCA4u;
    // 0x13cca4: 0x8ea30114  lw          $v1, 0x114($s5)
    ctx->pc = 0x13cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
    // 0x13cca8: 0x8eb10118  lw          $s1, 0x118($s5)
    ctx->pc = 0x13cca8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x13ccac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13ccb0: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x13ccb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x13ccb4: 0x1230000a  beq         $s1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x13CCB4u;
    {
        const bool branch_taken_0x13ccb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x13ccb4) {
            ctx->pc = 0x13CCE0u;
            return;
        }
    }
    ctx->pc = 0x13CCBCu;
}
