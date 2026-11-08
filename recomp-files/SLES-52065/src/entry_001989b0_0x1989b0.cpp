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

// Function: entry_001989b0
// Address: 0x1989b0 - 0x1989d4
void entry_001989b0_0x1989b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001989b0_0x1989b0");
#endif

    ctx->pc = 0x1989b0u;

    // 0x1989b0: 0x8e240450  lw          $a0, 0x450($s1)
    ctx->pc = 0x1989b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x1989b4: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1989b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1989b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1989b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1989bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1989bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1989c0: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1989c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1989c4: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1989c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1989c8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1989C8u;
    {
        const bool branch_taken_0x1989c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1989c8) {
            ctx->pc = 0x1989D4u;
            return;
        }
    }
    ctx->pc = 0x1989D0u;
    // 0x1989d0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1989d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1989d4u;
}
