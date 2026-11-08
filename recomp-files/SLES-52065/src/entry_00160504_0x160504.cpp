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

// Function: entry_00160504
// Address: 0x160504 - 0x160518
void entry_00160504_0x160504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160504_0x160504");
#endif

    switch (ctx->pc) {
        case 0x160510u: goto label_160510;
        default: break;
    }

    ctx->pc = 0x160504u;

    // 0x160504: 0xc4ad0008  lwc1        $f13, 0x8($a1)
    ctx->pc = 0x160504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x160508: 0xc05835c  jal         func_160D70
    ctx->pc = 0x160508u;
    SET_GPR_U32(ctx, 31, 0x160510u);
    ctx->pc = 0x16050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160508u;
    // 0x16050c: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D70u, 0x160508u, 0x160510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160510u;
label_160510:
    // 0x160510: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x160510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x160514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160518u;
}
