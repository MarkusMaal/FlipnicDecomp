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

// Function: entry_001458cc
// Address: 0x1458cc - 0x1458e4
void entry_001458cc_0x1458cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001458cc_0x1458cc");
#endif

    ctx->pc = 0x1458ccu;

    // 0x1458cc: 0x0  nop
    ctx->pc = 0x1458ccu;
    // NOP
    // 0x1458d0: 0x27b100dc  addiu       $s1, $sp, 0xDC
    ctx->pc = 0x1458d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x1458d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1458d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1458d8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1458d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1458dc: 0x1462ffdf  bne         $v1, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1458DCu;
    {
        const bool branch_taken_0x1458dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1458dc) {
            ctx->pc = 0x14585Cu;
            return;
        }
    }
    ctx->pc = 0x1458E4u;
}
