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

// Function: entry_0013fda4
// Address: 0x13fda4 - 0x13fdc4
void entry_0013fda4_0x13fda4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fda4_0x13fda4");
#endif

    ctx->pc = 0x13fda4u;

    // 0x13fda4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x13fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13fda8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x13fda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13fdac: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x13fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13fdb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13fdb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13fdb8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13fdbc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x13fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x13fdc0: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x13fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    ctx->pc = 0x13fdc4u;
}
