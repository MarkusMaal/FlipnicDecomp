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

// Function: entry_001415ac
// Address: 0x1415ac - 0x1415cc
void entry_001415ac_0x1415ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001415ac_0x1415ac");
#endif

    ctx->pc = 0x1415acu;

    // 0x1415ac: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x1415acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1415b0: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x1415b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1415b4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1415b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1415b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1415b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1415bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1415bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1415c0: 0xafa70144  sw          $a3, 0x144($sp)
    ctx->pc = 0x1415c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 7));
    // 0x1415c4: 0xafa40148  sw          $a0, 0x148($sp)
    ctx->pc = 0x1415c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 4));
    // 0x1415c8: 0xafb20140  sw          $s2, 0x140($sp)
    ctx->pc = 0x1415c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 18));
    ctx->pc = 0x1415ccu;
}
