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

// Function: entry_00196fd4
// Address: 0x196fd4 - 0x196fe4
void entry_00196fd4_0x196fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196fd4_0x196fd4");
#endif

    ctx->pc = 0x196fd4u;

    // 0x196fd4: 0xaea20328  sw          $v0, 0x328($s5)
    ctx->pc = 0x196fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 808), GPR_U32(ctx, 2));
    // 0x196fd8: 0xaea00670  sw          $zero, 0x670($s5)
    ctx->pc = 0x196fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 0));
    // 0x196fdc: 0xaea006a4  sw          $zero, 0x6A4($s5)
    ctx->pc = 0x196fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1700), GPR_U32(ctx, 0));
    // 0x196fe0: 0xaea006ac  sw          $zero, 0x6AC($s5)
    ctx->pc = 0x196fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1708), GPR_U32(ctx, 0));
    ctx->pc = 0x196fe4u;
}
