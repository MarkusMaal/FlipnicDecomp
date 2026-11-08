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

// Function: entry_0019d154
// Address: 0x19d154 - 0x19d178
void entry_0019d154_0x19d154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d154_0x19d154");
#endif

    ctx->pc = 0x19d154u;

    // 0x19d154: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x19d154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19d158: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x19d158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x19d15c: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x19D15Cu;
    {
        const bool branch_taken_0x19d15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d15c) {
            ctx->pc = 0x19D224u;
            return;
        }
    }
    ctx->pc = 0x19D164u;
    // 0x19d164: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x19d164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x19d168: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D168u;
    {
        const bool branch_taken_0x19d168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d168) {
            ctx->pc = 0x19D178u;
            return;
        }
    }
    ctx->pc = 0x19D170u;
    // 0x19d170: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x19D170u;
    {
        const bool branch_taken_0x19d170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d170) {
            ctx->pc = 0x19D2C8u;
            return;
        }
    }
    ctx->pc = 0x19D178u;
}
