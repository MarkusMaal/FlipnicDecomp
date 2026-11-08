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

// Function: entry_00148ac0
// Address: 0x148ac0 - 0x148af8
void entry_00148ac0_0x148ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148ac0_0x148ac0");
#endif

    ctx->pc = 0x148ac0u;

    // 0x148ac0: 0x8df00000  lw          $s0, 0x0($t7)
    ctx->pc = 0x148ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148ac4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x148ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148ac8: 0xadf00000  sw          $s0, 0x0($t7)
    ctx->pc = 0x148ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 16));
    // 0x148acc: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x148accu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148ad0: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x148ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x148ad4: 0xadd10000  sw          $s1, 0x0($t6)
    ctx->pc = 0x148ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 17));
    // 0x148ad8: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x148ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148adc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x148adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148ae0: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x148ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x148ae4: 0x19c880  sll         $t9, $t9, 2
    ctx->pc = 0x148ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x148ae8: 0x219c821  addu        $t9, $s0, $t9
    ctx->pc = 0x148ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x148aec: 0x16390002  bne         $s1, $t9, . + 4 + (0x2 << 2)
    ctx->pc = 0x148AECu;
    {
        const bool branch_taken_0x148aec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 25));
        if (branch_taken_0x148aec) {
            ctx->pc = 0x148AF8u;
            return;
        }
    }
    ctx->pc = 0x148AF4u;
    // 0x148af4: 0xadd00000  sw          $s0, 0x0($t6)
    ctx->pc = 0x148af4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x148af8u;
}
