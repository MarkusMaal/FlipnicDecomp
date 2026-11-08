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

// Function: entry_00121f38
// Address: 0x121f38 - 0x121f60
void entry_00121f38_0x121f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121f38_0x121f38");
#endif

    ctx->pc = 0x121f38u;

    // 0x121f38: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x121f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x121f3c: 0x8e442030  lw          $a0, 0x2030($s2)
    ctx->pc = 0x121f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
    // 0x121f40: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x121f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x121f44: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x121f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121f48: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x121f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x121f4c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x121f4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x121f50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x121F50u;
    {
        const bool branch_taken_0x121f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f50) {
            ctx->pc = 0x121F60u;
            return;
        }
    }
    ctx->pc = 0x121F58u;
    // 0x121f58: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x121f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x121f5c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x121f5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x121f60u;
}
