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

// Function: entry_001bbdfc
// Address: 0x1bbdfc - 0x1bbe2c
void entry_001bbdfc_0x1bbdfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbdfc_0x1bbdfc");
#endif

    ctx->pc = 0x1bbdfcu;

    // 0x1bbdfc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1bbdfcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbe00: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1bbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1bbe04: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1bbe04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1bbe08: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBE08u;
    {
        const bool branch_taken_0x1bbe08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe08) {
            ctx->pc = 0x1BBE2Cu;
            return;
        }
    }
    ctx->pc = 0x1BBE10u;
    // 0x1bbe10: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bbe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbe14: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1bbe14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bbe18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bbe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbe1c: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x1bbe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1bbe20: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1bbe20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bbe24: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBE24u;
    {
        const bool branch_taken_0x1bbe24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe24) {
            ctx->pc = 0x1BBE4Cu;
            return;
        }
    }
    ctx->pc = 0x1BBE2Cu;
}
