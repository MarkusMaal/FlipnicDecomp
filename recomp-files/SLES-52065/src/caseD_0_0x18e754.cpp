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

// Function: caseD_0
// Address: 0x18e754 - 0x18e7b0
void caseD_0_0x18e754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x18e754");
#endif

    ctx->pc = 0x18e754u;

    // 0x18e754: 0x8e250484  lw          $a1, 0x484($s1)
    ctx->pc = 0x18e754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
    // 0x18e758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e75c: 0x8e262724  lw          $a2, 0x2724($s1)
    ctx->pc = 0x18e75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18e760: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18e760u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18e764: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x18e764u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18e768: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x18e768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18e76c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x18e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18e770: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18e770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18e774: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18e774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18e778: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x18e778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x18e77c: 0xae240470  sw          $a0, 0x470($s1)
    ctx->pc = 0x18e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1136), GPR_U32(ctx, 4));
    // 0x18e780: 0x8e25271c  lw          $a1, 0x271C($s1)
    ctx->pc = 0x18e780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
    // 0x18e784: 0x8e262724  lw          $a2, 0x2724($s1)
    ctx->pc = 0x18e784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18e788: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18e788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18e78c: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x18e78cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18e790: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x18e790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18e794: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x18e794u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18e798: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18e798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18e79c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18e7a0: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x18e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x18e7a4: 0xae240474  sw          $a0, 0x474($s1)
    ctx->pc = 0x18e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1140), GPR_U32(ctx, 4));
    // 0x18e7a8: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x18E7A8u;
    {
        const bool branch_taken_0x18e7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7A8u;
        // 0x18e7ac: 0xae232720  sw          $v1, 0x2720($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7a8) {
            ctx->pc = 0x18EC94u;
            return;
        }
    }
    ctx->pc = 0x18E7B0u;
}
