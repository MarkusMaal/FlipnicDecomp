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

// Function: entry_0014b3e4
// Address: 0x14b3e4 - 0x14b40c
void entry_0014b3e4_0x14b3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b3e4_0x14b3e4");
#endif

    ctx->pc = 0x14b3e4u;

    // 0x14b3e4: 0x0  nop
    ctx->pc = 0x14b3e4u;
    // NOP
    // 0x14b3e8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14b3ec: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x14b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x14b3f0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14b3f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14b3f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b3fc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x14b3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14b400: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B400u;
    {
        const bool branch_taken_0x14b400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b400) {
            ctx->pc = 0x14B40Cu;
            return;
        }
    }
    ctx->pc = 0x14B408u;
    // 0x14b408: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14b408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x14b40cu;
}
