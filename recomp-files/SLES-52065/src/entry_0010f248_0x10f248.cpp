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

// Function: entry_0010f248
// Address: 0x10f248 - 0x10f260
void entry_0010f248_0x10f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f248_0x10f248");
#endif

    ctx->pc = 0x10f248u;

    // 0x10f248: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x10f248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x10f24c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x10f24cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x10f250: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f254: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10f254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10f258: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10F258u;
    {
        const bool branch_taken_0x10f258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F258u;
        // 0x10f25c: 0xa2420230  sb          $v0, 0x230($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 560), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f258) {
            ctx->pc = 0x10F27Cu;
            return;
        }
    }
    ctx->pc = 0x10F260u;
}
