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

// Function: entry_0012f354
// Address: 0x12f354 - 0x12f364
void entry_0012f354_0x12f354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f354_0x12f354");
#endif

    ctx->pc = 0x12f354u;

    // 0x12f354: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x12f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12f358: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12f358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12f35c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f360: 0x0  nop
    ctx->pc = 0x12f360u;
    // NOP
    ctx->pc = 0x12f364u;
}
