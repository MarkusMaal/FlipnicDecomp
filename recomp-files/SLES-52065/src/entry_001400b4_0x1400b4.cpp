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

// Function: entry_001400b4
// Address: 0x1400b4 - 0x1400dc
void entry_001400b4_0x1400b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001400b4_0x1400b4");
#endif

    ctx->pc = 0x1400b4u;

    // 0x1400b4: 0x0  nop
    ctx->pc = 0x1400b4u;
    // NOP
    // 0x1400b8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1400b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1400bc: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1400bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1400c0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1400c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1400c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1400c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1400c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1400c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1400cc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1400ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1400d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1400D0u;
    {
        const bool branch_taken_0x1400d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1400d0) {
            ctx->pc = 0x1400DCu;
            return;
        }
    }
    ctx->pc = 0x1400D8u;
    // 0x1400d8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1400d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1400dcu;
}
