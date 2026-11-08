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

// Function: entry_001a1960
// Address: 0x1a1960 - 0x1a1988
void entry_001a1960_0x1a1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1960_0x1a1960");
#endif

    switch (ctx->pc) {
        case 0x1a1968u: goto label_1a1968;
        case 0x1a1978u: goto label_1a1978;
        case 0x1a1984u: goto label_1a1984;
        default: break;
    }

    ctx->pc = 0x1a1960u;

    // 0x1a1960: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A1960u;
    SET_GPR_U32(ctx, 31, 0x1A1968u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A1960u, 0x1A1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1968u;
label_1a1968:
    // 0x1a1968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a196c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1a196cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1a1970: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A1970u;
    SET_GPR_U32(ctx, 31, 0x1A1978u);
    ctx->pc = 0x1A1974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1970u;
    // 0x1a1974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A1970u, 0x1A1978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1978u;
label_1a1978:
    // 0x1a1978: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a197c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A197Cu;
    SET_GPR_U32(ctx, 31, 0x1A1984u);
    ctx->pc = 0x1A1980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A197Cu;
    // 0x1a1980: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A197Cu, 0x1A1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1984u;
label_1a1984:
    // 0x1a1984: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a1984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1a1988u;
}
