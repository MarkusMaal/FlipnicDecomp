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

// Function: entry_00102f14
// Address: 0x102f14 - 0x102f48
void entry_00102f14_0x102f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102f14_0x102f14");
#endif

    ctx->pc = 0x102f14u;

    // 0x102f14: 0x0  nop
    ctx->pc = 0x102f14u;
    // NOP
    // 0x102f18: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x102f18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x102f1c: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x102f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x102f20: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x102f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x102f24: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x102f24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x102f28: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x102f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x102f2c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x102f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x102f30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x102f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102f34: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x102f34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102f38: 0x14560003  bne         $v0, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x102F38u;
    {
        const bool branch_taken_0x102f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x102f38) {
            ctx->pc = 0x102F48u;
            return;
        }
    }
    ctx->pc = 0x102F40u;
    // 0x102f40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x102F40u;
    {
        const bool branch_taken_0x102f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F40u;
        // 0x102f44: 0x84620002  lh          $v0, 0x2($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f40) {
            ctx->pc = 0x102F64u;
            return;
        }
    }
    ctx->pc = 0x102F48u;
}
