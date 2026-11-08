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

// Function: entry_0012782c
// Address: 0x12782c - 0x127844
void entry_0012782c_0x12782c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012782c_0x12782c");
#endif

    ctx->pc = 0x12782cu;

    // 0x12782c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x12782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x127830: 0x8e120034  lw          $s2, 0x34($s0)
    ctx->pc = 0x127830u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x127834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x127834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127838: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x127838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x12783c: 0x1251000b  beq         $s2, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x12783Cu;
    {
        const bool branch_taken_0x12783c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x12783c) {
            ctx->pc = 0x12786Cu;
            return;
        }
    }
    ctx->pc = 0x127844u;
}
