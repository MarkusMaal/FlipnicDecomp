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

// Function: entry_001a655c
// Address: 0x1a655c - 0x1a6578
void entry_001a655c_0x1a655c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a655c_0x1a655c");
#endif

    switch (ctx->pc) {
        case 0x1a6570u: goto label_1a6570;
        default: break;
    }

    ctx->pc = 0x1a655cu;

    // 0x1a655c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a655cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a6560: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a6560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1a6564: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a6564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a6568: 0xc069994  jal         func_1A6650
    ctx->pc = 0x1A6568u;
    SET_GPR_U32(ctx, 31, 0x1A6570u);
    ctx->pc = 0x1A656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6568u;
    // 0x1a656c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6650u, 0x1A6568u, 0x1A6570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6570u;
label_1a6570:
    // 0x1a6570: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1A6570u;
    {
        const bool branch_taken_0x1a6570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6570) {
            ctx->pc = 0x1A6624u;
            return;
        }
    }
    ctx->pc = 0x1A6578u;
}
