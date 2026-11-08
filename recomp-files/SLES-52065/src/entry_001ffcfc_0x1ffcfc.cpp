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

// Function: entry_001ffcfc
// Address: 0x1ffcfc - 0x1ffd04
void entry_001ffcfc_0x1ffcfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffcfc_0x1ffcfc");
#endif

    ctx->pc = 0x1ffcfcu;

    // 0x1ffcfc: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x1ffcfcu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ffd00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ffd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ffd04u;
}
