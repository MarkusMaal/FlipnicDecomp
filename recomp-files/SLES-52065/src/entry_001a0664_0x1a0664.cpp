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

// Function: entry_001a0664
// Address: 0x1a0664 - 0x1a0694
void entry_001a0664_0x1a0664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0664_0x1a0664");
#endif

    ctx->pc = 0x1a0664u;

    // 0x1a0664: 0x8e450664  lw          $a1, 0x664($s2)
    ctx->pc = 0x1a0664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x1a0668: 0x8ca4003c  lw          $a0, 0x3C($a1)
    ctx->pc = 0x1a0668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1a066c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A066Cu;
    {
        const bool branch_taken_0x1a066c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a066c) {
            ctx->pc = 0x1A06D8u;
            return;
        }
    }
    ctx->pc = 0x1A0674u;
    // 0x1a0674: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x1a0674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x1a0678: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0678u;
    {
        const bool branch_taken_0x1a0678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0678) {
            ctx->pc = 0x1A0694u;
            return;
        }
    }
    ctx->pc = 0x1A0680u;
    // 0x1a0680: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1a0680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1a0684: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1a0684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x1a0688: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a068c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a068cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0690: 0x0  nop
    ctx->pc = 0x1a0690u;
    // NOP
    ctx->pc = 0x1a0694u;
}
