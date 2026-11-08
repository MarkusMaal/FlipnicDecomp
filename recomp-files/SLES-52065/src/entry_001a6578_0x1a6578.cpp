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

// Function: entry_001a6578
// Address: 0x1a6578 - 0x1a659c
void entry_001a6578_0x1a6578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6578_0x1a6578");
#endif

    switch (ctx->pc) {
        case 0x1a6594u: goto label_1a6594;
        default: break;
    }

    ctx->pc = 0x1a6578u;

    // 0x1a6578: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a6578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a657c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a657cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a6580: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1a6580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1a6584: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a6584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a6588: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a6588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a658c: 0xc069994  jal         func_1A6650
    ctx->pc = 0x1A658Cu;
    SET_GPR_U32(ctx, 31, 0x1A6594u);
    ctx->pc = 0x1A6590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A658Cu;
    // 0x1a6590: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6650u, 0x1A658Cu, 0x1A6594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6594u;
label_1a6594:
    // 0x1a6594: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1A6594u;
    {
        const bool branch_taken_0x1a6594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6594) {
            ctx->pc = 0x1A6624u;
            return;
        }
    }
    ctx->pc = 0x1A659Cu;
}
