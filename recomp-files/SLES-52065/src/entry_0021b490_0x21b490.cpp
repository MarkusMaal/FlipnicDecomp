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

// Function: entry_0021b490
// Address: 0x21b490 - 0x21b4a0
void entry_0021b490_0x21b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b490_0x21b490");
#endif

    ctx->pc = 0x21b490u;

    // 0x21b490: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x21b490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
    // 0x21b494: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21b494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b498: 0xdca46708  ld          $a0, 0x6708($a1)
    ctx->pc = 0x21b498u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x80076708u));
    // 0x21b49c: 0x641016  dsrlv       $v0, $a0, $v1
    ctx->pc = 0x21b49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
    ctx->pc = 0x21b4a0u;
}
