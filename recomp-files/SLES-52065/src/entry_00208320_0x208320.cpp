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

// Function: entry_00208320
// Address: 0x208320 - 0x20832c
void entry_00208320_0x208320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208320_0x208320");
#endif

    ctx->pc = 0x208320u;

    // 0x208320: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x208320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208324: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x208324u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x208328: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x208328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20832cu;
}
