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

// Function: entry_0020388c
// Address: 0x20388c - 0x2038ac
void entry_0020388c_0x20388c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020388c_0x20388c");
#endif

    ctx->pc = 0x20388cu;

    // 0x20388c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20388cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203890: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x203890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x203894: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x203894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x203898: 0xa091ffff  sb          $s1, -0x1($a0)
    ctx->pc = 0x203898u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x20389c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20389cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2038a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2038a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2038a4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2038A4u;
    {
        const bool branch_taken_0x2038a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038A4u;
        // 0x2038a8: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038a4) {
            ctx->pc = 0x20391Cu;
            return;
        }
    }
    ctx->pc = 0x2038ACu;
}
