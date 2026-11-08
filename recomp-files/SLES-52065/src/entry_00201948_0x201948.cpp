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

// Function: entry_00201948
// Address: 0x201948 - 0x201958
void entry_00201948_0x201948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201948_0x201948");
#endif

    ctx->pc = 0x201948u;

    // 0x201948: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x201948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20194c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20194cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x201950: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x201950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x201954: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x201954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    ctx->pc = 0x201958u;
}
