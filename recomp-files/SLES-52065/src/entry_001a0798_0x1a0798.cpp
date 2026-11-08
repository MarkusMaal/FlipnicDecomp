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

// Function: entry_001a0798
// Address: 0x1a0798 - 0x1a07c8
void entry_001a0798_0x1a0798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0798_0x1a0798");
#endif

    ctx->pc = 0x1a0798u;

    // 0x1a0798: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a0798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x1a079c: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x1a079cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1a07a0: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A07A0u;
    {
        const bool branch_taken_0x1a07a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07a0) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
    ctx->pc = 0x1A07A8u;
    // 0x1a07a8: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x1a07a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x1a07ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A07ACu;
    {
        const bool branch_taken_0x1a07ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07ac) {
            ctx->pc = 0x1A07C8u;
            return;
        }
    }
    ctx->pc = 0x1A07B4u;
    // 0x1a07b4: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1a07b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1a07b8: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1a07b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x1a07bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a07bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a07c0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a07c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a07c4: 0x0  nop
    ctx->pc = 0x1a07c4u;
    // NOP
    ctx->pc = 0x1a07c8u;
}
