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

// Function: entry_0012b714
// Address: 0x12b714 - 0x12b738
void entry_0012b714_0x12b714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b714_0x12b714");
#endif

    ctx->pc = 0x12b714u;

    // 0x12b714: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x12b714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x12b718: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x12b718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12b71c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x12b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x12b720: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12b720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b724: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12b724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b728: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x12b728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12b72c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x12b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x12b730: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x12b730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x12b734: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x12b734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    ctx->pc = 0x12b738u;
}
