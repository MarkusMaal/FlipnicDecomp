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

// Function: entry_0018ea64
// Address: 0x18ea64 - 0x18eae4
void entry_0018ea64_0x18ea64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ea64_0x18ea64");
#endif

    ctx->pc = 0x18ea64u;

    // 0x18ea64: 0x1240008b  beqz        $s2, . + 4 + (0x8B << 2)
    ctx->pc = 0x18EA64u;
    {
        const bool branch_taken_0x18ea64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea64) {
            ctx->pc = 0x18EC94u;
            return;
        }
    }
    ctx->pc = 0x18EA6Cu;
    // 0x18ea6c: 0x8e220450  lw          $v0, 0x450($s1)
    ctx->pc = 0x18ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18ea70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ea74: 0xae220454  sw          $v0, 0x454($s1)
    ctx->pc = 0x18ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 2));
    // 0x18ea78: 0x8e220484  lw          $v0, 0x484($s1)
    ctx->pc = 0x18ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
    // 0x18ea7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ea80: 0xae220484  sw          $v0, 0x484($s1)
    ctx->pc = 0x18ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1156), GPR_U32(ctx, 2));
    // 0x18ea84: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
    // 0x18ea88: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18ea8c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18ea90: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ea94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18ea98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ea9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18eaa0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18eaa4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x18eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x18eaa8: 0xae220470  sw          $v0, 0x470($s1)
    ctx->pc = 0x18eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1136), GPR_U32(ctx, 2));
    // 0x18eaac: 0x8e220484  lw          $v0, 0x484($s1)
    ctx->pc = 0x18eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
    // 0x18eab0: 0x8e23271c  lw          $v1, 0x271C($s1)
    ctx->pc = 0x18eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
    // 0x18eab4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18eab8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18EAB8u;
    {
        const bool branch_taken_0x18eab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18eab8) {
            ctx->pc = 0x18EAE4u;
            return;
        }
    }
    ctx->pc = 0x18EAC0u;
    // 0x18eac0: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18eac4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18eac8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18eacc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18ead0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ead4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18ead8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18eadc: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x18eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x18eae0: 0xae220474  sw          $v0, 0x474($s1)
    ctx->pc = 0x18eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1140), GPR_U32(ctx, 2));
    ctx->pc = 0x18eae4u;
}
