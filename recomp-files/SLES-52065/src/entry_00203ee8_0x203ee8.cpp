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

// Function: entry_00203ee8
// Address: 0x203ee8 - 0x203ef0
void entry_00203ee8_0x203ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203ee8_0x203ee8");
#endif

    ctx->pc = 0x203ee8u;

    // 0x203ee8: 0xde83fff8  ld          $v1, -0x8($s4)
    ctx->pc = 0x203ee8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x203eec: 0xffa30200  sd          $v1, 0x200($sp)
    ctx->pc = 0x203eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 3));
    ctx->pc = 0x203ef0u;
}
