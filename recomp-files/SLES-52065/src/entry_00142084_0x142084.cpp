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

// Function: entry_00142084
// Address: 0x142084 - 0x1420ac
void entry_00142084_0x142084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142084_0x142084");
#endif

    ctx->pc = 0x142084u;

    // 0x142084: 0x0  nop
    ctx->pc = 0x142084u;
    // NOP
    // 0x142088: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x142088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14208c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x14208cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x142090: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142090u;
    {
        const bool branch_taken_0x142090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142090) {
            ctx->pc = 0x1420ACu;
            return;
        }
    }
    ctx->pc = 0x142098u;
    // 0x142098: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x142098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14209c: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x14209cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1420a0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1420a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1420a4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1420a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1420a8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1420a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x1420acu;
}
