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

// Function: entry_0017eabc
// Address: 0x17eabc - 0x17ead4
void entry_0017eabc_0x17eabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eabc_0x17eabc");
#endif

    ctx->pc = 0x17eabcu;

    // 0x17eabc: 0x0  nop
    ctx->pc = 0x17eabcu;
    // NOP
    // 0x17eac0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17eac4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EAC4u;
    {
        const bool branch_taken_0x17eac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eac4) {
            ctx->pc = 0x17EAD4u;
            return;
        }
    }
    ctx->pc = 0x17EACCu;
    // 0x17eacc: 0xc04cea4  jal         func_133A90
    ctx->pc = 0x17EACCu;
    SET_GPR_U32(ctx, 31, 0x17EAD4u);
    ctx->pc = 0x133A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133A90u, 0x17EACCu, 0x17EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAD4u;
}
