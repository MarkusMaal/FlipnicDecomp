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

// Function: entry_00204498
// Address: 0x204498 - 0x2044a0
void entry_00204498_0x204498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204498_0x204498");
#endif

    ctx->pc = 0x204498u;

    // 0x204498: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x204498u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x20449c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x20449cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x2044a0u;
}
