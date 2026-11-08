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

// Function: entry_0018827c
// Address: 0x18827c - 0x1882a0
void entry_0018827c_0x18827c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018827c_0x18827c");
#endif

    ctx->pc = 0x18827cu;

    // 0x18827c: 0x0  nop
    ctx->pc = 0x18827cu;
    // NOP
    // 0x188280: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x188280u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188284: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x188284u;
    {
        const bool branch_taken_0x188284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x188284) {
            ctx->pc = 0x188268u;
            return;
        }
    }
    ctx->pc = 0x18828Cu;
    // 0x18828c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x18828cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x188290: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x188290u;
    {
        const bool branch_taken_0x188290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188290) {
            ctx->pc = 0x188268u;
            return;
        }
    }
    ctx->pc = 0x188298u;
    // 0x188298: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x188298u;
    {
        const bool branch_taken_0x188298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188298) {
            ctx->pc = 0x188394u;
            return;
        }
    }
    ctx->pc = 0x1882A0u;
}
