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

// Function: entry_0015e598
// Address: 0x15e598 - 0x15e5d0
void entry_0015e598_0x15e598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e598_0x15e598");
#endif

    ctx->pc = 0x15e598u;

    // 0x15e598: 0x8ee32c1c  lw          $v1, 0x2C1C($s7)
    ctx->pc = 0x15e598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11292)));
    // 0x15e59c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x15e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x15e5a0: 0x8466000a  lh          $a2, 0xA($v1)
    ctx->pc = 0x15e5a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x15e5a4: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x15e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15e5a8: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x15e5a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15e5ac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e5b0: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x15e5b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15e5b4: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x15e5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15e5b8: 0x223b021  addu        $s6, $s1, $v1
    ctx->pc = 0x15e5b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x15e5bc: 0x236082a  slt         $at, $s1, $s6
    ctx->pc = 0x15e5bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x15e5c0: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x15E5C0u;
    {
        const bool branch_taken_0x15e5c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5c0) {
            ctx->pc = 0x15E684u;
            return;
        }
    }
    ctx->pc = 0x15E5C8u;
    // 0x15e5c8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15e5cc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x15e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    ctx->pc = 0x15e5d0u;
}
