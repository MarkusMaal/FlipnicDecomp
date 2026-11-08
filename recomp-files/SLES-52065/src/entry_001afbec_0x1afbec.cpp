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

// Function: entry_001afbec
// Address: 0x1afbec - 0x1afc00
void entry_001afbec_0x1afbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afbec_0x1afbec");
#endif

    ctx->pc = 0x1afbecu;

    // 0x1afbec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFBECu;
    {
        const bool branch_taken_0x1afbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afbec) {
            ctx->pc = 0x1AFC00u;
            return;
        }
    }
    ctx->pc = 0x1AFBF4u;
    // 0x1afbf4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1afbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1afbf8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1afbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1afbfc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afbfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1afc00u;
}
