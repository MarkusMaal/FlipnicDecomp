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

// Function: entry_001df514
// Address: 0x1df514 - 0x1df52c
void entry_001df514_0x1df514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df514_0x1df514");
#endif

    ctx->pc = 0x1df514u;

    // 0x1df514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df518: 0x26a29f00  addiu       $v0, $s5, -0x6100
    ctx->pc = 0x1df518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942464));
    // 0x1df51c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1df51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df520: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1df520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1df524: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x1df524u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x1df528: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1df528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1df52cu;
}
