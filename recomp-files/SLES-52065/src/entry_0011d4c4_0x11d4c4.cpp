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

// Function: entry_0011d4c4
// Address: 0x11d4c4 - 0x11d4dc
void entry_0011d4c4_0x11d4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d4c4_0x11d4c4");
#endif

    ctx->pc = 0x11d4c4u;

    // 0x11d4c4: 0x0  nop
    ctx->pc = 0x11d4c4u;
    // NOP
    // 0x11d4c8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x11d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x11d4cc: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x11D4CCu;
    {
        const bool branch_taken_0x11d4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d4cc) {
            ctx->pc = 0x11D59Cu;
            return;
        }
    }
    ctx->pc = 0x11D4D4u;
    // 0x11d4d4: 0x8eb40100  lw          $s4, 0x100($s5)
    ctx->pc = 0x11d4d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 256)));
    // 0x11d4d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11d4d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11d4dcu;
}
