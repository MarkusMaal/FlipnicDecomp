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

// Function: caseD_2e
// Address: 0x205bbc - 0x205bd0
void caseD_2e_0x205bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2e_0x205bbc");
#endif

    ctx->pc = 0x205bbcu;

    // 0x205bbc: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x205bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
    // 0x205bc0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x205BC0u;
    {
        const bool branch_taken_0x205bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BC0u;
        // 0x205bc4: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bc0) {
            ctx->pc = 0x205C2Cu;
            return;
        }
    }
    ctx->pc = 0x205BC8u;
    // 0x205bc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x205BC8u;
    {
        const bool branch_taken_0x205bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BC8u;
        // 0x205bcc: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bc8) {
            ctx->pc = 0x205BE8u;
            return;
        }
    }
    ctx->pc = 0x205BD0u;
}
