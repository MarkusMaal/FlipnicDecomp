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

// Function: caseD_1
// Address: 0x18e7b0 - 0x18e7f0
void caseD_1_0x18e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x18e7b0");
#endif

    ctx->pc = 0x18e7b0u;

    // 0x18e7b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e7b4: 0xae222720  sw          $v0, 0x2720($s1)
    ctx->pc = 0x18e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 2));
    // 0x18e7b8: 0x8e250484  lw          $a1, 0x484($s1)
    ctx->pc = 0x18e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
    // 0x18e7bc: 0x8e23271c  lw          $v1, 0x271C($s1)
    ctx->pc = 0x18e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
    // 0x18e7c0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x18e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18e7c4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E7C4u;
    {
        const bool branch_taken_0x18e7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e7c4) {
            ctx->pc = 0x18E7F0u;
            return;
        }
    }
    ctx->pc = 0x18E7CCu;
    // 0x18e7cc: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18e7d0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x18e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18e7d4: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x18e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18e7d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18e7dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e7e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18e7e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e7e8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x18e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x18e7ec: 0xae220470  sw          $v0, 0x470($s1)
    ctx->pc = 0x18e7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1136), GPR_U32(ctx, 2));
    ctx->pc = 0x18e7f0u;
}
