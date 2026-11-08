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

// Function: entry_001232ac
// Address: 0x1232ac - 0x1232d0
void entry_001232ac_0x1232ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001232ac_0x1232ac");
#endif

    ctx->pc = 0x1232acu;

    // 0x1232ac: 0x0  nop
    ctx->pc = 0x1232acu;
    // NOP
    // 0x1232b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1232b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1232b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1232B4u;
    {
        const bool branch_taken_0x1232b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1232b4) {
            ctx->pc = 0x1232D0u;
            return;
        }
    }
    ctx->pc = 0x1232BCu;
    // 0x1232bc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1232bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1232c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1232c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1232c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1232c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1232c8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1232C8u;
    {
        const bool branch_taken_0x1232c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1232c8) {
            ctx->pc = 0x1232FCu;
            return;
        }
    }
    ctx->pc = 0x1232D0u;
}
