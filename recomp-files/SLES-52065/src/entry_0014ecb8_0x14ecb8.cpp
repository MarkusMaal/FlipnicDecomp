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

// Function: entry_0014ecb8
// Address: 0x14ecb8 - 0x14ecd4
void entry_0014ecb8_0x14ecb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ecb8_0x14ecb8");
#endif

    ctx->pc = 0x14ecb8u;

    // 0x14ecb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ecbc: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x14ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14ecc0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14ecc4: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x14ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14ecc8: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x14ecc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14eccc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14ECCCu;
    {
        const bool branch_taken_0x14eccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eccc) {
            ctx->pc = 0x14ED04u;
            return;
        }
    }
    ctx->pc = 0x14ECD4u;
}
