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

// Function: entry_00187f34
// Address: 0x187f34 - 0x187f78
void entry_00187f34_0x187f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f34_0x187f34");
#endif

    ctx->pc = 0x187f34u;

    // 0x187f34: 0x14640100  bne         $v1, $a0, . + 4 + (0x100 << 2)
    ctx->pc = 0x187F34u;
    {
        const bool branch_taken_0x187f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x187f34) {
            ctx->pc = 0x188338u;
            return;
        }
    }
    ctx->pc = 0x187F3Cu;
    // 0x187f3c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x187f3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x187f40: 0x144000fd  bnez        $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x187F40u;
    {
        const bool branch_taken_0x187f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187f40) {
            ctx->pc = 0x188338u;
            return;
        }
    }
    ctx->pc = 0x187F48u;
    // 0x187f48: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x187f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x187f4c: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x187F4Cu;
    {
        const bool branch_taken_0x187f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x187f4c) {
            ctx->pc = 0x187F78u;
            return;
        }
    }
    ctx->pc = 0x187F54u;
    // 0x187f54: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x187f54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x187f58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187F58u;
    {
        const bool branch_taken_0x187f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187f58) {
            ctx->pc = 0x187F78u;
            return;
        }
    }
    ctx->pc = 0x187F60u;
    // 0x187f60: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x187f60u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x187f64: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x187f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x187f68: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x187f68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x187f6c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x187f6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x187f70: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x187F70u;
    {
        const bool branch_taken_0x187f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F70u;
        // 0x187f74: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f70) {
            ctx->pc = 0x188394u;
            return;
        }
    }
    ctx->pc = 0x187F78u;
}
