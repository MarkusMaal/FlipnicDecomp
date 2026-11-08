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

// Function: entry_00121e0c
// Address: 0x121e0c - 0x121e34
void entry_00121e0c_0x121e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121e0c_0x121e0c");
#endif

    ctx->pc = 0x121e0cu;

    // 0x121e0c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x121e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x121e10: 0x8e442030  lw          $a0, 0x2030($s2)
    ctx->pc = 0x121e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
    // 0x121e14: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x121e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x121e18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x121e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121e1c: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x121e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x121e20: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x121e20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x121e24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x121E24u;
    {
        const bool branch_taken_0x121e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x121e24) {
            ctx->pc = 0x121E34u;
            return;
        }
    }
    ctx->pc = 0x121E2Cu;
    // 0x121e2c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x121e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x121e30: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x121e30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x121e34u;
}
