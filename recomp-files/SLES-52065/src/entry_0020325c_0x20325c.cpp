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

// Function: entry_0020325c
// Address: 0x20325c - 0x203268
void entry_0020325c_0x20325c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020325c_0x20325c");
#endif

    ctx->pc = 0x20325cu;

    // 0x20325c: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x20325cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x203260: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x203260u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x203264: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x203264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    ctx->pc = 0x203268u;
}
