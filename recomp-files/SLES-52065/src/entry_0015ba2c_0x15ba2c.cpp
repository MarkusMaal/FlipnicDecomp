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

// Function: entry_0015ba2c
// Address: 0x15ba2c - 0x15ba3c
void entry_0015ba2c_0x15ba2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ba2c_0x15ba2c");
#endif

    ctx->pc = 0x15ba2cu;

    // 0x15ba2c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15ba2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x15ba30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15ba30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ba34: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x15BA34u;
    SET_GPR_U32(ctx, 31, 0x15BA3Cu);
    ctx->pc = 0x15BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BA34u;
    // 0x15ba38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x15BA34u, 0x15BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA3Cu;
}
