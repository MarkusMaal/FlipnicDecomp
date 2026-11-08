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

// Function: entry_0011983c
// Address: 0x11983c - 0x119864
void entry_0011983c_0x11983c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011983c_0x11983c");
#endif

    ctx->pc = 0x11983cu;

    // 0x11983c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x11983cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x119840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119844: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x119844u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x119848: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x119848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x11984c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x11984cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x119850: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x119850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x119854: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x119854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x119858: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119858u;
    {
        const bool branch_taken_0x119858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119858) {
            ctx->pc = 0x119864u;
            return;
        }
    }
    ctx->pc = 0x119860u;
    // 0x119860: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x119860u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x119864u;
}
