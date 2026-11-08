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

// Function: entry_00179e8c
// Address: 0x179e8c - 0x179e9c
void entry_00179e8c_0x179e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179e8c_0x179e8c");
#endif

    ctx->pc = 0x179e8cu;

    // 0x179e8c: 0x0  nop
    ctx->pc = 0x179e8cu;
    // NOP
    // 0x179e90: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x179e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x179e94: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x179e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x179e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x179e9cu;
}
