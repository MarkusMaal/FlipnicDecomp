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

// Function: entry_001a05e0
// Address: 0x1a05e0 - 0x1a0610
void entry_001a05e0_0x1a05e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a05e0_0x1a05e0");
#endif

    ctx->pc = 0x1a05e0u;

    // 0x1a05e0: 0x8e450664  lw          $a1, 0x664($s2)
    ctx->pc = 0x1a05e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x1a05e4: 0x8ca4003c  lw          $a0, 0x3C($a1)
    ctx->pc = 0x1a05e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1a05e8: 0x10800094  beqz        $a0, . + 4 + (0x94 << 2)
    ctx->pc = 0x1A05E8u;
    {
        const bool branch_taken_0x1a05e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a05e8) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
    ctx->pc = 0x1A05F0u;
    // 0x1a05f0: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x1a05f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x1a05f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A05F4u;
    {
        const bool branch_taken_0x1a05f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a05f4) {
            ctx->pc = 0x1A0610u;
            return;
        }
    }
    ctx->pc = 0x1A05FCu;
    // 0x1a05fc: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1a05fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1a0600: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1a0600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x1a0604: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0608: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a0608u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a060c: 0x0  nop
    ctx->pc = 0x1a060cu;
    // NOP
    ctx->pc = 0x1a0610u;
}
