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

// Function: entry_0013fc3c
// Address: 0x13fc3c - 0x13fc58
void entry_0013fc3c_0x13fc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fc3c_0x13fc3c");
#endif

    ctx->pc = 0x13fc3cu;

    // 0x13fc3c: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x13fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x13fc40: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x13fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x13fc44: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13fc44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13fc48: 0xafb20050  sw          $s2, 0x50($sp)
    ctx->pc = 0x13fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 18));
    // 0x13fc4c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13fc50: 0x27ab0050  addiu       $t3, $sp, 0x50
    ctx->pc = 0x13fc50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13fc54: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x13fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    ctx->pc = 0x13fc58u;
}
