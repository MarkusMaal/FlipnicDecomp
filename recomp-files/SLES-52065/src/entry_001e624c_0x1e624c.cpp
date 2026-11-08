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

// Function: entry_001e624c
// Address: 0x1e624c - 0x1e6268
void entry_001e624c_0x1e624c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e624c_0x1e624c");
#endif

    ctx->pc = 0x1e624cu;

    // 0x1e624c: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1e624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1e6250: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e6250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e6254: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e6254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e6258: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e6258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e625c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e625cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6260: 0x0  nop
    ctx->pc = 0x1e6260u;
    // NOP
    // 0x1e6264: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e6264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1e6268u;
}
