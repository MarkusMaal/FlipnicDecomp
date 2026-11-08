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

// Function: entry_0010f58c
// Address: 0x10f58c - 0x10f5a4
void entry_0010f58c_0x10f58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f58c_0x10f58c");
#endif

    ctx->pc = 0x10f58cu;

    // 0x10f58c: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x10f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x10f590: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x10f590u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x10f594: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10f598: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f59c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F59Cu;
    {
        const bool branch_taken_0x10f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F59Cu;
        // 0x10f5a0: 0xa2030224  sb          $v1, 0x224($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 548), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f59c) {
            ctx->pc = 0x10F5ACu;
            return;
        }
    }
    ctx->pc = 0x10F5A4u;
}
