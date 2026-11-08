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

// Function: entry_001dd878
// Address: 0x1dd878 - 0x1dd8a0
void entry_001dd878_0x1dd878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd878_0x1dd878");
#endif

    ctx->pc = 0x1dd878u;

    // 0x1dd878: 0x2301823  subu        $v1, $s1, $s0
    ctx->pc = 0x1dd878u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1dd87c: 0x26447330  addiu       $a0, $s2, 0x7330
    ctx->pc = 0x1dd87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29488));
    // 0x1dd880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd884: 0x2405f7ff  addiu       $a1, $zero, -0x801
    ctx->pc = 0x1dd884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1dd888: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1dd888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1dd88c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd894: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd898: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1dd898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1dd89c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1dd89cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1dd8a0u;
}
